class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0;
        int j = 0;
        int fs = word1.size();
        int ss = word2.size();
        
        while(i<fs || j<ss){
            if(i<fs) ans = ans+word1[i++];
            if(j<ss) ans  = ans+word2[j++];
        }
        return ans;
    }
};