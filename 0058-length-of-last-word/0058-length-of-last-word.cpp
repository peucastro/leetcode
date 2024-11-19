class Solution {
public:
    int lengthOfLastWord(string s) {
    if (s.empty())
        return 0;

    int count = 0;
    string::iterator p = s.end();
    do {
        p--;
    } while (*p == ' ');

    while (p >= s.begin() && *p != ' ') {
        p--;
        count++;
    }

    return count;
    }
};