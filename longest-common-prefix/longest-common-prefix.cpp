class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        string common  = "";
        sort(s.begin(),s.end());
        string first = s[0];
        int fn = first.size();
        string last = s[n-1];
        for(int i=0;i<fn;i++){
            if(first[i]==last[i]){
                common+=first[i];
            }
            else{
                break;
            }
        }
        /*
        for(auto i:s){
            cout<<i<<" ";
        }*/
        return common;
        
        
        
        
        
        
    }
};