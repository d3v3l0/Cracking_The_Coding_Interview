//Program to check if one string is rotation of another string using only the given method, given "isSubstring" method
#include <bits/stdc++.h>
#define lp(s,e) for(int i = s; i < e; i++)
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if(s1.length() == s2.length()) {
        string str = s1 +  s1;
        size_t found = str.find(s2);
        if (found!=string::npos)
            cout<<"String 2 is a rotation of String 1"<<endl;
        else
            cout<<"String 2 is not a rotation of String 1"<<endl;
    }
    else
        cout<<"String 2 is not a rotation of String 1"<<endl;
    return 0;
}
