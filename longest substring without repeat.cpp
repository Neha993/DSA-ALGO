/*Given a string s, find the length of the longest substring without repeating characters.
Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int st=-1;
        unordered_map<int,int>m;      
        for(int i=0;i<n;i++){
            if(!m[s[i]]){
               m[s[i]]=-1;
            }
           }
        for(int i=0;i<n;i++){
            
             if(m[s[i]]>st){
                st=m[s[i]];
                
            }
            m[s[i]]=i;
            
            ans=max(ans,(i-st));
        }
     return ans;       
 }
    
};
