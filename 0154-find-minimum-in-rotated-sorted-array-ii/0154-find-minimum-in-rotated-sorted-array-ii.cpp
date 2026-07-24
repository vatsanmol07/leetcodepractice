class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int vats=0;

        for(int i=0;i<=nums.size()-1;i++){
        vats=nums[0];
        }
            
       return vats; 
        
    }
};