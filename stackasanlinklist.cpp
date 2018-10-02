#include<iostream>
using namespace std;
struct list
{
    int info;
    struct list *next;
};
struct list *top;
void push(int value)
{
    struct list *ptr;
    ptr=new list;
    if(top==NULL)
    {
        ptr->info=value;
        ptr->next=NULL;
        top=ptr;

    }
    else
    {
        ptr->info=value;
        ptr->next=top;
        top=ptr;
    }
}
void pop()
{if(top==NULL)
{
    cout<<"underflow";
}
else
{struct list *temp;
    temp=top;
    top=temp->next;
    delete temp;
}

}
void traverse()
{struct list *temp;

temp=top;
while(temp->next!=NULL)
{
    cout<<temp->info;
    temp=temp->next;

}
cout<<temp->info;

}
int main()
{
    int ch;
    int num;
    while(1)
    {
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for traverse"<<endl;
        cout<<"enter the choice"<<endl;
        cin>>ch;
        switch(ch){
        case 1:
            cin>>num;
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        default:
            return 1;
        }

    }
}
