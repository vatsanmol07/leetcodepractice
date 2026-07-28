class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        long long prefix_sum = 0;
        long long max_perimeter = -1;
        
        for (int i = 0; i < nums.size(); i++) {
          
            if (i >= 2 && nums[i] < prefix_sum) {
                max_perimeter = prefix_sum + nums[i];
            }
            prefix_sum += nums[i];
        }
        
        return max_perimeter;
    }
};