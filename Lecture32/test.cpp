#include<iostream>
#include<queue>
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


int countofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// // recursive

	// int lc=countofnodes(root->left);//3
	// int rc=countofnodes(root->right);//1

	// return lc+rc+1;

	return countofnodes(root->left)+countofnodes(root->right)+1;

}


// sum of nodes


int sumofnodes(node*root){

	// base case
	if(root==NULL){
		return 0;
	}


	// recursive 

	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}


int height(node*root){ //1 2
	// base case
	if(root==NULL){
		return 0;
	}



	// recusrive case

	int lsth=height(root->left);//2-->left//1
	int rsth=height(root->right);//3 //0

	return max(lsth,rsth)+1;
}



int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}



	// recursive case

	int op1=diameter(root->left);//1 2//agar diameter pass kar raha hai lst   //0
	int op2=diameter(root->right);//2 agar diameter pass kar raha hai rst //0
	int op3=height(root->left)+height(root->right);// agar diameter pass kar raha hai root //0+0=0
		//2

	return max(op1,max(op2,op3));//

}

class Pair{
public: 
	int diameter;
	int height;
};

Pair fastdiameter(node*root){
	Pair p;
	// base case
	if(root==NULL){
		p.diameter=0;
		p.height=0;
		return p;


	}

	// recursive case
	Pair x=fastdiameter(root->left);//0d,0h
	Pair y=fastdiameter(root->right);//2,3 
	p.height=max(x.height,y.height)+1;

	// p.diameter
	int op1=x.height+y.height;//agar root k through pass horaha hai

	int op2=x.diameter;
	int op3=y.diameter;

	p.diameter=max(op1,max(op3,op2));

	return p;

}


void mirror(node*root){

	// base case
	if(root==NULL){
		return;
	}



	// recursive case 
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);



}


void printlevel(node*root){
	queue<node*> q;
	q.push(root);//8;
	q.push(NULL);//8 NULL
	while(!q.empty()){
	node*x=q.front();
	q.pop();// 3 10 NULL
	if(x==NULL){
		// next line and NULL insert hai 
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else{
		// no ko print karana hai 
		cout<<x->data<<" ";//8
		// uske left and right child ko push
		if(x->left!=NULL){
			q.push(x->left);
		}
		if(x->right!=NULL){
			q.push(x->right);
		}
	}
	}

}






// input 


// 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
int main(){

	node*root=Buildtree();
	// cout<<"preorderprint : "<<endl;
	// preorderprint(root);
	// cout<<endl;

	// // cout<<"inorderprint : "<<endl;
	// inorderprint(root);

	// cout<<endl;
	// cout<<"postorderprint : "<<endl;
	// postorderprint(root);

	// cout<<endl;


	// cout<<"count of nodes : "<<countofnodes(root)<<endl;



	// cout<<"sum of nodes : "<<sumofnodes(root)<<endl;

	// cout<<"height of tree is : "<<height(root)<<endl;

	// // cout<<"diameter of tree is : "<<diameter(root)<<endl;


	// Pair Q=fastdiameter(root);//6 4

	// cout<<"diameter of tree is : "<<Q.diameter<<endl;
	// cout<<"height of tree is : "<<Q.height<<endl;


	cout<<"mirror se pehle "<<endl;

	printlevel(root);

	cout<<endl;
	mirror(root);

	cout<<"preorderprint : "<<endl;
	// preorderprint(root);
	// cout<<endl;

	cout<<"mirror k baad  "<<endl;
	printlevel(root);











	return 0;
}