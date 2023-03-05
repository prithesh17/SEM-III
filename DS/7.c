#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct NODE *left;
    struct NODE *right;
};
struct NODE *newnode(int data)
{
    struct NODE *node =(struct NODE *)malloc(sizeof(struct NODE));
    node->data=data;
    node->left=node->right=NULL;
    return(node);
}
struct NODE *insertlevelorder(int arr[], int i,int n)
{
    struct NODE *root=NULL;
    if(i<n)
    {
        root=newnode(arr[i]);
        root->left=insertlevelorder(arr,2*i+1,n);
        root->right=insertlevelorder(arr,2*i+2,n);
    }
    return root;
}
void inorder(struct NODE *root)
{
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,6,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    struct NODE *root=insertlevelorder(arr,0,n);
    inorder(root);
}