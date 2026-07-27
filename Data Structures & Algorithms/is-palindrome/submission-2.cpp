class Solution {
public:
    bool isPalindrome(string s) {
        string text = "";

        for(char c : s) {
            if(isalnum(c))
                text += tolower(c);
        }

        int i = 0;
        int j = text.size() - 1;

        while(i < j) {
            if(text[i] != text[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};