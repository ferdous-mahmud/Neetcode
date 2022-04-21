// Valid Palindrome Leetcode
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        
        for(int i = 0; i < s.size(); i++){
            
            if(int(s[i]) >= 48 and 57 >= int(s[i])){
                s2 += s[i];
            }
            
            
            if(int(s[i]) >= 65 and 90 >= int(s[i])){
                char temp = int(s[i]) + 32;
                s2 += temp;
            }
            
            if(int(s[i]) >= 97 and 122 >= int(s[i])){
                s2 += s[i];
            }
        }
        
        int i = 0;
        int j = s2.size() - 1;
        
        while(j > i){
            if(s2[i] != s2[j]){
                return false;
            }
            i ++;
            j --;
        }
        
        return true;
    }
};