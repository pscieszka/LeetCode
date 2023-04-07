class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> rows;
        set<char> columns;
        set<char> squares;
        int columnsCounter, rowsCounter, squaresCounter;
        for(int i=0; i<9; i++){
            columnsCounter=0;
            rowsCounter=0;
            rows.clear();
            columns.clear();
            for(int j=0; j<9; j++){
                if(isdigit(board[i][j])){
                    columns.insert(board[i][j]);
                    columnsCounter++;
                }
                if(isdigit(board[j][i])){
                    rows.insert(board[j][i]);
                    rowsCounter++;
                }
            }
            if(rows.size()!= rowsCounter || columns.size()!=columnsCounter)
                return false;
        }
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(i % 3 == 0 && j % 3 == 0) { 
                    squaresCounter = 0;
                    squares.clear();
                    for(int k = i; k < i + 3; k++) {
                        for(int l = j; l < j + 3; l++) {
                            if(isdigit(board[k][l])){
                                squares.insert(board[k][l]);
                                squaresCounter++;
                            }
                        }}
                        if(squares.size()!= squaresCounter){
                            return false;
                        }
                        }}}           
        return true;
    }
};
