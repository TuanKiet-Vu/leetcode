class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        if (m<n || n==0) return "";
        int sFreq[128] = {0};
        int formed = 0;

        int mp[128] = {0};
        for (int i = 0 ; i<n ; i++)
            mp[t[i]]++;

        int required = 0;
        for (int i = 0 ; i<128 ; i++)
            if (mp[i]>0) required++;

        int left = 0, right = 0;
        int start = 0, minlen = INT_MAX;
        
        while (right<m){
            char c = s[right];
            sFreq[c]++;
            if (mp[c]>0 && sFreq[c] == mp[c])
                formed++;
            
            while (formed == required){
                if (right - left + 1<minlen){
                    start = left;
                    minlen = right-left+1;
                }
                char lc = s[left];
                sFreq[lc]--;
                if (mp[lc] > 0 && sFreq[lc] < mp[lc])
                    formed--;
                left++;
            }
            right++;
        }
        return minlen != INT_MAX ? s.substr(start,minlen):"";
    }
};
