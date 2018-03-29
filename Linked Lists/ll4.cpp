//Program to partition the linked list around a value x
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL, *startleft = NULL, *startright = NULL;

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

void addleft(struct node *q) {
    q->next = startleft;
    startleft = q;
}

void addright(struct node *q) {
    q->next = startright;
    startright = q;
}

void traverse(struct node *head) {
    struct node *it;
    for(it = head; it != NULL; it = it->next)
        cout<<it->data<<" ";
    cout<<endl;
}

struct node* partitionll(int pivot) {
    struct node *t, *tmp;
    for(t = start; t != NULL; t = t->next) {
        if(t->data < pivot) {
            tmp = makenode(t->data);
            addleft(tmp);
        }
        else {
            tmp = makenode(t->data);
            addright(tmp);
        }
    }
    
    t = startleft;
    while(t->next != NULL)
        t = t->next;
    t->next = startright;
    
    return startleft;
}

int main()
{
    struct node *n, *y;
    n = makenode(4);
    add(n);
    n = makenode(3);
    add(n);
    n = makenode(1);
    add(n);
    n = makenode(5);
    add(n);
    n = makenode(7);
    add(n);
    n = makenode(9);
    add(n);
    n = makenode(2);
    add(n);
    int x;
    cin>>x;
    y = partitionll(x);
    traverse(y);
    return 0;
}
