#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct node
{
    char name;
    struct node *left;
    struct node *right;

};
struct node *root;
void insertion(char str)
{
    struct node *temp,*prev;
    struct node *ptr;
    ptr=new node;
    ptr->name=str;
    ptr->left=NULL;
    ptr->right=NULL;
    if(root==NULL)
    {
        root=ptr;
    }
    else{
        temp=root;
        while(temp!=NULL)
        {
prev=temp;
            if(str<temp->name)
            {
                temp=temp->left;
            }
            else
                temp=temp->right;

        }
        if(ptr->name<prev->name)
        {
            prev->left=ptr;
        }
        else
            prev->right=ptr;
    }
    //cout<<root->name;
}
void deletion(char str)
{if(root==NULL)
{
    cout<<"underflow"<<endl;
    return;

}
struct node *temp,*prev;
temp=root;
while((str!=temp->name) && (temp!=NULL))
{
    prev=temp;
    if(str<temp->name)
        temp=temp->left;
    else
        temp=temp->right;
}
if(temp->left==NULL && temp->right==NULL)
{
    if(temp==root)
    {
        root=NULL;
        return;
    }
    //node with no child
    if(temp->name<prev->name)
    {
        prev->left=NULL;
    }
    else
        prev->right=NULL;

}
//having two child
else if(temp->left!=NULL && temp->right!=NULL)
{
    char x;
    struct node *base;
    base=temp;
    temp=temp->right;
    while(temp->left!=NULL)
        temp=temp->left;
    x=temp->name;
    deletion(x);
    base->name=x;


}
//having one child
else
{
    if(temp==root)
    {
        if(temp->left!=NULL)
        {
            root=temp->left;
        }
        else
            root=temp->right;
    }
    else
    {
        if(temp->name<prev->name)
        {
            if(temp->left!=NULL)
            {
                prev->left=temp->left;
                temp->left=NULL;
                delete temp;
            }
            else{
                prev->left=temp->right;
                temp->right=NULL;
                delete temp;
            }
        }
        else
        {
            if(temp->left!=NULL)
            {
                prev->right=temp->left;
                temp->left=NULL;
                delete temp;

            }
            else{
                prev->right=temp->right;
                temp->right=NULL;
                delete temp;
            }
        }
    }
}

}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout<<root->name;
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {

        preorder(root->left);
        preorder(root->right);
        cout<<root->name;
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {

        preorder(root->left);
        cout<<root->name;
        preorder(root->right);
    }
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"Enter 1 for insertion"<<endl;
        cout<<"enter 2 for deletion"<<endl;
        cout<<"enter 3 for traverse"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            char str;
            cout<<"enter the character";
            cin>>str;
            insertion(str);
            break;
        case 2:
            char str1;
            cin>>str1;
            deletion(str1);
            break;
        case 3:
            //111struct node *root;
            preorder(root);
            break;
        case 4:
            //111struct node *root;
            postorder(root);
            break;
        case 5:
            //111struct node *root;
            inorder(root);
            break;
        default:
            return 1;
            break;
        }
    }
}
