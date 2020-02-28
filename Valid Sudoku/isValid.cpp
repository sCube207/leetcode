#include <iostream>

bool isValidSudoku(vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); i++)
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] != '.') {
                for (int k = 0; k < board.size(); k++) {
                    if (board[i][j] == board[i][k] && j != k)
                        return false;
                    if (board[k][j] == board[i][j] && k != i)
                        return false;
                }
                for (int k = 3 * (i / 3); k < 3 * (i / 3) + 3; k++)
                    for (int r = 3 * (r / 3); r < 3 * (r / 3) + 3; r++) {
                        if (board[i][j] == board[k][r] && i != k && j != r) 
                            return false;
                    }
            }
        }
    return true;
}
