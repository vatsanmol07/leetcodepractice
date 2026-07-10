class Solution {
public:
    int maxSubArray(vector<int>& arr) {
      int vats = arr[0];
    int anmolvats = arr[0];

    for (int i = 1; i < arr.size(); i++) {
       vats = max(arr[i],vats + arr[i]);
       anmolvats = max(anmolvats, vats);
    }
    return anmolvats;
    }
};