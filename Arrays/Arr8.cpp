//Program to set entire row and column to 0 if it contains any one element 0
#include <bits/stdc++.h>
#define lp1(s,e) for(int i = s; i < e; i++)
#define lp2(s,e) for(int j = s; j < e; j++)
#define MAX 1000
using namespace std;

int main()
{
    int mat[MAX][MAX], n, m, r[MAX] = {0}, c[MAX] = {0};
    cin>>m>>n;
    lp1(0,m)
        lp2(0,n)
            cin>>mat[i][j];
            
    lp1(0,m) {
        lp2(0,n) {
            if(mat[i][j] == 0) {
                r[i] = 1;
                c[j] = 1;
            }
        }
    }
    
    lp2(0,n) {
        if(c[j] == 1) {
            lp1(0,m) {
                mat[i][j] = 0;
            }
        }
    }
    
    lp1(0,m) {
        if(r[i] == 1) {
            lp2(0,n) {
                mat[i][j] = 0;
            }
        }
    }
    
    lp1(0,m) {
        lp2(0,n) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
