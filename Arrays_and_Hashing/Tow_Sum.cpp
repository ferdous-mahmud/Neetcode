// Two sum leetcode problem
// Time Complexity: O(n^2)
// Space Complexity: O(1) ** No extra space used
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        
        for(int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] == rem){
                    res = {i, j};
                    break;
                }
            }
            
        }
        return res;
    }
};