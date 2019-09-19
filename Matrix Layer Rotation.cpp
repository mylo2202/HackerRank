#include <bits/stdc++.h>

using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rows, columns, rotations;
    cin >> rows >> columns >> rotations;
    int arr[rows][columns];
    int result[rows][columns];
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < columns; c++) {
            cin >> arr[r][c];
        }
    }

    rows--;
    columns--;
    for (int r = 0; r <= rows; r++) {
        for (int c = 0; c <= columns; c++) {
            int x = r < rows - r ? r : rows - r;
            int y = c < columns - c ? c : columns - c;
            int min = x < y ? x : y;
            int maxRow = rows - min;
            int maxCol = columns - min;
            int parameter = (maxRow + maxCol) * 2 - min * 4;

            int row = r;
            int col = c;
            for (int a = 0; a < rotations%parameter; a++) {
                if (col == min && row < maxRow) {
                    row++;
                }
                else if (row == maxRow && col < maxCol) {
                    col++;
                }
                else if (row > min && col == maxCol) {
                    row--;
                }
                else if (row == min && col > min) {
                    col--;
                }
            }
            result[row][col] = arr[r][c];
        }
    }


    for (int r = 0; r <= rows; r++) {
        for (int c = 0; c <= columns; c++) {
            cout << result[r][c] << " ";
        }
        cout << "\n";
    }


    return 0;
}
