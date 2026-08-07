class Solution {
public:
   
int characterReplacement(string s, int k) {
        int hash[26] = {0};
        int left = 0, MaxFre = 0, ans = 0;

        for (int right = 0 ; right<s.size() ; right++){
            hash[s[right] - 'A']++;
            MaxFre = max (MaxFre,hash[s[right] - 'A']);

            while ((right-left+1)-MaxFre > k){
                hash[s[left] - 'A']--;
                left++;
            }

            ans = max(ans,right-left+1);
        }
        return ans;
    }

};
