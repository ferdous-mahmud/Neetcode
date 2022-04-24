// Binary Search Leetcode problem
// Time Complexiyt: O(logn)
// Space Complexity: O(1)
// Array must be sorted
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        
        while(right >= left){
            
            if(nums[left] == target){ // we can ingnor this line form
                return left;
            }
            if(nums[right] == target){ 
                return right;
            }						 // to this line // but i think this make 
            						 // Binary search more efficient
            
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                return mid;
            }
            
            if(nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return -1;
    }
};