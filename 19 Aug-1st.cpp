#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Queue {
private:
    int ar[5];
    int top;
    int rear;
public:
    Queue() {
        top = 0;
        rear = 0;
    }

    void push(int x) {
        if(rear == 5)
        {
            cout<<"\nQueue is full. You cannot insert the element\n";
        }
        else
        {
            ar[rear] = x;
            rear++;
        }
    }
    void pop() {
        if(top == rear)
        {
            cout<<"\nQueue is empty";
        }
        else
        {
            cout<<"\nDeleted the front element"<<ar[top];
            for(int i=1;i<rear;i++)
            {
                ar[i] = ar[i-1];
            }
        }
    }

    void sortit() {
        int small,temp,loc;
        for(int i=0;i<4;i++)
        {
            small = ar[i];
            loc = i;
            for(int j=i+1;j<5;j++)
            {
                if(ar[j]<small)
                {
                    small = ar[j];
                    loc = j;
                }
            }
            temp = ar[i];
            ar[i] = ar[loc];
            ar[loc] = temp;
        }
        cout<<"Array after selection sort is\n";
        for(int i=0;i<5;i++)
        {
            cout<<ar[i]<<" \n";
        }
    }

    void searchit() {
        int val;
        int loc = 0;
        cout<<"Enter the value you want to search\n";
        cin>>val;
        for(int i=0;i<5;i++)
        {
            if(ar[i] == val)
            {
                loc = i;
            }
        }
        cout<<loc;
    }

    void display() {
    cout<<"The elements of queue are";
    for(int i= top;i<rear;i++)
    {
        cout<<ar[i];
    }
    }
};
int main()
{
    Queue q1;
    int val;
    int ch;
    while(1)
    {
        cout<<"1.Push  2.Pop  3.Display  4.Sort  5. Search 6. Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter the value you want to insert";
                    cin>>val;
                    q1.push(val);
                    break;
            case 2: q1.pop();
                    break;
            case 3: q1.display();
                    break;
            case 4: q1.sortit();
                    break;
            case 5: q1.searchit();
                    break;
            case 6: exit(0);
                    break;
        }
    }
    return 0;
}