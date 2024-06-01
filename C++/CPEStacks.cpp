#include <iostream>
#include <string>
using namespace std;
#define MAX 4

//create functions that add an element to stack
//show top element
//print top element
//print all elements 
//quit 
int stack[MAX];
int top = -1; 

void push(int data)
{
    if(top==MAX-1)
    {
        cout<<"Stack Overflow\n";
        return ; 
    }
    top = top + 1;
    stack[top]=data; 
}

int pop()
{
    int value;
    if(top == -1)
    {
        cout<<"Stack underflow\n"
        exit(1); 
    }
    value = stack_arr[top]; 
    top = top-1;
    return value; 
}

int isEmpty()
{
    if(top==-1)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int printTop()
{
    if(isEmpty())
    {
        cout<<"Stack Underflow \n";
        exit(1); 
    }
    return stack[top]; 
}

void printAll()
{
    int i;
    if(top==-1)
    {
        cout<<"Stack Underflow \n";
        return; 
    }

    for(i=top; i>=0; i--)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl; 
}

int main()
{
    int instruction = 0; 
    int element = 0; 
    int d = 0; 
    cout << "1. Push\n"
         << "2. Pop\n"
         << "3. Print top element\n"
         << "4. Print all the elements\n"
         << "5. Quit\n";
    while (cin >> instruction && instruction != 5) 
    {
        switch (instruction) 
        {
            case 1:
                cout<<"Enter the element to be pushed"<<endl;
                cin>>element; 
                push(element); 

                break;
            case 2:
                cout<<"What element do you wish to delete?"<<endl;
                cin>>d; 
                pop(d);

                break;

            case 3:
                printTop();
                
                break;
            case 4:
                printAll(); 

                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }

        cout << "1. Push\n"
         << "2. Pop\n"
         << "3. Print top element\n"
         << "4. Print all the elemeents\n"
         << "5. Quit\n";
    }
    return 0;
}