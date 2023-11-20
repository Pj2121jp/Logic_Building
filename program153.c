

#include<stdio.h>
#include<stdlib.h>

//Structure Declaratin
struct Node
{
    int data;                     // 4 Byte
    struct node *next;            // 8 Byte

};

typedef struct node Node;
typedef struct node * PNode;
typedef struct node ** PPNode;

int main()
{
    struct node *First = NULL; 

    return 0;
}