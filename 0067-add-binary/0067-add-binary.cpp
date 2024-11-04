class Solution {
public:
  string addBinary(string a, string b) {
    if (a.empty() || b.empty())
      return "";

    string ans;
    int i = a.size() - 1;
    int j = b.size() - 1;
    bool carry = false;

    while (i >= 0 || j >= 0 || carry) {
      int sum = carry ? 1 : 0;

      if (i >= 0) {
        sum += a[i] - '0';
        i--;
      }
      if (j >= 0) {
        sum += b[j] - '0';
        j--;
      }

      carry = sum > 1;
      ans.push_back((sum % 2) + '0');
    }

    reverse(ans.begin(), ans.end());
    return ans;
  }
};
