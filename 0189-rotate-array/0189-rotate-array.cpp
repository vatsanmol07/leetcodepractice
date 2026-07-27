class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());//pahle pura rotate kiye 
        reverse(nums.begin(), nums.begin() + k);//phir jitna value diya rahega utna kiye
        reverse(nums.begin() + k, nums.end()); //phir uske baad ka rotate kar denge
    }
};