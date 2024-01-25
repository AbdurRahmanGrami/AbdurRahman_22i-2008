#include <iostream>
using namespace std;

void input(int A[][100], int m, int n);
void display(int A[][100], int m, int n);
int elements_Sum(int A[][100], int m, int n);
void rowSum(int A[][100], int m, int n);
void columnSum(int A[][100], int m, int n);
void transpose(int A[][100], int m, int n);

int main() {
    int m, n;
    int matrix[100][100];

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            input(matrix, m, n);
            break;
        case 2:
            display(matrix, m, n);
            break;
        case 3:
            cout << "Sum of elements: " << elements_Sum(matrix, m, n) << endl;
            break;
        case 4:
            rowSum(matrix, m, n);
            break;
        case 5:
            columnSum(matrix, m, n);
            break;
        case 6:
            transpose(matrix, m, n);
            break;
        case 0:
            break;

        default:
            cout << "Choose a correct option!.\n";
        }
    } while (choice != 0);

    return 0;
}

// Inputting elements
void input(int A[][100], int m, int n) {
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }
}

// Displaying elememts
void display(int A[][100], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Calculating sum of elements
int elements_Sum(int A[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

// Displaying sum of elements row wise
void rowSum(int A[][100], int m, int n) {
    cout << "Row-wise sum:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

// Displaying sum of elements column wise
void columnSum(int A[][100], int m, int n) {
    cout << "Column-wise sum:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

// Displaying transpose of matrix
void transpose(int A[][100], int m, int n) {
    int transposed[100][100];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[i][j] = A[j][i];
        }
    }

    cout << "Transpose of the matrix:\n";
    display(transposed, n, m);
}
