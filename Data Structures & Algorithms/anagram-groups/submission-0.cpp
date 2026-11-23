#include<unordered_map>
#include<algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> map_;
        vector<vector<string>> result;

        for(const auto& str: strs){
            std::string key = str;
            std::sort(key.begin(), key.end()); //Sort the key
            map_[key].push_back(str);
        }

        for(auto key: map_){
            result.push_back(key.second);
        }
        return result;
    }
};
