// optimal sol
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int ans=0;
            int n=nums.size();
            for(int i=0;i<nums.size();i++){
                ans^=(nums[i]^i);
            }
            ans^=(n);
            return ans;
            
        }
    };


// brute force
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            for (int i = 0; i <= n; i++) {
                bool found = false;
                for (int j = 0; j < n; j++) {
                    if (nums[j] == i) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return i;
                }
            }
            return -1
-    