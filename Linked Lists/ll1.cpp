//Program to remove duplicates from an unsorted linked list
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

void traverse() {
    struct node *tt;
    for(tt = start; tt != NULL; tt = tt->next)
        cout<<tt->data<<" ";
    cout<<endl;
}

void removeDups() {
    int check[MAX] = {0};
    struct node *t, *p;
    t = start;
    check[t->data] = 1;
    p = t->next;
    while(p != NULL) {
        if(check[p->data] == 1) {
            t->next = p->next;
            free(p);
            p = t->next;
        }
        else{
            check[p->data] = 1;
            t = t->next;
            p = p->next;
        }
    }
}

int main()
{
    struct node *n;
    n = makenode(5);
    add(n);
    n = makenode(3);
    add(n);
    n = makenode(2);
    add(n);
    n = makenode(5);
    add(n);
    n = makenode(7);
    add(n);
    n = makenode(8);
    add(n);
    n = makenode(2);
    add(n);
    removeDups();
    traverse();
    return 0;
}
