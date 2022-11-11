#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *l,*r;
};
struct Node* newNode(int item)
{
	struct Node* t=new Node();
	t->data=item;
	t->l=t->r=NULL;
	return t;
}
void findLeafSum(Node *root,int& Sum)
{
	if(!root) return;
	if(!root->l&&!root->r)
		Sum+=root->data;
	findLeafSum(root->l,Sum);
	findLeafSum(root->r,Sum);
}
int main(int argc, char const *argv[])
{
	Node *root = newNode(1);
    root->l = newNode(2);
    root->l->l = newNode(4);
    root->l->r = newNode(5);
    root->r = newNode(3);
    root->r->r = newNode(7);
    root->r->l = newNode(6);
    root->r->l->r = newNode(9);
    int Sum=0;
    findLeafSum(root,Sum);
    cout<<Sum;
	
	return 0;
}
