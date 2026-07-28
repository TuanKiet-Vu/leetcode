class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> msp;
        for (int i = 0 ; i<nums.size() ; i++){
            int goal = target - nums[i];
            if (msp.count(goal))
              return {msp[goal], i};
            msp[nums[i]] = i;
        }
        return{};
    }
};
