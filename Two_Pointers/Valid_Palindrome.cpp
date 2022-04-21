// Valid Palindrome Leetcode
// Time Complexity: O(n)
// Space Complexity: O(1) **No extra space used
class Solution {
public:
    bool isAlphanumaric(char c){
        return (int(c) >= 48 and 57 >= int(c) or 
                int(c) >= 65 and 90 >= int(c) or 
                int(c) >= 97 and 122 >= int(c));
    }
    
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while(j > i){
            while(isAlphanumaric(s[i]) == false and j > i){
                i ++;
            }
            while(isAlphanumaric(s[j]) == false and j > 0){
                j --;
            }

            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            
            if(s[i] != s[j] and isAlphanumaric(s[i]) and isAlphanumaric(s[j])){
                return false;
            }else{
                i ++;
                j --;
            }
        }
        return true;
    }
};


// Time Complexity: O(n)
// Space Complexity: O(n) **Using extra space
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