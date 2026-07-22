class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
      if (arr.empty()) return {};
      sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++) {
            auto& last = ans.back();// vector property to check last
            if (arr[i][0] <= last[1]) {
                last[1] = max(last[1], arr[i][1]); 
            } else {
                ans.push_back(arr[i]);
                }
        }

        return ans;  
    }
};