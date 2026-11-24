
class Solution {
public:
    string oddString(vector<string>& words) {
        
        int n = words.size();

        vector<int> first, second;

        for(int i = 1; i < words[0].size(); i++) {
            first.push_back(words[0][i] - words[0][i-1]);
            second.push_back(words[1][i] - words[1][i-1]);
        }

        if(first == second) {
            for(int i = 2; i < n; i++) {
                vector<int> curr;

                for(int j = 1; j < words[i].size(); j++) {
                    curr.push_back(words[i][j] - words[i][j-1]);
                }

                if(curr != first) {
                    return words[i];
                }
            }
        }
        else {
            vector<int> third;

            for(int i = 1; i < words[2].size(); i++) {
                third.push_back(words[2][i] - words[2][i-1]);
            }

            if(first == third)
                return words[1];
            else
                return words[0];
        }

        return "";
    }
};
