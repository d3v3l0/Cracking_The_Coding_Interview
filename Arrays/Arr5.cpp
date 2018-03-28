//Program to check if two given strings are one edit or zero edit aways
#include <bits/stdc++.h>
#define loop(s,e) for(int i = s; i < e; i++)
#define loop2(s,e) for(int j = s; j < e; j++)
using namespace std;

int check[1000] = {0};

int main()
{
    int l1, l2, count = 0;
    string s1, s2;
    cin>>s1>>s2;
    l1 = s1.length();
    l2 = s2.length();
    if((l1 - l2) == 1) {
        loop(0,l1) {
            loop2(0,l2) {
                if(s1[i] == s2[j]) {
                    count++;
                    break;
                }
            }
        }

        if(count == l2)
            cout<<"True"<<endl;
        else 
            cout<<"False"<<endl;
    }
    else if((l1 - l2) == 0) {
        loop(0,l1)
            if(s1[i] == s2[i])
                count++;

        if(count == (l2-1) || count == l2)
            cout<<"True"<<endl;
        else 
            cout<<"False"<<endl;
    }
    else {

        cout<<"False"<<endl;
    }
    return 0;
}
