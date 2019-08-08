#include<iostream.h>
using namespace std;

struct 2
{
    int data;
    struct node *next;
};
class Stack
{
    struct node *top;
public:
    void push(int x){
        struct node *ptr;
        ptr->data = x;
        ptr->next = NULL;
        while (top!=NULL)
        {
            ptr->next=top;
            top=ptr;
            delete ptr;
        }
        
    }
}
