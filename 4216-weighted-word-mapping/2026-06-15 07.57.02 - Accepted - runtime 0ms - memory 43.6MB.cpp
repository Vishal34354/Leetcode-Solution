class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        
        for (const string &S : words) {
            long long totalWeight = 0;
            for (char c : S) {
                totalWeight += weights[c - 'a'];
            }
            
            int remainder = totalWeight % 26;
            char mappedChar = 'z' - remainder;
            result += mappedChar;
        }
        
        return result;
    }
};
