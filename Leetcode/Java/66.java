/*
    Code by: KoKoDuDu
*/
class Solution {
    public int[] plusOne(int[] digits) {
        for (int i = digits.length - 1; i >= 0; --i) {
            if (digits[i] + 1 == 10) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }

        int[] ans = new int[digits.length + 1];
        ans[0] = 1;

        return ans;
    }
}