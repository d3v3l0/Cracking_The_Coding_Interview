//Program to add two numbers stored in different linked lists in reverse order
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *s1 = NULL, *s2 = NULL, *sum = NULL;

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

void traverseSum() {
    struct node *tt;
    for(tt = sum; tt != NULL; tt = tt->next)
        cout<<tt->data<<" ";
    cout<<endl;
}

void sumll() {
    int x, y = 0;
    struct node *it1, *it2, *tmp;
    it1 = s1;    it2 = s2;
    x = it1->data + it2->data + y;
    y = x/10;
    x = x%10;
    sum = makenode(x);
    it1 = it1->next;
    it2 = it2->next;
    while(it1 != NULL && it2 != NULL) {
        x = it1->data + it2->data + y;
        y = x/10;
        x = x%10;
        add(x,sum);
        it1 = it1->next;
        it2 = it2->next;
    }

    if(it1 == NULL && it2 != NULL) {
        while(it2 != NULL) {
            x = it2->data + y;
            y = x/10;
            x = x%10;
            add(x,sum);
            it2 = it2->next;
        }
    }
    else if(it2 == NULL && it1 != NULL){
        while(it1 != NULL) {
            x = it1->data + y;
            y = x/10;
            x = x%10;
            add(x,sum);
            it1 = it1->next;
        }
    }
    else if(it2 == NULL && it1 == NULL && y != 0)
        add(y,sum);
        
}

int main()
{
    s1 = makenode(7);
    add(1,s1);
    add(6,s1);
    add(4,s1);
    add(2,s1);
    s2 = makenode(5);
    add(9,s2);
    add(3,s2);
    sumll();
    traverseSum();
    return 0;
}
