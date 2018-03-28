//Program to compress your string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1, i = 0;
    string s;
    cin>>s;
    for(i = 0; i < s.length()-1; i++) {
        if(s[i] == s[i+1]) {
            count++;
        }
        else {
            cout<<s[i]<<count;
            count = 1;
        }
    }
    cout<<s[i]<<count;
    return 0;
}
