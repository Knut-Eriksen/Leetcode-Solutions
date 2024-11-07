class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        std::unordered_map<int, int> hashMap;
        int count = 0;

        for (int num : nums) {
            if (hashMap.find(num) != hashMap.end()) {
                //Add the current frequency of num to count
                count += hashMap[num];
            }
            //Increment the frequency of num
            hashMap[num]++;
        }

        return count;
    }
};
