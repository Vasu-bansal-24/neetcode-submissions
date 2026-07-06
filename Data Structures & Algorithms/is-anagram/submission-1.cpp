class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i = 0; i<t.length(); i++){
            if(s == t){
                return true;
            }
        }
        return false;
    }
};
