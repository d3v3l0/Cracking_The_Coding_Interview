//Program to find kth to last element of a singly linked list
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL, *last;

struct node* makenode(int d) {
    struct node *x;
    x = (struct node *)malloc(sizeof(struct node));
    x->data = d;
    x->next = NULL;
    return x;
}

void add(struct node *q) {
    q->next = start;
    start = q;
}

void findkth(int k) {
    struct node *it;
    int count = 0, i = 0;
    for(it = start; it != NULL; it = it->next) {
        count++;
    }
    count = count - k;
    for(it = start; it != NULL; it = it->next) {
        if(i == count) {
            cout<<it->data<<endl;
            break;
        }
        else
            i++;
    }
}

int main()
{
    struct node *n;
    n = makenode(4);
    add(n);
    n = makenode(3);
    add(n);
    n = makenode(1);
    add(n);
    n = makenode(6);
    add(n);
    n = makenode(7);
    add(n);
    n = makenode(8);
    add(n);
    n = makenode(2);
    add(n);
    int t;
    cin>>t;
    findkth(t);
    return 0;
}
