//Program to check if the given string is a permutation of a pallindrome
#include <bits/stdc++.h>
#define loop(s,e) for(int i = s; i < e; i++)
using namespace std;

int check[1000] = {0};

int main()
{
    int length, countSpace = 0, odd = 0;
    char s[1000];
    cin.getline(s,sizeof(s));
    cin>>length;
    loop(0,length)
        if(s[i] == ' ')
            countSpace++;
            
    loop(0,length) {
        check[int(s[i])]++;    
    }
    
    loop(0,256) {
        if(check[i]%2 != 0)
            odd++;
    }
    
    if(countSpace%2 == 0) {
        if(odd > 1)
            cout<<"String is not a permutation of pallindrome"<<endl;
        else
            cout<<"String is a permutation of pallindrome"<<endl;
    }
    else {
        odd -= countSpace;
        if(odd > 1)
            cout<<"String is not a permutation of pallindrome"<<endl;
        else
            cout<<"String is a permutation of pallindrome"<<endl;
    }
    return 0;
}
