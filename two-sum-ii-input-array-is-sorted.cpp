// resolved by Lucas Tourinho Mamede
// complexity O(n)

#include <bits/stdc++>

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while(l < r){
            int soma = numbers[l] + numbers[r];

            if (soma == target) {
                return {l + 1, r + 1};
            } else if (soma < target) {
                l++;
            } else {
                r--;
            }
        }
        return {};
    }
};