class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n=nums.size();
     if (n <= 2)
            return n;

        int i = 2;
         for (int a = 2; a < n; a++) {
            if (nums[a] != nums[i - 2]) {
                nums[i] = nums[a];
                i++;
            }
        }

        return i;   
    }
};