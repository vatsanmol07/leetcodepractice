class Solution {
public:
    int maxProduct(int n) {
       int product=0;
    vector<int>ans;
       while(n>0){
       int digit=n%10;
       ans.push_back(digit);
       n/=10;
       }
       sort(ans.begin(),ans.end());
       for(int i=0;i<ans.size()-1;i++){
        int a=ans[i+1]*ans[i];
        product=max(product,a);
       }
       return product;
    }
};