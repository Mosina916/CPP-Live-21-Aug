#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;

	}
};


node* Buildtree(){
	int da;
	cin>>da;//8

	if(da==-1){
		return NULL;
	}



	// make a new node
	node*root=new node(da);


	root->left=Buildtree();//lst-->ye kuch return kar raha hoga-->lst k root ka adress return kar raha hoga
	root->right=Buildtree();//rst

	return root;

}




// print

// preorder--> root lst  rst

void preorderprint(node*root){

	// base case
	if(root==NULL){
		return;
	}

	// recursive 
	cout<<root->data<<" ";//8 3 1
	preorderprint(root->left);//lst
	preorderprint(root->right);//rst

}



// inorder-->lst root rst


void inorderprint(node*root){

	// base case
	if(root==NULL){
		return;
	}

	// recursive 
	inorderprint(root->left);//lst
	cout<<root->data<<" ";//
	
	inorderprint(root->right);//rst

}



// postorder-->lst rst root


void postorderprint(node*root){

	// base case
	if(root==NULL){
		return;
	}

	// recursive 
	postorderprint(root->left);//lst
	postorderprint(root->right);//rst
	cout<<root->data<<" ";//
	
	

}





// input 


// 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
int main(){

	node*root=Buildtree();
	cout<<"preorderprint : "<<endl;
	preorderprint(root);
	cout<<endl;

	cout<<"inorderprint : "<<endl;
	inorderprint(root);

	cout<<endl;
	cout<<"postorderprint : "<<endl;
	postorderprint(root);

	cout<<endl;






	return 0;
}