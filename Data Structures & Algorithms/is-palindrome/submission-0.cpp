class Solution {
public:
    bool isPalindrome(string s) {
        string text = "";
        for(auto c: s){
            if(isalnum(c)){
                text += tolower(c);
            }
        }
        int n = text.size();
        int count = 0;
        int j = n-1;
        for(int i=0; i<n; i++){
            if(text[i] == text[j]){
                count++;
                j--;
            }
        }
        if(count == n){
            return true;
        }
        return false;
    }
};