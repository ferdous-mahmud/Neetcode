// Valid Anagram Leetcode problem
// Solution usng sort()
// Time Complexity: O(n)
// Space Complexity: O(n)  **using extra space

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        map<char, int> sMap, tMap;
        for(int i = 0; i < s.size(); i++){
            sMap[s[i]] += 1;
            tMap[t[i]] += 1;
        }
        
        for(auto i: s){
            if(sMap[i] != tMap[i]){
                return false;
            }
        }
        
        return true;
    }
};


// Solution usng sort()
// Time Complexity: O(nlogn)
// Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if( s == t){
            return true;
        }
        return false;
    }
};