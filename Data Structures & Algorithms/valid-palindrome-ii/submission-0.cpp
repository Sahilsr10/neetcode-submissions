class Solution {
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)){
            return true;
        }
        for(int i = 0; i<s.size(); i++){
            string news = s.substr(0, i) + s.substr(i+1);
            if(isPalindrome(news)){
                return true;
            }
        }
        return false;
    }


private:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};