class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0;
        int doubledigit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                single+=nums[i];
            }
            else{
                doubledigit +=nums[i];
            }
        }
        return single!=doubledigit;
    }
};