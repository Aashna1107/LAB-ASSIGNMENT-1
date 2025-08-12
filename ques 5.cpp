#include <iostream>
using namespace std;

const int MAX = 10;
void inputMatrix(int mat[MAX][MAX], int rows, int cols);
void displayMatrix(int mat[MAX][MAX], int rows, int cols);
void sumRows(int mat[MAX][MAX], int rows, int cols);
void sumCols(int mat[MAX][MAX], int rows, int cols);

int main() {
    int mat[MAX][MAX];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of the matrix:\n";
    inputMatrix(mat, rows, cols);

    cout << "\nMatrix:\n";
    displayMatrix(mat, rows, cols);

    cout << "\nSum of each row:\n";
    sumRows(mat, rows, cols);

    cout << "\nSum of each column:\n";
    sumCols(mat, rows, cols);

    return 0;
}

void inputMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void sumRows(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << "\n";
    }
}
void sumCols(int mat[MAX][MAX], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += mat[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << sum << "\n";
    }
}
