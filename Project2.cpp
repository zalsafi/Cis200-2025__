#include <iostream>
#include <vector>

using namespace std;

class CheckersSolver {
private:
    vector<vector<char>> board;
     int n = 8;

public:
   
    CheckersSolver(vector<vector<char>> inputBoard) {
       
        if (inputBoard.size() != N || inputBoard[0].size() != N) {
            cout << "Error" << endl;
            return;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (inputBoard[i][j] != 'B' && inputBoard[i][j] != 'W' && inputBoard[i][j] != ' ') {
                    cout << "Error" << endl;
                    return;
     }
     }
        }
        board = inputBoard;
    }

    
    void printBoard() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    
   
    int findMaxJumpsForPiece(int x, int y) {
        int maxJumps = 0;
        int directions[4][2] = { {-2, -2}, {-2, 2}, {2, -2}, {2, 2} };

        for (int i = 0; i < 4; i++) {
            int dx = directions[i][0];
            int dy = directions[i][1];

            if (isValidJump(x, y, dx, dy)) {
               
                board[x][y] = ' '; 
                board[x + dx / 2][y + dy / 2] = ' '; 
                board[x + dx][y + dy] = 'W'; 
                
                int jumps = 1 + findMaxJumpsForPiece(x + dx, y + dy);
                if(jumps > maxJumps) {
                    maxJumps = jumps;
                }
               
                board[x][y] = 'W';  
                board[x + dx / 2][y + dy / 2] = 'B';  
                board[x + dx][y + dy] = ' '; 
            }
        }

        return maxJumps;
    }

};

int main() {
    
    vector<vector<char>> board = {
        {' ', 'B', ' ', 'B', ' ', 'B', ' ', 'B'},
        {'B', ' ', 'B', ' ', 'B', ' ', 'B', ' '},
        {' ', 'B', ' ', 'B', ' ', 'B', ' ', 'B'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'W', ' ', 'W', ' ', 'W', ' ', 'W', ' '},
        {' ', 'W', ' ', 'W', ' ', 'W', ' ', 'W'},
        {'W', ' ', 'W', ' ', 'W', ' ', 'W', ' '}
    };

    CheckersSolver solver(board);

    solver.printBoard();

    int maxJumps = solver.getMaxJumps();
    cout << "\nMaximum number of jumps any white piece can make: " << maxJumps << endl;

    return 0;
}







