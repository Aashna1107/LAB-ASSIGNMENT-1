#include <iostream>
using namespace std;

const int MAX = 10;

// Function prototypes
void inputMatrix(int mat[MAX][MAX], int rows, int cols);
void displayMatrix(int mat[MAX][MAX], int rows, int cols);
void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int rows, int cols);

int main() {
    int mat[MAX][MAX], trans[MAX][MAX];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of the matrix:\n";
    inputMatrix(mat, rows, cols);

    cout << "\nOriginal Matrix:\n";
    displayMatrix(mat, rows, cols);

    transposeMatrix(mat, trans, rows, cols);

    cout << "\nTranspose of the Matrix:\n";
    displayMatrix(trans, cols, rows);

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

void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}
