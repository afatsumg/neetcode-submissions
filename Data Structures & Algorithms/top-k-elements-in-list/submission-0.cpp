#include <unordered_map>
#include <vector>
#include <algorithm>
#include <utility>

struct Greater{
    bool operator()(const std::pair<int,int>& a,const std::pair<int,int>& b){
        return a.second>b.second;
    }
};
class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        //Calculate the frequency
        std::unordered_map<int, int> freq_map;
        for (int num : nums) {
            freq_map[num]++;
        }

        //Push them to a vector for sorting
        std::vector<std::pair<int, int>> freq_pair;
        for (const auto& par : freq_map) {
            freq_pair.push_back(par);
        }

        //Sort
        std::sort(freq_pair.begin(), freq_pair.end(),Greater());

        //Give the first k element
        std::vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freq_pair[i].first);
        }
        return result;
    }
};