#include<iostream>
using namespace std;

int a[100], top = 0;

int push(int value, int size) {
    
    if(top < size) {
        a[top++] = value;
        cout<<"Push "<<value<<endl;
    }else {
        cout<<"Stack is full"<<endl;
    }
    
    return 0;
}

int pop() {
    
    if(top <= 0) {
        
        cout<<"Stack is empty!"<<endl;
    } else {
        
        int item = a[--top];
        cout<<"Pop = "<<item<<endl;
    }
    return 0;
}

int main() {
    
    int choice, value, size = 10;
    
    while(1) {
        cout<<"Enter choice :";
        cin>>choice;
        
        switch(choice) {
            case 1:
                cout<<"Enter value = ";
                cin>>value;
                push(value, size);
                break;
                
            case 2:
                pop();
                break;
        }
    }
    return 0;
}
