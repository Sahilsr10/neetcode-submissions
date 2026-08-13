class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string news;
        int i = 0;
        int j = 0;
        while(i<word1.size() || j<word2.size()){
            if(i<word1.size()){
                news += word1[i++];
            }
            if(j<word2.size()){
                news += word2[j++];
            }
        }
        return news;
    }
};