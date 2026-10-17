class Solution {
public:
    int arraySign(vector<int>& nums) {
       int neg = 0;

        for (int val : nums) {
            if (val == 0) {
                return 0;
            }
            if (val < 0) {
                neg++;
            }
        }

        if (neg % 2 == 0) {
            return 1;
        } else {
            return -1;
        } 
    }
};