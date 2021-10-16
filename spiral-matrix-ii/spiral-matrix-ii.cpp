class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n,0));
        
        int startrow=0;
        int startcol=0;
        int endrow=n-1;
        int endcol=n-1;
        int put=0;
        while(startrow<=endrow and startcol<=endcol){
            
            for(int i=startcol;i<=endcol;i++){
                ans[startrow][i] =++put;
                //put++;
            }
            startrow++;
            
            for(int i=startrow;i<=endrow;i++){
                ans[i][endcol] =++put;
                //put++;
            }
            endcol--;
            if(startrow<=endrow){
            for(int i=endcol;i>=startcol;i--){
                ans[endrow][i] =++put;
                //put++;
            }
            endrow--;
            }
            
            if(startcol<endcol){
            for(int i=endrow;i>=startrow;i--){
                ans[i][startcol] =++put;
                //put++;
            }
            startcol++;
            
            }
            //put=put-1;
            
        }
        
        return ans;
        
        
        
    }
};