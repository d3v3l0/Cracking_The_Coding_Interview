//Program to check if a linked list is a pallindrome
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL, *startrev = NULL;

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

void addRev(struct node *q) {
    q->next = startrev;
    startrev = q;
}

void reverse() {
    struct node *it,*temp;
    for(it = start; it != NULL; it = it->next) {
        temp = makenode(it->data);
        addRev(temp);
    }
}

bool checkPallindrome() {
    struct node *t1, *t2;
    t1 = start; t2 = startrev;
    while(t1 != NULL && t2 != NULL) {
        if(t1->data != t2->data)
            return false;
        t1 = t1->next;
        t2 = t2->next;
    }
    return t1 == NULL && t2 == NULL;
}

int main()
{
    start = makenode(7);
    add(1,start);
    add(6,start);
    add(1,start);
    add(8,start);
    reverse();
    bool flag = checkPallindrome();
    if(flag)
        cout<<"It is a Pallindrome"<<endl;
    else
        cout<<"It is not a Pallindrome"<<endl;
    return 0;
}
