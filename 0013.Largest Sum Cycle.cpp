#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestSumCycle(vector<int>& edge) {
        int n = edge.size();
        vector<bool> visited(n, false);
        vector<int> path_index(n, -1);
        int max_cycle_sum = -1;

        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;

            int curr = i;
            int step = 0;
            vector<int> current_path;

            // Traverse until we hit a dead end or a previously visited node
            while (curr != -1 && !visited[curr]) {
                visited[curr] = true;
                path_index[curr] = step++;
                current_path.push_back(curr);
                curr = edge[curr];
            }

            // If curr is valid and exists in the current traversal path, a cycle is found
            if (curr != -1 && path_index[curr] != -1) {
                int cycle_sum = 0;
                int start_step = path_index[curr];

                for (int j = start_step; j < (int)current_path.size(); ++j) {
                    cycle_sum += current_path[j];
                }

                max_cycle_sum = max(max_cycle_sum, cycle_sum);
            }

            // Reset path indices for nodes visited in this run
            for (int node : current_path) {
                path_index[node] = -1;
            }
        }

        return max_cycle_sum;
    }
};
