class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        
    std::unordered_map<int, int> hashMap;
        
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int complement = target - num;

            if (hashMap.find(complement) != hashMap.end()){
                return {hashMap[complement], i};
            }
            hashMap[num] = i; 
        }
    return {};
  }
};
