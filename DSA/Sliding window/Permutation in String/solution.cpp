class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if (n1>n2) return false;
        int s1Freq[26] = {0};
        int s2Freq[26] = {0};
     
        for (int i = 0 ; i <n1 ; i++){
            s1Freq[s1[i] - 'a']++;
            s2Freq[s2[i] - 'a']++;
        }

        for (int left = 0 ; left<=n2-n1 ; left++){
            int right = left+n1;
            int j = 0;

            for (; j<n1 ; j++)
                if (s1Freq[s1[j] - 'a'] != s2Freq[s1[j] - 'a'])
                    break;
            if (j==n1)
                return true;
                    
            if (right<n2){
              s2Freq[s2[left] - 'a']--;
              s2Freq[s2[right] - 'a']++;
            }
        }
        return false;
    }
};
