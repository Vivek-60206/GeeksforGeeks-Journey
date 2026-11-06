#include <string>
#include <algorithm>

class Solution {
	public:
	int primeDigits(int n) {
		char digits[] = {'2', '3', '5', '7'};
		std::string res = "";
		
		while (n > 0) {
			int rem = (n - 1) % 4;
			res += digits[rem];
			n = (n - 1) / 4;
		}
		
		std::reverse(res.begin(), res.end());
		return std::stoi(res);
	}
};
