#include<iostream>
using namespace std;
struct queue
{
    int info;
    int priority;
    struct queue *next;

};
struct queue *front=NULL,*rear=NULL;
void insertion(int item,int pr )
{struct queue *ptr,*q;
 ptr=new queue;
 ptr->info=item;
 ptr->priority=pr;
 if(front==NULL || ptr->priority<=front->priority)
 {     ptr->next=front;
     front=ptr;
 }
 else
 {
     q=front;
     while(q->next!=NULL && ptr->priority>q->next->priority)
     {
         q=q->next;
     }
     ptr->next=q->next;
     q->next=ptr;

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
{struct queue *temp;
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
    int num,prio;
    while(1)
    {cout<<"enter 1 for insertion"<<endl;
    cout<<"enter 2 for deletion"<<endl;
    cout<<"enter 3 for traverse"<<endl;
        cin>>ch;
        switch(ch){
    case 1:
        cin>>prio;
        cin>>num;
        insertion(num,prio);
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

