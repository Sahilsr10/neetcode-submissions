class Solution {
public:
    void reverseString(vector<char>& s) {
        // create a temp to store values in rev;
        vector<char> temp;
        // iter in backwards
        for(int i = s.size()-1; i>=0; i--){
            temp.push_back(s[i]);
        }
        // s = t
        for(int i = 0; i<s.size(); i++){
            s[i] = temp[i];
        }
    }
};