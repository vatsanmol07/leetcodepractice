class Solution {
public:
    int minInsertions(string s){
        int low=0,high=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
         if (high % 2 == 1){ 
            low++;
            high--;
            }
            high+=2;
        }
         else {
                high--;
                if (high < 0) {
                    low++;
                    high = 1;
                }
            }
        }
        return low +high;
    }
};