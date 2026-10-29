class Solution {
public:
    int minimizedStringLength(string s) {
      int arr[26] = {0};
        int count = 0;

        for (char ch : s) {
            if (arr[ch - 'a'] == 0) {
                count++;
                arr[ch - 'a'] = 1;
            }
        }

        return count;  
    }
};