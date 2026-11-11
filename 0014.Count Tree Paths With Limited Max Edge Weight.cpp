#include <vector>
#include <algorithm>

class DSU {
    std::vector<int> parent;
    std::vector<int> sz;

public:
    DSU(int n) {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }
    }

    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    // Unites two sets and returns the number of newly formed paths
    long long unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);

        if (root_i != root_j) {
            long long new_paths = 1LL * sz[root_i] * sz[root_j];
            if (sz[root_i] < sz[root_j]) {
                std::swap(root_i, root_j);
            }
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
            return new_paths;
        }
        return 0;
    }
};

class Solution {
public:
    std::vector<int> maximumWeight(int n, std::vector<std::vector<int>> edges, std::vector<int>& queries) {
        // Sort edges by weight in ascending order: [u, v, w] -> edge[2] is weight
        std::sort(edges.begin(), edges.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[2] < b[2];
        });

        int q_size = queries.size();
        // Store queries alongside their original indices: {weight_limit, original_index}
        std::vector<std::pair<int, int>> sorted_queries(q_size);
        for (int i = 0; i < q_size; ++i) {
            sorted_queries[i] = {queries[i], i};
        }
        std::sort(sorted_queries.begin(), sorted_queries.end());

        DSU dsu(n);
        std::vector<int> ans(q_size);
        long long current_paths = 0;
        int edge_idx = 0;
        int total_edges = edges.size();

        // Process queries in increasing order of weight limit
        for (int i = 0; i < q_size; ++i) {
            int limit = sorted_queries[i].first;
            int original_idx = sorted_queries[i].second;

            // Add all edges whose weight is <= current query limit
            while (edge_idx < total_edges && edges[edge_idx][2] <= limit) {
                int u = edges[edge_idx][0];
                int v = edges[edge_idx][1];
                current_paths += dsu.unite(u, v);
                edge_idx++;
            }

            ans[original_idx] = current_paths;
        }

        return ans;
    }
};
