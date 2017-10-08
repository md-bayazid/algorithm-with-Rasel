#include<bits/stdc++.h>

using namespace std;

int stack_first[1000],top,n;

bool Add_stack(int item)
{
    if(top>=n-1)
    {
        cout<<"\nStack is full";
        return false;
    }
    else
    {
        stack_first[top] = item;
        top = top+1;
        return true;
    }
}

bool Delete_stack()
{
    int item;
    if(top<=0)
    {
        printf("\nStack is empty");
        return false;
    }
    else
    {
        top = top -1;
        item = stack_first[top];
        cout<<"\n"<<item;
        return true;
    }
}



int main()
{
    int i,value,choice;
    cout<<"Enter size of stack:";
    cin>>n;
    while(1)
    {
        cout<<"Enter choice";
        cin>> choice;
        if(choice== 0)
            break;
        if(choice==1)
        {
            cin>>value;
            Add_stack(value);
        }
        else
        {
            Delete_stack();
        }

    }
    return 0;
}
