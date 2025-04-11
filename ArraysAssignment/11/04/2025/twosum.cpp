// optimal
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> map;
            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i];
                if (map.count(complement)) {
                    return {map[complement], i};
                }
                map[nums[i]] = i;
            }
            return {};
        }
    };

// brute force
class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length; j++){
             if(nums[i]+ nums[j] == target){
                int a[]={i, j};
                return a;

            }
            }

        }
        return null;
        
    }
}