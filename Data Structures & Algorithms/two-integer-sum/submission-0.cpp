#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map_;
        for(int i = 0; i < nums.size(); ++i){
            int complementary = target - nums[i];
            auto it = map_.find(complementary);

            if(it != map_.end()){
                return {it->second,i};
            }
            map_[nums[i]] = i;
        }
    }
};
