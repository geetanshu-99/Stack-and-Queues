#include<iostream>
#define max 5
using namespace std;
int top=-1;

class stack{
int a[max];
public:
    void push();
    void pop();
    void traverse();
};
void stack::push()
{

    if(top==(max-1))
             {
                 cout<<"overflow";
             }
             else
             {int c;
             cin>>c;
                 top++;
                 a[top]=c;

             }

            }
             void stack:: pop()
            {
                int ele;
                if(top==-1)
                {
                    cout<<"underflow";
                }
                else{
                    ele=a[top];
                    cout<<ele;
                    top--;
                }

            }
            void stack:: traverse()
            {
                if(top==-1)
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                    for(int i=0;i<=top;i++)
                        cout<<a[i];
                }
            }

int main()
{  stack s;
    int ch;
    while(1)
    {
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for traverse"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.traverse();
            break;
        default:
            return 1;
            break;

        }

    }
}
