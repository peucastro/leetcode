class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 
        unsigned long int rev = 0;
        int tmp = x;

        while (tmp != 0) {
            rev = (rev * 10) + (tmp % 10);
            tmp /= 10;
        }

        return rev == x;
    }
};