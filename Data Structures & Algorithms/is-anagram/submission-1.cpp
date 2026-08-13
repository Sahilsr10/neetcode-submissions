class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> CountS;
        unordered_map<char, int> CountT;
        for(int i = 0; i<s.length(); i++){
            CountS[s[i]]++;
            CountT[t[i]]++;
        }
        return CountS == CountT;
    }
};
