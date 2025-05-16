#include<iostream>
using namespace std;

void push(int stack[], int &top, int user){
    top++;
    for (int i = 0; i <= top; i++)
    {
        stack[top] = user;
        cout << "Value is = " << stack[i] << " " << endl;
    }
    
}
void pop(int stack[], int &top){
    top--;
    for (int i = 0; i <= top; i++)
    {
        cout << "Value is = " << stack[i] << " " << endl;
    }   
}
void peek(int stack[], int &top){

    cout << "Last Value is = " << stack[top] << " " << endl;   
}
void isEmpty(int stack[], int &top){

    if (top == -1)
    {
        cout << "Array is Empty !" << endl;
    }
    else{
        cout << "Array is not Empty." << endl;
    }
}
void isFull(int &top , int size){

    if (top == size-1)
    {
        cout << "Array is full !" << endl;
    }
    else{
        cout << "Array is not Full." << endl;
    }
}
void Size(int &top){
    
    cout << "Array Size is = " << top + 1  << endl;
}


int main()
{
    int user , userval , size;
    int top = -1;

    int *stack = new int[user];
    cout << "Enter the size of Array = ";
    cin >> size;
    do
    {
        cout << "Press 1 for Push" << endl;
        cout << "Press 2 for Pop" << endl;
        cout << "Press 3 for Peek" << endl;
        cout << "Press 4 for Is Empty" << endl;
        cout << "Press 5 for Is Full" << endl;
        cout << "Press 6 for Size" << endl;
        cout << "Press 0 for Exit.."<< endl;
        cout << "-------------------------------" << endl;
        cout << "Enter Your Choice = ";
        cin >> user;
        
        switch (user){
            
            case 1:
            cout << "Enter the Value of Array = ";
            cin >> userval;
            push(stack,top,userval);
            break;
            case 2:
            pop(stack,top);
            break;  
            case 3:
            peek(stack,top);
            break;
            case 4:
            isEmpty(stack,top);
            break;
            case 5:
            isFull(top, size);
            break;
            case 6:
            Size(top);
            break;
            case 0:
            cout << "Exit..." << endl;
            break;
            
            default:
             cout << "Please Enter Valid Number (0 to 6)." << endl;
            break;
        }
        cout << "-------------------------------" << endl;
    }
    while (user != 0);

}  