class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.length()>num2.length()){
            swap(num1,num2);
        }

        int n1=num1.length();
        int n2=num2.length();
        int carry=0;
        int diff=n2-n1;
        string ans = "";
        for(int i = n1-1;i>=0;i--){
            int sum = ((num1[i]-'0') + (num2[i+diff] -'0') + carry);
            ans.push_back(sum%10 + '0');
            carry=sum/10;
        }

        for(int i = n2-n1-1;i>=0;i--){
            int sum = ((num2[i]-'0')  + carry);
            ans.push_back(sum%10 + '0');
            carry=sum/10;
        }


        if(carry){
            ans.push_back(carry+'0');
        }



        reverse(ans.begin(),ans.end());
        return ans;
    }
};