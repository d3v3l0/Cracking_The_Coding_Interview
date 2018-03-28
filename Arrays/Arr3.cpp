//Program to  to replace all spaces in a string with '%20'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int countSpace = 0, length;
    char s[1000];
    cin.getline(s,sizeof(s));
    cin>>length;
    for(int i = 0; i < length; i++) {
        if(s[i] == ' ')
            countSpace++;
    }
    
    int len = length + countSpace*2;
    
    for(int i = length-1; i >= 0; i--) {
        if(s[i] == ' ') {
            s[len - 1] = '0';
            s[len - 2] = '2';
            s[len - 3] = '%';
            len -= 3;
        }
        else {
            s[len - 1] = s[i];
            len--;
        }
    }
    cout<<s;
    return 0;
}
