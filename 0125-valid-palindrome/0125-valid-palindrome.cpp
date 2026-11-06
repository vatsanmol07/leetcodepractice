class Solution {
public:
    bool isPalindrome(string s) {

        string vats = "";

       
        for(int i = 0; i < s.size(); i++) {

            if(s[i] >= 'a' && s[i] <= 'z')
                vats += s[i];

            else if(s[i] >= 'A' && s[i] <= 'Z')
                vats += s[i];

            else if(s[i] >= '0' && s[i] <= '9')
                vats += s[i];
        }

       
        for(int i = 0; i < vats.size(); i++) {
            vats[i] = tolower(vats[i]);
        }
        int i = 0;
        int j = vats.size() - 1;

        while(i < j) {

            if(vats[i] != vats[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};