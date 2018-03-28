//Program to find if two given strings are permutation of each other
#include <bits/stdc++.h>
using namespace std;

void sortString(string &str) {
    sort(str.begin(), str.end());
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    sortString(s1);
    sortString(s2);
    if(s1.length() == s2.length()) {
        if(s1.compare(s2) == 0)
            cout<<"Strings are permutation of each other"<<endl;
        else
            cout<<"Strings are not permutation of each other"<<endl;
    }
    else
        cout<<"Strings are not permutation of each other"<<endl;
    return 0;
}
