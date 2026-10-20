class Solution {
public:
bool isValid(vector<int>& nums,int m,int maxAllowed){
    int stu=1,pages=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxAllowed) return false;
        if(pages+nums[i]<=maxAllowed){
            pages+=nums[i];
        }
        else{
            stu++;
            pages=nums[i];
        }
    }
    if(stu>m)return false;
    else return true;
}
    int splitArray(vector<int>& nums, int m) {
        int st=0;int ans=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
          sum += nums[i];
        }
        int end=sum;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums, m,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};