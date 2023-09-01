#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//Creating Node
struct node{

struct node *next;
int data;

};


int main(){
//Initialize Nodes
struct node*start;

//Allocatrew memory
struct node *node1 = (struct node*)malloc(sizeof(struct node));
struct node *node2 = (struct node*)malloc(sizeof(struct node));
struct node *node3 = (struct node*)malloc(sizeof(struct node));

//Assing node
    node1 -> data = 1;
    node2 -> data = 2;
    node3 -> data = 3;
//Connect Node
    node1 -> next =node2;
    node2 -> next =node3;
    node3 -> next =NULL;

    start =node1;

    struct node *p;
    p = start;

    bool result =false;
    int key =2;

    p = start;
    while(p!= NULL){
        if(p->data == key){
        result =true;
        }
        p =  p->next;

    }

    printf("%u\n",result);
    return 0;
}
