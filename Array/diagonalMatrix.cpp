#include <iostream>

using namespace std;

const int SIZE1 = 3;
const int SIZE2 = 3;

/* Diagonal Matrix
Ex: 1 0 0 0
    0 2 0 0
    0 0 3 0
    0 0 0 4

    A[i][j] = 0 if i =/= j
*/

// Storing all 0 to the array is wasting memory space
// We should only store data that is the diagonal only
void initializeDiagonal_arr(int arr[SIZE1][SIZE2])
{
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            i != j ? 0 : arr[i][j] = j + 1;
        }
    }
}
void display2dArray(int arr[SIZE1][SIZE2])
{
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
}
// Optimal storing diagonal matrix
//  Storing all diagonal elements in 1D array
void optimalInitializing(int arr[SIZE1][SIZE2])
{
    for (int i = 0, j = 0; i < SIZE1 && j < SIZE1; i++, j++)
    {
        arr[i][j] = j + 1;
    }
}

// Class for storing 1D diagonal array
class Diagonal
{
private:
    int n;
    int *A;

public:
    // Create an array
    Diagonal(int dim)
    {
        this->n = dim;
        A = new int[dim];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    // Destructor to destroy the array
    ~Diagonal() { delete[] A; }
    // ---------- Lower triangular Matrix --------------
    void setLowerTri(int i, int j, int x);
    int getLowerTri(int i, int j);
    void initializeLowerTri(int d);
    void displayLowerTri();
};
void Diagonal::set(int i, int j, int x)
{
    if (i == j)
    {
        A[i - 1] = x;
    }
}
int Diagonal::get(int i, int j)
{
    if (i == j)
    {
        return A[i - 1];
    }
    else
    {
        return 0;
    }
}
void Diagonal::setLowerTri(int i, int j, int x)
{
    if (i >= j)
    {
        A[(i * (i - 1) / 2) + j - 1] = x;
    }
}
int Diagonal::getLowerTri(int i, int j)
{
    if (i >= j)
    {
        return A[(i * (i - 1) / 2) + j - 1];
    }
    else
    {
        return 0;
    }
}
void Diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i - 1] << "\t ";
            }
            else
            {
                cout << "0"
                     << "\t";
            }
        }
        cout << endl;
    }
}
void Diagonal::displayLowerTri()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[(i * (i - 1) / 2) + j - 1] << "\t ";
            }
            else
            {
                cout << "0"
                     << "\t";
            }
        }
        cout << endl;
    }
}
void Diagonal::initializeLowerTri(int d)
{
    int val;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cout << "i:" << i << " j: " << j << endl;
            cin >> val;
            Diagonal::setLowerTri(i, j, val);
        }
    }
}

/* Lower Triangular Matrix Row-Major Mapping
Ex: 1 0 0 0
    1 2 0 0
    2 3 3 0
    4 5 6 4

    A[i][j] = 0 if i < j
    A[i][j] =/= 0 if i >= j
    --------------------------
    Index(A[i][j]) = [i(i-1)/2] + j - 1
    --------------------------
    Lower Triangular Matrix Column-Major Mapping
    Index(A[i][j]) = [n + n - 1 + n - 2 + n - (j - 2)] + (i - j)
    Index(A[i][j]) = [n(i-1)- (j-2)(j-1)/2] + (i-j)
*/

int main()
{
    int arr1[SIZE1][SIZE2];

    cout << "------ STORING DIAGONAL MATRIX -------" << endl;
    initializeDiagonal_arr(arr1);
    display2dArray(arr1);
    cout
        << "------- STORE ELEMENTS IN DIAGONAL ONLY (OPTIMAL)------ " << endl;
    Diagonal matr1(4);

    matr1.set(0, 0, 10);
    matr1.set(1, 1, 15);
    matr1.set(2, 2, 20);
    matr1.set(3, 3, 25);
    matr1.display();
    cout
        << "------- STORE ELEMENTS IN LOWER TRIANGULAR MATRIX (OPTIMAL)------ " << endl;
    cout << "Enter dimension for the matrix: ";
    int dim;
    cin >> dim;
    Diagonal lowerMatrix(dim);
    cout << "\nEnter data for the matrix" << endl;
    lowerMatrix.initializeLowerTri(dim);
    lowerMatrix.displayLowerTri();
    return 0;
}