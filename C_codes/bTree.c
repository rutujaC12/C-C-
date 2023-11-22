//Binary search tree using linked list
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *BSTinsert(struct node *root, int item)
{
    if(root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->left = root->right = NULL;
        root->data = item;
        return root;
    }
    else
    {
        if(item < root->data )
            root->left =BSTinsert(root->left,item);
        else if(item > root->data )
            root->right =BSTinsert(root->right,item);
        return(root);
    }
}
void Inorder(struct node *root)
{
    if( root != NULL)
    {
        Inorder(root->left);
        printf(" %d ",root->data);
        Inorder(root->right);
    }
}

void Preorder(struct node *root)
{
    if( root != NULL)
    {
        printf(" %d ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(struct node *root)
{
    if( root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf(" %d ",root->data);
    }
}

int main()
{
    struct tnode *root = NULL;
    int opt, item, n, i;
    do
    {
        printf("\n1.Insert \n2.Inorder Traversal\n3.Preorder Traversal\n4.Postorder Traversal\n5.Exit\nOption:");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            root = NULL;
            printf("\nNo of nodes to insert:");
            scanf("%d",&n);
            for(i = 1; i <= n; i++)
            {
                printf("\nEnter data for node %d : ", i);
                scanf("%d",&item);
                root = BSTinsert(root,item);
            }
            break;
        case 2:
            printf("\nBST Traversal in INORDER \n");
            Inorder(root);
            break;
        case 3:
            printf("\nBST Traversal in PREORDER \n");
            Preorder(root);
            break;
        case 4:
            printf("\nBST Traversal in POSTORDER \n");
            Postorder(root);
            break;
        case 5:
            exit(1);
            printf("Wrong Choice");
            break;
        }
    } while(opt!= 5);
    return 0;
}
