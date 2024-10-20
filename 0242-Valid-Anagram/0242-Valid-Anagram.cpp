class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int str1 = s.length();
        int str2 = t.length();

        if (str1 != str2) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
    return true;
    }
};