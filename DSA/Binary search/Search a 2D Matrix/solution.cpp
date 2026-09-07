class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int leftM = 0;
        int rightM = matrix.size() - 1;

        while (leftM <= rightM) {
            int midM = leftM + (rightM - leftM) / 2;

            int first = matrix[midM][0];
            int last = matrix[midM][matrix[midM].size() - 1];

            if (target < first) {
                rightM = midM - 1;
            }
            else if (target > last) {
                leftM = midM + 1;
            }
            else {
                int leftN = 0;
                int rightN = matrix[midM].size() - 1;

        
                while (leftN <= rightN) {
                    int midN = leftN + (rightN - leftN) / 2;

                    if (matrix[midM][midN] == target) {
                        return true;
                    }
                    else if (matrix[midM][midN] > target) {
                        rightN = midN - 1;
                    }
                    else {
                        leftN = midN + 1;
                    }
                }

                return false;
            }
        }

        return false;
    }
};
