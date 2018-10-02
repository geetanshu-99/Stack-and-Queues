#include<iostream>
using namespace std;
struct queue
{
    int info;
    struct queue *next;
};
struct queue *front=NULL,*rear=NULL;
void insertion(int item)
{
    struct queue *ptr;
    ptr=new queue;
    if(front==NULL)
    {
        ptr->info=item;
        ptr->next=NULL;
        front=ptr;
        rear=ptr;

    }
    else{
        ptr->info=item;
        ptr->next=NULL;
        rear->next=ptr;
        rear=ptr;
    }
}
void deletion()
{
    int p;
    if(front==NULL)
    {
        cout<<"underflow";
    }
    else if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else{
        p=front->info;
        cout<<p;
        front=front->next;
    }
}
void traverse()
{
    struct queue *temp;
    temp=front;
    while(temp!=NULL)
    {

        cout<<temp->info;
        temp=temp->next;
    }
}
int main()
{
    int ch;
    int num;
    while(1)
    {cout<<"enter 1 for insertion"<<endl;
    cout<<"enter 2 for deletion"<<endl;
    cout<<"enter 3 for traverse"<<endl;
        cin>>ch;
        switch(ch){
    case 1:
        cin>>num;
        insertion(num);
        break;
    case 2:
        deletion();
        break;
    case 3:
        traverse();
        break;
    default:
        return 1;
    }
    }
    return 0;
}
