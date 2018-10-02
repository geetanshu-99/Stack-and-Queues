#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
int n=5;
int a[5];
void insertion(int item)
{if(((front==0) && (rear==n-1)) || (front==rear+1))
{
    cout<<"overflow";
    return;
}
if(front==-1 && rear==-1)
{
    front=0;
    rear=0;

}
else if(front!=0 && rear==n-1)
{int i=front;
 for(int j=front;j<=rear;j++)
 {
     a[j-1]=a[j];


 }
 front=front-1;
 rear=rear-i+1;

}
else

rear++;
    a[rear]=item;


}
void deletion()

{
    if(front==-1 && rear==-1)
    {
        cout<<"underflow"<<endl;
        return;
    }
    int item=a[front];
    cout<<item;
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
        front++;


}
void traverse()
{
  if(front<=rear)
  {
      for(int i=front;i<=rear;i++)
      {
          cout<<a[i];
      }
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
