

#include <stdio.h>
#include <stdbool.h>

#define N 5

// Function to print the solution matrix
void printSolution(int sol[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
    }
}

// Function to check if x, y is a valid index for N x N maze
bool isSafe(int maze[N][N], int x, int y) {
    // Check if x and y are within bounds and if the cell is not blocked
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 0);
}

// Function to solve the maze problem using backtracking
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    // If (x, y) is the bottom-right corner, the maze is solved
    if (x == N - 1 && y == N - 1) {
        sol[x][y] = 1;
        return true;
    }

    // Check if maze[x][y] is valid
    if (isSafe(maze, x, y)) {
        // Mark x, y as part of the solution path
        sol[x][y] = 1;

        // Move forward in the x direction
        if (solveMazeUtil(maze, x + 1, y, sol)) {
            return true;
        }

        // If moving in x direction doesn't give a solution then
        // move down in the y direction
        if (solveMazeUtil(maze, x, y + 1, sol)) {
            return true;
        }

        // If moving in y direction doesn't give a solution then
        // move backward in the x direction
        if (solveMazeUtil(maze, x - 1, y, sol)) {
            return true;
        }

        // If moving backward in x direction doesn't give a solution then
        // move upward in the y direction
        if (solveMazeUtil(maze, x, y - 1, sol)) {
            return true;
        }

        // If none of the above movements work then unmark x, y
        // as part of the solution path (backtrack)
        sol[x][y] = 0;
        return false;
    }

    return false;
}

// This function solves the Maze problem using backtracking
bool solveMaze(int maze[N][N]) {
    int sol[N][N] = { {0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0} };

    if (!solveMazeUtil(maze, 0, 0, sol)) {
        printf("No solution exists\n");
        return false;
    }

    printSolution(sol);
    return true;
}

int main() {
    int maze[N][N] = { {0, 1, 0, 0, 0},
                       {0, 1, 0, 1, 0},
                       {0, 0, 0, 1, 0},
                       {0, 1, 1, 0, 0},
                       {0, 0, 0, 0, 0} };

    solveMaze(maze);
    return 0;
}
