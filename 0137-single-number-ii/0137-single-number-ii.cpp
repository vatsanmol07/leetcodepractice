class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>vats;//unorder mp liye frequency count karne ke liye
       for( auto x:nums){
        vats[x]++;
       }
       for(auto x:vats){
        if(x.second==1) //uske baad auto use kiye jis se humko datatype me diqqat naa ho
        return x.first;// uske baad check kiye ki jiska count 1 wo return karwa diye
       }
       return -1;
    }
};