// haolamnm

#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>>& board, int row, int col , int num) {
    //check row
    for (int j=0; j<9; j++) {
        if (board[row][j] == num) {
            return false;
        }
    }
    // check column
    for (int i=0; i<9; i++) {
        if (board[i][col] == num) {
            return false;
        }
    }
    // check 3x3 sub-grid
    int s_row = row - row % 3;
    int s_col = col - col % 3;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (board[s_row+i][s_col+j] == num) {
                return false;
            }
        }
    }
    return true;
}

void solveBoard(vector<vector<int>>& board, vector<vector<int>>& sol, bool& found) {
    if (found) return;

    int row = -1;
    int col = -1;
    bool isEmpty = false;

    // find next empty cell
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (board[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) {
            break;
        }
    }

    //correct when no empty cell left
    if (!isEmpty) {
        sol = board;
        found = true;
        return;
    }

    //test number
    for (int num=1; num<=9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;
            solveBoard(board, sol, found);
            board[row][col] = 0;
        }
    }
}

void collectBoard(vector<vector<int>>& board) {
    board.resize(9, vector<int>(9));
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> board[i][j];
        }
    }
}

void printBoard(vector<vector<int>>& board) {
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> board, sol;
    bool found = false;
    
    collectBoard(board);
    solveBoard(board, sol, found);
    if (found) {
        cout << endl;
        printBoard(sol);
    }

    return 0;
}