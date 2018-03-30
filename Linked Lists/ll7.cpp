//Program to determine if two linked lists intersect(by reference not by value) and find its intersection point
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *start1 = NULL, *start2 = NULL;

struct node* makenode(int d) {
    struct node *x;
    x = (struct node *)malloc(sizeof(struct node));
    x->data = d;
    x->next = NULL;
    return x;
}

struct node* add(int d, struct node *head) {
    struct node *q = head;
    while(q->next != NULL)
        q = q->next;
    struct node *t = makenode(d);
    q->next = t;
    return t;
}

void getIntersection(struct node *h1, struct node *h2, int cnt1, int cnt2) {
    int d;
    if(cnt1 > cnt2) {
        d = cnt1 - cnt2;
        for(int i = 0; i < d; i++) {
            if(h1 == NULL)
                break;
            h1 = h1->next;
        }
        while(h1 != NULL && h2 != NULL) {
            if(h1 == h2) {
                d = h1->data;
                break;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
    }
    else {
        d = cnt2 - cnt1;
        for(int i = 0; i < d; i++) {
            if(h2 == NULL)
                break;
            h2 = h2->next;
        }
        while(h1 != NULL && h2 != NULL) {
            if(h1 == h2) {
                d = h2->data;
                break;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
    }
    
    cout<<"Intersection Point: "<<d<<endl;
}

int main()
{
    int c1, c2;     //total number of nodes in each linked list
    struct node *tmp;
    start1 = makenode(7);
    start2 = makenode(2);
    tmp = add(1,start1);
    tmp = add(6,start1);
    tmp = add(3,start1);
    start2->next = tmp;
    tmp = add(8,start1);
    start2->next->next = tmp;
    tmp = add(5,start1);
    start2->next->next->next = tmp;
    cin>>c1>>c2;
    getIntersection(start1, start2, c1, c2);
    return 0;
}
