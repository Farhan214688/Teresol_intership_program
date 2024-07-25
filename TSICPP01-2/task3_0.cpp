#include <iostream>
using namespace std;

void spiral(int matrix[3][3], int rows, int cols) 
{
    int top = 0;
    int bottom = rows - 1;  // Corrected from rows = 1
    int left = 0;
    int right = cols - 1;
    int direction = 0;

    cout << "Spiral Order: ";
    while (top <= bottom && left <= right) 
    {
        if (direction == 0) 
        {
            for (int i = left; i <= right; ++i) 
            {
                cout << matrix[top][i] << " ";
            }
            ++top;
        } 
        else if (direction == 1) 
        {
            for (int i = top; i <= bottom; ++i) 
            {
                cout << matrix[i][right] << " ";
            }
            --right;
        } 
        else if (direction == 2) 
        {
            if (top <= bottom) 
            {
                for (int i = right; i >= left; --i) 
                {
                    cout << matrix[bottom][i] << " ";
                }
                --bottom;
            }
        } 
        else if (direction == 3) 
        {
            if (left <= right) 
            {
                for (int i = bottom; i >= top; --i) 
                {
                    cout << matrix[i][left] << " ";
                }
                ++left;
            }
        }
        // Update direction (0 -> 1 -> 2 -> 3 -> 0 ...)
        direction = (direction + 1) % 4;
    }
    cout << endl;
}

int main() 
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    spiral(matrix, 3, 3);
    return 0;
}
