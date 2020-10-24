#include <bits/stdc++.h>
using namespace std;
 
// Function to return the count of indices in
// from the given binary matrix having equal
// count of set bits in its row and column
int countPosition(vector<vector<int>> mat)
{
    int n = mat.size();
    int m = mat[0].size();
 
    // Stores count of set bits in
    // coressponding column and row
    vector<int> row(n);
    vector<int> col(m);
 
    // Traverse matrix
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
             
            // Since 1 contains a set bit
            if (mat[i][j] == 1) 
            {
                 
                // Update count of set bits
                // for current row and col
                col[j]++;
                row[i]++;
            }
        }
    }
 
    // Stores the count of
    // required indices
    int count = 0;
 
    // Traverse matrix
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++)
        {
             
            // If current row and column
            // has equal count of set bits
            if (row[i] == col[j]) 
            {
                count++;
            }
        }
    }
 
    // Return count of
    // required position
    return count;
}
 
// Driver Code
int main()
{
    vector<vector<int>> mat = { { 0, 1 },
                                { 1, 1 } };
 
    cout << (countPosition(mat));
}
 
