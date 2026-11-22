class Solution {
public:
    bool checkString(string s) {
       int n=s.size() ;
       int a=-1;
       int b=n;
       for(int i=0;i<n;i++){
        if(s[i]=='a')
        a=i;
        else
       if(s[i] == 'b' && b== s.size())
              b = i;
       }
       return a<b;
    }
};