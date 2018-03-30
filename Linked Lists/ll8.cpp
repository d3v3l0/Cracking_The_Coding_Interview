//Program to find the node at the beginning of the loop in a circular linked list
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
bool check[MAX] = {false};

struct node* makenode(int d) {
    struct node *x;
    x = (struct node *)malloc(sizeof(struct node));
    x->data = d;
    x->next = NULL;
    return x;
}

void add(int d, struct node *head) {
    struct node *q = head;
    while(q->next != NULL)
        q = q->next;
    struct node *t = makenode(d);
    q->next = t;
}

void getloopNode() {
    struct node *it;
    for(it = start; it != NULL; it = it->next) {
        if(check[it->data] == false)
            check[it->data] = true;
        else {
            break;
        }
    }
    cout<<"Beginning of the loop: "<<it->data<<endl;
}

int main()
{
    start = makenode(1);
    add(2,start);
    add(3,start);
    add(4,start);
    add(5,start);
    add(3,start);
    getloopNode();
    return 0;
}
