using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string str = ss.str();

        int i = 0; 
        int n = str.length() - 1;
        for (int i = 0; i < str.length() / 2; i ++) {
            if (str[i] != str[str.length() - i -1]) return false;
        }
        return true;


    }
    
};
