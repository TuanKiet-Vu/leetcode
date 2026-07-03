class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxdt = 0;
        int i = 0 , j=height.size()-1;
        while (i<j){
            int curdt = (j-i) * min(height[i],height[j]);
            maxdt = max(curdt,maxdt);
            if (height[i]<height[j]) i++;
            else if (height[i]>height[j]) j--;
            else{
                i++;
                j--;
            }
        }
        return maxdt;
    }
};
