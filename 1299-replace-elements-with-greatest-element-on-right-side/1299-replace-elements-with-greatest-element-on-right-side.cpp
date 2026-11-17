class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int n=arr.size();
      int maxarr=-1;
      for(int i=n-1;i>=0;i--){
        int cur=arr[i];
        arr[i]=maxarr;
        maxarr=max(maxarr,cur);
      } 
      return arr; 
    }
};