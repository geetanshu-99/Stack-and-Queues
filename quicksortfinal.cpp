#include<iostream>
using namespace std;
int top=-1;
int a[20];
int quick_sort(int,int);
int main()
{
    int beg,end;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }

    top++;
    int lower[20],upper[20];
    lower[top]=0;
    upper[top]=n-1;
    while(top!=-1)
    {
        beg=lower[top];
        end=upper[top];
       // cout<<"beg"<<beg;
       //cout<<"end"<<end;
        top--;
    int loc=quick_sort(beg,end);
        //cout<<"location"<<loc<<endl;
        if(beg < loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if((loc+1)<end)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

}

int quick_sort(int beg,int end)
{
    int left,right,loc;
    loc=beg;
    left=beg;
    right=end;
    //cout<<"left"<<left;
    //cout<<"right"<<right;
        while(a[right]>=a[loc] && right>loc)
        {


            right=right-1;
        }
        if(loc==right)
        {//cout<<"location"<<loc;
            return loc;
        }
        int p;
        p=a[right];
        a[right]=a[loc];
        a[loc]=p;
        loc=right;
        while(a[left]<=a[loc] && left<loc)
            left=left+1;
        if(left==loc)
            return loc;
        p=a[left];
        a[left]=a[loc];
        a[loc]=p;
        loc=left;

}
