
/*
    Code by: KoKoDuDu
    Created: 2025.04.07 12:29:08
*/
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        // First create helper function, this function will help us to calculate
        // when I'm including, when I'm not. The XOR of that array
        return helper(nums, 0, 0); // nums, level, current XOR
    }

private:
    int helper(vector<int>& nums, int level, int currentXOR) {
        // base condition
        if (level == nums.size())
            return currentXOR;
        // creating include
        int include = helper(nums, level + 1, currentXOR ^ nums[level]);
        // creating exclude
        int exclude = helper(nums, level + 1, currentXOR);

        return include + exclude;
    }
};