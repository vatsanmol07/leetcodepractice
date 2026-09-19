class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      int m=nums.size();
      vector<int>ans;
      int left=0;
      int right=n;
      while(left<n){
        ans.push_back(nums[left]);
        ans.push_back(nums[right]);
        left++;
        right++;
      }
      return ans;
    }
};