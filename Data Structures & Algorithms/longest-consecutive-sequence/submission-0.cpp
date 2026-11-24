#include <unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1){
            return 0;
        }
        std::unordered_set<int> num_set;
        std::unordered_set<int> starts;
        for(int num:nums){
            num_set.insert(num);
        }

        for(int num: num_set){
            if(num_set.find(num-1) == num_set.end()){
                starts.insert(num);
            }
        }
        int longest = 1;
        for (int start_num : starts) {
            int current = 1;
            int next = start_num + 1;
            while (num_set.find(next) != num_set.end()) {
                next++;
                current++;
            }
            if(current > longest){
                longest = current;
            }
        }
        return longest;
    }
};
