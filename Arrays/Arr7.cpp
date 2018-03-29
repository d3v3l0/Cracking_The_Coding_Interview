//Program to rotate your nxn matrix by 90degrees
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int main()
{
    int mat[MAX][MAX], n;
    cin>>n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>mat[i][j];
            
    for(int ly = 0; ly < n/2; ly++) {
        int f = ly;
        int lt = n - 1 - ly;
        for(int i = f; i < lt; i++) {
            int off = i - f;
            
            int top = mat[f][i];
            mat[f][i] = mat[lt-off][f];
            mat[lt-off][f] = mat[lt][lt-off];
            mat[lt][lt-off] = mat[i][lt];
            mat[i][lt] = top;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
