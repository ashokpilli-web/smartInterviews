// optimal solution 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int>seen;
       for(int num:nums){
        if(seen.count(num)){
            return true;
        }
        seen.insert(num);

       }
         return false;     
    }
};
// brute force
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int n = nums.size();
            for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n; j++) {
                    if(nums[i] == nums[j]) {
                        return true;
                    }
                }
            }
            return false;
        }
    };
    