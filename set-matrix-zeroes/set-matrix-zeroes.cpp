class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int m = matrix.size();
            int n = matrix[0].size();
            bool firstrow=false;
            //bool firstcol=false;
            //cout<<n<<" "<<m<<" \n";
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){

                    if(matrix[i][j]==0){
                        if(i==0){
                            firstrow=true;
                        }
                        else{
                            matrix[i][0]=0;
                        }

                        matrix[0][j]=0;
                    }

                    
                }
            }
            //cout<<firstrow<<" "<<firstcol<<endl;
            
            for(int i=m-1;i>=0;i--){
                
                for(int j = n-1;j>=0;j--){

                        if(i==0 and firstrow){
                                matrix[i][j]=0;
                        }


                    else if(i!=0 and (matrix[i][0]==0) or (matrix[0][j]==0)){
                    matrix[i][j]=0;
                
                
                
                }
                }
                
            }   
    }
};