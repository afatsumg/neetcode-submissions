#include<cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<1 || s.size()>1000){
            return false;
        }

        std::string preprocessed_s;

        for(char c: s){
            if(std::isalnum(c)){
                char ch = std::tolower(c);
                preprocessed_s.push_back(ch);
            }
        }

        auto begin_it = preprocessed_s.begin();
        auto end_it = preprocessed_s.end() - 1;

        while(begin_it < end_it){
            if(*begin_it != *end_it){
                return false;
            }
            ++begin_it;
            --end_it;
        }
        return true;
    }
};
