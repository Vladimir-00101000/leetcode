#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        std::unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i){
            int tmp = target - nums[i];
            if (map.count(tmp)){
                return {i, map[tmp]};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};


int main(void){
    Solution s;
    std::vector<int> nums = {2,7,11,15};
    std::vector<int> result = s.twoSum(nums, 9);
    return 0;
}