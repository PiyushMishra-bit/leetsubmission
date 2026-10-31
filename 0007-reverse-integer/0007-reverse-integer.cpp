class Solution {
public:
    int reverse(int n) {
        int revNums=0;
        while(n!=0){
            int digit=n%10;
            if(revNums>INT_MAX/10||revNums<INT_MIN/10){
                return 0;
            }
            revNums=revNums*10+digit;
            n=n/10;
        }
        return revNums;
    }
};