class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int frequent[26] = {0};
        int n = s.length();
        for (int i = 0 ; i<n ; i++){
           frequent[s[i] - 'a']++;
           frequent[t[i] - 'a']--;
        }
        for (int x : frequent)
           if (x != 0 ) 
             return false;
        return true;
    }
};
