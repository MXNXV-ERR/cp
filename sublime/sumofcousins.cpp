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
int findCousinSum(Node *root,int k)
{
	if(root==NULL||root->data==k)
		return -1;
	int currSum=0,size;
	queue<Node*> q;
	q.push(root);
	bool f=false;
	while(!q.empty()){
		if(f)return currSum;
		size=q.size();
		currSum=0;
		while(size){
			root=q.front();
			q.pop();
			if((root->l&&root->l->data==k)||(root->r&&root->r->data==k))
				f=true;
			else{
				if(root->l)
				{
					currSum+=root->l->data;
					q.push(root->l);
				}
				if(root->r)
				{
					currSum+=root->r->data;
					q.push(root->r);
				}
			}
			size--;
		}
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	 struct Node* root = newNode(1);
    root->l = newNode(3);
    root->r = newNode(7);
    root->l->l = newNode(6);
    root->l->r = newNode(5);
    root->l->r->l = newNode(10);
    root->r->l = newNode(4);
    root->r->r = newNode(13);
    root->r->l->l = newNode(17);
    root->r->l->r = newNode(15);
    cout<<findCousinSum(root,5);
	
	return 0;
}
