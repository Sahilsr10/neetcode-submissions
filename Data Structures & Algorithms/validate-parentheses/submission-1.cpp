class Solution {
public:
    bool isValid(string s) {
        // create stack;
        stack<char> brack;
        // iterate over each element in string;
        for(char ch:s){
            // if opening bracks put em in stack;
            if(ch == '(' || ch == '[' || ch == '{'){
                brack.push(ch);
            }
            else{
                // if closing brack , pop from stack;
                if(brack.empty()) return false;

                char top = brack.top();
                brack.pop();

                // check current char and last opening with top;

                if((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')){
                return false;
                }
            }
        }
        return brack.empty();
    }
};
