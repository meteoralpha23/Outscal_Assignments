#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

#define BOMB '*'
#define FREE_CELL '+'
#define PRESSED ' '
#define USER_POS '$'

#define UP 'w'
#define DOWN 's'
#define LEFT 'a'
#define RIGHT 'd'
#define PRESS_COMMAND 'p'

class Minesweeper {
private:
    int rows, cols, bombs;
    vector<vector<char>> board, userBoard;
    int userRow, userCol;
    bool gameOver;

    bool isInside(int row, int col) {
        return row >= 0 && row < rows && col >= 0 && col < cols;
    }

    void placeBombs() {
        vector<pair<int, int>> positions;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                positions.emplace_back(i, j);

        shuffle(positions.begin(), positions.end(), mt19937(random_device()()));

        for (int i = 0; i < bombs; i++)
            board[positions[i].first][positions[i].second] = BOMB;
    }

    int countBombsAround(int row, int col) {
        int bombCount = 0;
        for (int i = -1; i <= 1; i++)
            for (int j = -1; j <= 1; j++) {
                int newRow = row + i, newCol = col + j;
                if (isInside(newRow, newCol) && board[newRow][newCol] == BOMB)
                    bombCount++;
            }
        return bombCount;
    }

    void setupBoard() {
        board.assign(rows, vector<char>(cols, FREE_CELL));
        userBoard.assign(rows, vector<char>(cols, FREE_CELL));

        placeBombs();

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (board[i][j] != BOMB)
                    board[i][j] = countBombsAround(i, j) + '0';
    }

    void revealCell(int row, int col) {
        if (!isInside(row, col) || userBoard[row][col] != FREE_CELL) return;

        userBoard[row][col] = board[row][col];

        if (board[row][col] == BOMB) {
            gameOver = true;
            cout << "Game Over! You hit a bomb.\n";
            printBoard(true);
            return;
        }

        if (board[row][col] == '0') {
            for (int i = -1; i <= 1; i++)
                for (int j = -1; j <= 1; j++)
                    revealCell(row + i, col + j);
        }
    }

public:
    Minesweeper(int r, int c, int b) {
        rows = r;
        cols = c;
        bombs = b;
        userRow = userCol = 0;
        gameOver = false;
        setupBoard();
        userBoard[userRow][userCol] = USER_POS;
    }

    void printBoard(bool reveal = false) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << (reveal ? board[i][j] : userBoard[i][j]) << " ";
            cout << endl;
        }
    }

    void processCommand(char command) {
        if (command == PRESS_COMMAND) {
            revealCell(userRow, userCol);
            return;
        }

        int newRow = userRow, newCol = userCol;
        if (command == UP) newRow--;
        else if (command == DOWN) newRow++;
        else if (command == LEFT) newCol--;
        else if (command == RIGHT) newCol++;

        if (isInside(newRow, newCol)) {
            userBoard[userRow][userCol] = FREE_CELL;
            userRow = newRow;
            userCol = newCol;
            userBoard[userRow][userCol] = USER_POS;
        }
    }

    bool isGameOver() {
        return gameOver;
    }
};

int main() {
    srand(time(0));
    Minesweeper game(9, 9, 10);

    while (!game.isGameOver()) {
        game.printBoard();
        cout << "Enter command (w/a/s/d to move, p to press cell): ";
        char command;
        cin >> command;
        game.processCommand(command);
    }

    return 0;
}
