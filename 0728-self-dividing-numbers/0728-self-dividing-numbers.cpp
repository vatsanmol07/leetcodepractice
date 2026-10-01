class Solution {
public:
 void vats(int i, vector<int>& ans) {
        int n = i;

        while (n > 0) {
            int digit = n % 10;

            if (digit == 0 || i % digit != 0) {
                return;
            }

            n /= 10;
        }

        ans.push_back(i);
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            vats(i,ans);
        }
        return ans;
    }
};