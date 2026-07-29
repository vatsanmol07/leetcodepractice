class Solution {
public:
    bool canJump(vector<int>& nums) {
       
        int farthest = 0;

        for (int i = 0; i < nums.size() ; i++) {
        if (i > farthest)
                return false;

            // Update farthest reachable index
            farthest = max(farthest, i + nums[i]);

            // Already able to reach the end
            if (farthest >= nums.size() - 1)
                return true;
        }

        return true;    
        
    }
};