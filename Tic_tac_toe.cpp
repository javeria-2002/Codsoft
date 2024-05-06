#include <iostream>
using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(char board[3][3])
{
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "| ";
        for (int j = 0; j < 3; ++j)
        {
            cout << board[i][j] << " | ";
        }
        cout << endl
             << "-------------" << endl;
    }
}

// Function to check if there is a win
bool checkWin(char board[3][3], char player)
{
    // Check rows and columns
    for (int i = 0; i < 3; ++i)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

// Function to check if the game is a draw
bool checkDraw(char board[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main()
{
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';
    bool gameEnd = false;

    while (!gameEnd)
    {
        // Display board
        displayBoard(board);

        // Player input
        int row, col;
        cout << "Player " << currentPlayer << ", enter row (0-2) and column (0-2): ";
        cin >> row >> col;

        // Update board
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
        {
            board[row][col] = currentPlayer;
            // Check for win
            if (checkWin(board, currentPlayer))
            {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameEnd = true;
            }
            else if (checkDraw(board))
            { // Check for draw
                displayBoard(board);
                cout << "It's a draw!" << endl;
                gameEnd = true;
            }
            else
            {
                // Switch players
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }
        else
        {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    char playAgain;
    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y')
    {
        main(); // Restart the game
    }
    else
    {
        cout << "Thanks for playing!" << endl;
    }

    return 0;
}
