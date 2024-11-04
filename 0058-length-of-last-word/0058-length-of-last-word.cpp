class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.empty()) return 0;

        char *p = &s.back();
        while (*p == ' ')
            p--;

        int count = 0;
        while (p != &s.front() - 1 && *p != ' ') {
            count++;
            p--;
        }

        return count;
    }
};
