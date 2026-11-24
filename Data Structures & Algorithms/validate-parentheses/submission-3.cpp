#include<vector>
class Solution {
public:
    bool isValid(string s) {
        std::vector<char> parentheses;

        for(char ch: s){
            if(ch == '(' || ch == '[' || ch == '{'){
                parentheses.push_back(ch);
            }
            else if(ch == ')'){
                if(parentheses.empty() || parentheses.back() != '('){
                    return false;
                }
                else{
                    parentheses.pop_back();
                }
            }
            else if(ch == ']'){
                if(parentheses.empty() || parentheses.back() != '['){
                    return false;
                }
                else{
                    parentheses.pop_back();
                }
            }
            else if(ch == '}'){
                if(parentheses.empty() || parentheses.back() != '{'){
                    return false;
                }
                else{
                    parentheses.pop_back();
                }  
            }
            else{
                return false;
            }
        }
        if(parentheses.size() != 0){
            return false;
        }
        return true;
    }
};
