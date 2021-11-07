class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set <char> m;
        int start=0,end=0,ans=0;
        while(end < n){
            if(m.find(s[end])==m.end()){
                m.insert(s[end]);
                ans=max(ans, end-start+1);
            }
            else{
                while(m.find(s[end])!=m.end() && start<n){
                    m.erase(s[start]);
                    start++;
                }
                m.insert(s[end]);
            }
            end++;
        }
        return ans;
    }
};