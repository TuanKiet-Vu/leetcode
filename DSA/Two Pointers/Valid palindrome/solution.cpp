class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0 ;
        int j = n-1;
        while (i<j){
            while (i<n && !isalnum(s[i]))
              i++;
            while (j>=0 && !isalnum(s[j]))
              j--;
            
            if(i<j){
                char a = s[i];
                if(a>='A' && a<='Z')
                    a = tolower (a);
                
                char b = s[j];
                if(b>='A' && b<='Z')
                    b = tolower (b);

                if (a!=b)
                  return false;
            }
            i++;
            j--;

        }
        return true;
    }
};
