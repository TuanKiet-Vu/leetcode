class Solution {
public:

    long long calculateHours(vector<int>& piles, int k) {
        long long hours = 0;

        for (int pile : piles) {
            hours += ((long long)pile + k - 1) / k;
        }

        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int speed = right;

        while (left <= right){
            int mid = left + (right-left)/2;
            long long hoursNeeded = calculateHours(piles,mid);

            if (hoursNeeded > h)
                left = mid+1;
            else {
                right = mid-1;
                speed = mid;
            }
        }
        return speed;
    }
};
