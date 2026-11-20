
class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int n = s.size();

        // Check if rearrangement is possible
        int maxFreq = *max_element(freq.begin(), freq.end());

        if (maxFreq > (n + 1) / 2) {
            return "";
        }

        // Max heap: {frequency, character}
        priority_queue<pair<int, char>> pq;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push({freq[i], 'a' + i});
            }
        }

        string ans = "";

        while (pq.size() >= 2) {
            auto first = pq.top();
            pq.pop();

            auto second = pq.top();
            pq.pop();

            ans += first.second;
            ans += second.second;

            first.first--;
            second.first--;

            if (first.first > 0) {
                pq.push(first);
            }

            if (second.first > 0) {
                pq.push(second);
            }
        }

        if (!pq.empty()) {
            ans += pq.top().second;
        }

        return ans;
    }
};
