class Solution {
public:
    bool searchInrow(vector<vector<int>>& matrix, int target,int row){
        int n=matrix[0].size();
        int st=0;
        int end= n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==matrix[row][mid]){
                return true;
            }
            else if(target>matrix[row][mid]){
               st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(),n=matrix[0].size();
        int sr=0;int endrow=m-1;
        while(sr<=endrow){
            int midrow=sr+(endrow-sr)/2;
            if(target>=matrix[midrow][0]&&target<=matrix[midrow][n-1]){
                //find the row  and for now ans we have to use BS to get ans
                return searchInrow(matrix,target,midrow);
            }
            else if(target>matrix[midrow][n-1]){
                //down => right
                sr=midrow+1;
            }
            else{
                //up => left
                endrow=midrow-1;
            }

        }
        
        return false;

    }
};