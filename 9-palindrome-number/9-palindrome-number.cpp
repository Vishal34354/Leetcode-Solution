class Solution {
public:
    bool isPalindrome(int x) {
        long reverse = 0;
        int start = x;

        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }

        return reverse == start;
    }
};