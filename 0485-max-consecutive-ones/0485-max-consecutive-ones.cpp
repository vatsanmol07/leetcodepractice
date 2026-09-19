class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { 
        int count=0;
        int gatar=0;
        for(int num:nums){
            if(num==1){
                count++;
                if(count>gatar){
                    gatar=count;
                }
            }else{
                count=0;
            }
        }
        return gatar;
    }
};