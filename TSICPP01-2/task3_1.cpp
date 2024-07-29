#include <iostream>
using namespace std;
/*void rotate(int matrix[4][4], int n) 
{
    for (int layer = 0; layer < n / 2; ++layer) 
    {
        int first = layer;
        int last = n - layer - 1;
        int topLeft = matrix[first][first]; // Save the top-left element
        // Move left column up
        for (int i = first; i < last; ++i) 
        {
            matrix[i][first] = matrix[i + 1][first];
        }
        // Move bottom row left
        for (int i = first; i < last; ++i) 
        {
            matrix[last][i] = matrix[last][i + 1];
        }
        // Move right column down
        for (int i = last; i > first; --i) 
        {
            matrix[i][last] = matrix[i - 1][last];
        }
        // Move top row right
        for (int i = last; i > first; --i) 
        {
            matrix[first][i] = matrix[first][i - 1];
        }
        matrix[first][first + 1] = topLeft; // Place saved top-left element
    }
}*/

void printMatrix(int matrix[4][4], int n) 
{
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int matrix[4][4] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:"<<endl;
    printMatrix(matrix, 4);
    rotate(matrix, 4);
    cout<<endl;
    cout << "Matrix After Clockwise Rotation : "<<endl;
    printMatrix(matrix, 4);

    return 0;
}
