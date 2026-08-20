class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>vats;
        vector<int>ans;
        for(auto x:nums)
        vats[x]++;
        for(auto x:vats){
            if(x.second>nums.size()/3)
            ans.push_back(x.first);
        }
        return ans;
    }
};