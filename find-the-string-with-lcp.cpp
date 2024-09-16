//resolved by Lucas Tourinho Mamede
//time complexity O(n)
//space complexity O(1)

class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        string result(size(lcp), 0);
        for (int i = 0, curr = 'a'; i < size(lcp); ++i) {
            if (result[i]) {
                continue;
            }
            if (curr > 'z') {
                return "";
            }
            for (int j = i; j < size(lcp[0]); ++j) {
                if (lcp[i][j]) {
                    result[j] = curr;
                }
            }
            ++curr;
        }
        for (int i = size(lcp) - 1; i >= 0; --i) {
            for (int j = size(lcp[0]) - 1; j >= 0; --j) {
                if (lcp[i][j] != (result[i] == result[j] ? (i + 1 < size(lcp) && j + 1 < size(lcp[0]) ? lcp[i + 1][j + 1] + 1: 1): 0)) {
                    return "";
                }
            }
        }
        return result;
    }
};