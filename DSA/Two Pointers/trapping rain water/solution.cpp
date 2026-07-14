class Solution {
public:
    int trap(vector<int>& height) {
        int n =  height.size();
        if (n < 3) return 0;
        
        int container = 0 , maxLeft = 0, maxRight = 0;
        int l = 0 , r = n-1;
        
        while(l<r){
            if (height[l]<height[r]){
                maxLeft = max(maxLeft,height[l]);
                container += maxLeft - height[l];
                l++;
            }
            else{
                maxRight = max(maxRight,height[r]);
                container += maxRight - height[r];
                r--;
            }
                
        }
           return container;
    }
};
