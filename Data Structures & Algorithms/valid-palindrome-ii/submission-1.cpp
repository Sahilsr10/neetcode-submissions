class Solution {
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)){
            return true;
        } 

        for(int i = 0; i<s.size(); i++){
            string newss = s.substr(0,i) + s.substr(i+1);
            if(isPalindrome(newss)){
                return true;
            }
        }
        return false;
    }
public: 
    bool isPalindrome(string s){
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};