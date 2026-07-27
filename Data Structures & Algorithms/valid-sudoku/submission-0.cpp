class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0; i<9; i++){
            unordered_set<int> s;
            for(int j=0; j<9; j++){
                auto item = board[i][j];
                if(s.find(item) != s.end()){
                    return false;
                }
                else if (item != '.'){
                    s.insert(item);
                }
            }
        }

        for(int i =0; i<9; i++){
            unordered_set<int> s;
            for(int j=0; j<9; j++){
                auto item = board[j][i];
                if(s.find(item) != s.end()){
                    return false;
                }
                else if (item != '.'){
                    s.insert(item);
                }
            }
        }

        vector<pair<int, int>> start = {
            {0,0}, {0,3}, {0,6},
            {3,0}, {3,3}, {3,6},
            {6,0}, {6,3}, {6,6}
        };
        for(auto [r, c] : start){
            unordered_set<int> s;
            for(int i=r; i<r+3; i++){
                for(int j=c; j<c+3; j++){
                    auto item = board[j][i];
                    if(s.find(item) != s.end()){
                        return false;
                    }
                    else if (item != '.'){
                        s.insert(item);
                    }
                }
            }
        }
        return true;
    }
};