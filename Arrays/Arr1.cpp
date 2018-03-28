//Program to find if a string has All unique characters and we cannot use additional data structures
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag = 1;
    string s;
    cin>>s;
    for(int i = 0; i < s.length(); i++) {
        for(int j = i+1; j < s.length(); j++) {
            if(s[i] == s[j]) {
                flag = 0;
                break;
            }
            else
                continue;
        }
        if(flag == 0)
            break;
    }
    if(flag)
        cout<<"All Characters are Unique"<<endl;
    else
        cout<<"String has duplicate characters"<<endl;
    return 0;
}
