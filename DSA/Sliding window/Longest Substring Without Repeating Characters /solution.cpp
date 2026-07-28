class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int map[256];
        for(int i = 0 ; i <256; i++)
            map[i] = -1;
        int maxCount = 0;
        int left = 0;

        for (int i = 0 ; i<s.size() ; i++){
            if (map[s[i]] >= left){
               left = map[s[i]] + 1;
            }
            map[s[i]] = i;
            maxCount = max (maxCount , i-left+1);
           
        }
        return maxCount;
    }
};
