// Valid parentheses leetcode problem
// Time Complexity: O(n)
// Space Complexity: O(n) **Extra space needed
class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char, char> m;
        m.insert({')','('});
        m.insert({'}','{'});
        m.insert({']','['});
        
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++){
            
            auto itr = m.find(s[i]);
            
            if( itr != m.end() and !st.empty()){
                if(itr -> second == st.top()){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(s[i]);
            }
            
        }
        
        return st.empty();
    }
};