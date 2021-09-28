class Solution {
public:
    int reverse(int n) {
        if(n==-2147483648){
            return 0;
            }

        bool minus = false;
          int ans=0;
        if(n<0){
            minus=true;
            n*=-1;
        }
        
   while(n){
       if(ans>INT_MAX/10){
           return 0;
       }
	    //int least = n%10;
	   ans=ans*10+n%10;
       
	   n/=10;

   }

   return minus?(ans*-1):ans;
    }
};