#include <iostream>
#include <vector>
using namespace std;
void rotateMatrixClockWise(vector<vector<int>> &mat, int n, int m)
{
    vector<vector<int>> ans(n, vector<int>(m));
    int row = 0;
    int col = mat.size() - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[row][col] = mat[i][j];
            row++;
        }
        col--;
        row = 0;
    }
    mat = ans;
}

void rotateMatrixAntiClockWise(vector<vector<int>> &mat, int n, int m)
{
    vector<vector<int>> ans(n, vector<int>(m));
    int row = n - 1;
    int col = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[row][col] = mat[i][j];
            row--;
        }
        col++;
        row = n - 1;
    }
    mat = ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    rotateMatrixClockWise(mat, 3, 3);
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    rotateMatrixAntiClockWise(mat, 3, 3);
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}