//resolved by Lucas Tourinho Mamede
//time complexity O(n*m) for a matrix with n rows and m columns, or O(n²) if the matrix is square (n x n)
//space complexity O(1) 

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto& row : A) {
            for (int i = 0; i < (row.size() + 1) / 2; ++i) {
                row[i] ^= 1;
                if (i != row.size() + ~i) {
                    row[row.size() + ~i] ^= 1;
                    swap(row[i], row[row.size() + ~i]);
                }
            }
        }
        return A;
    }
};