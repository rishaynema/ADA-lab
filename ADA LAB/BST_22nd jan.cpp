#include<iostream>
using namespace std;
struct node{
   int data;
   node* left;
   node* right;
};
node* root = NULL;
node* ins(int ikey)
{
    node* ptr = root,*par = NULL;
    while(ptr!=NULL)
    {
    	par =ptr;
        if(ikey<ptr->data)
            ptr = ptr->left;
        else if(ikey>ptr->data)
            ptr = ptr->right;
        else
            cout << "the key is repeated!!"<<endl;
    }
    node* temp = new node();
    temp->data = ikey;
    temp->left = NULL;
    temp->right = NULL;

    
    if(par==NULL)
	root = temp;
	    
    else if(ikey<par->data)
        par->left = temp;
        
    else
        par->right = temp;
    return root;
}
void minSearch()
{
	node* temp = root;
	int count = 0;
	while(temp->left!=NULL)
	{
		temp = temp->left;
		count++;
		
	}
	cout << "min element is: "<<temp->data<<endl;
	cout << "time complexity order: "<< count<< endl;
}
int main()
{
    char ch;
    int ikey,skey;

    while(1)
    {
        cin >> ch;
        if(ch=='i')
        {
            cin >> ikey;
            root = ins(ikey);
            cout << root->data<<endl;
        }
        else if(ch=='s')
        {
            
            minSearch();
        }

    }
}

