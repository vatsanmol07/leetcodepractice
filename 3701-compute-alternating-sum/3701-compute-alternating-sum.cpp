class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int oddsum=0;
        int evensum=0;
        int n=nums.size();
        for(int i=1;i<n;i=i+2){
            oddsum+=nums[i];
        }
        for(int i=0;i<n;i=i+2){
            evensum+=nums[i];
        }
        return evensum - oddsum;
    }
};