#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
class stack
{ struct node *top;
public:
    void push(int x){
    struct node *ptr = new node();
        ptr->data = x;
        ptr->next = top;
        top=ptr;
    }
    void pop(){
        struct node *ptr = top;
        while(ptr!=NULL){
            top=ptr;
            top=top->next;
            cout<<"Deleted element is"<<ptr->data;
            delete(ptr);
        }
    }
    void display(){
        struct node *ptr;
            ptr = top;
            cout<<"elements are : ";
            while(ptr != NULL)
            {
                cout<<ptr->data<<"\t";
                ptr = ptr->next;
            }
        }
};
int main(){
int ch;
    stack st;
    while(1)
    {
        cout<<"\n1.push 2.pop  3.display 4.exit \n Enter your choice: ";
        cin >> ch;
        switch(ch)
        {
            case 1: cout <<"Enter the element ";
                    cin >> ch;
                    st.push(ch);
                    break;
            case 2: st.pop(); break;
            case 3: st.display(); break;
            case 4: exit(0);
        
        }
    }
}