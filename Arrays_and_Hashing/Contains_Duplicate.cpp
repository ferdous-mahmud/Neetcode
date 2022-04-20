// Contains Duplicate leetcode problem
// Solution using set ** Extra memory space needed
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set <int> s;
        
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }else{
                s.insert(nums[i]);
            }
        }
        
        return false;
    }
};


// Another approach using sort()
// Time Complexity: O(nlog n)
// Space Complexity: O(1)  ** No extra space needed
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1]){
                return true;
            }
        }
        
        return false;
    }
};
