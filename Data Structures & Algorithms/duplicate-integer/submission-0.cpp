#include<unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        for(int num: nums){
            if(set_.insert(num).second == false){
                return true;
            }
        }
        return false;
    }
private:
    std::unordered_set<int> set_;
};