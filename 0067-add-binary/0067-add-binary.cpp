class Solution {
public:
    string addBinary(string a, string b) {
       int c=a.size()-1;
       int d=b.size()-1;
       string result="";
       int carry=0; 
       while(c>=0||d>=0||carry){
        int sum=carry;
        if(c>=0){
            sum+=a[c]-'0';
         c--;
        }
        if(d>=0){
            sum+=b[d]-'0';
            d--;
        }
        result+=(sum%2)+'0';
        carry=sum/2;
       }
       reverse(result.begin(),result.end());
       return result;
    }
};