class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;
		std::vector<int> duplicates;
		
		for(int num : nums) {

            //If the number has a frequency of 1 it is a dup
			if (hashMap[num] == 1) {
                duplicates.push_back(num);
            }
			
            //Add 1 to freq
			hashMap[num]++;
		}

        return duplicates;
    }
};