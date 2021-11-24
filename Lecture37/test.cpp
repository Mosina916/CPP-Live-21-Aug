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
	cout<<root->data<<", ";//8 3 1
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
	cout<<root->data<<", ";//
	
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

// class Pair{
// public: 
// 	int diameter;
// 	int height;
// };

// Pair fastdiameter(node*root){
// 	Pair p;
// 	// base case
// 	if(root==NULL){
// 		p.diameter=0;
// 		p.height=0;
// 		return p;


// 	}

// 	// recursive case
// 	Pair x=fastdiameter(root->left);//0d,0h
// 	Pair y=fastdiameter(root->right);//2,3 
// 	p.height=max(x.height,y.height)+1;

// 	// p.diameter
// 	int op1=x.height+y.height;//agar root k through pass horaha hai

// 	int op2=x.diameter;
// 	int op3=y.diameter;

// 	p.diameter=max(op1,max(op3,op2));

// 	return p;

// }


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


node* buildleveltree(){
	node*root=NULL;
	int data;
	cout<<"Enter the data of root node"<<endl;
	cin>>data;//8

	if(data==-1){
		return NULL;
		// 
	}
	else{
		root=new node(data);//8
		queue<node*>q;
		q.push(root);
		// loop
		while(!q.empty()){
			node*x=q.front();//3-->500
		q.pop();
		cout<<"Enter the left and right child of "<<x->data<<endl;
		int leftchild;
		int rightchild;
		cin>>leftchild>>rightchild;//-1 14
		if(leftchild!=-1){
			
			x->left=new node(leftchild);//3
			q.push(x->left);


		}
		if(rightchild!=-1){
			
			x->right=new node(rightchild);//3
			q.push(x->right);


		}

		}
		return root;


	}

}



int pre[]={8, 3, 1, 6, 4, 7, 10, 14, 13};
int ino[]={1, 3, 4, 6, 7, 8, 10, 13, 14};
int i=0;

node* createtreeinpre(int s,int e){//0 8
	if(s>e){
		return NULL;
	}



	 int d=pre[i];//8
	 i++;//1
	 int k=-1;
	 node*root=new node(d);//8
	 for(int j=s;j<=e;j++){
	 	if(d==ino[j]){
	 		k=j;//5
	 		break;


	 	}

	 }
	 root->left=createtreeinpre(s,k-1);//3 2
	 root->right=createtreeinpre(k+1,e);
	 return root;


}
bool searchinbt(node*root,int key){
	if(root==NULL){
		return false;
	}


	// rucursive case

	if(root->data==key){
		return true;
	}
	else if(searchinbt(root->left,key)or searchinbt(root->right,key)){
		return true;
	}
	else{
		return false;
	}


}


node* insertinbst(node*root,int data){//NULL 10
	if(root==NULL){
		root=new node(data);
		return root;

	}
	if(data<=root->data){//3<=8
		root->left=insertinbst(root->left,data);

	}
	else{
		root->right=insertinbst(root->right,data);

	}
	return root;




}


// binary search tree
// 8 3 10 1 6 14 4 7 13 -1
node* Buildbstree(){
	node*root=NULL;
	int data;
	cin>>data;//8
	while(data!=-1){
		root=insertinbst(root,data);//8 10
		cin>>data;//10

	}

	return root;

}

bool searchinbst(node*root,int key){

	// base case
	if(root==NULL){
		return false;
	}

	// recursive case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);
	}

}
// range in sorted order
// void printinarange(node*root,int k1,int k2){ //6 13
// 	// base case
// 	if(root==NULL){
// 		return;
// 	}



// 	// recursive case
// 	printinarange(root->left,k1,k2);//lst--> 6 7
// 	if(root->data>=k1&&root->data<=k2){
// 		cout<<root->data<<" "; //8
// 	}
// 	printinarange(root->right,k1,k2);//10 13


// }

// range in reverse order
void printinarange(node*root,int k1,int k2){ //6 13
	// base case
	if(root==NULL){
		return;
	}



	// recursive case
		printinarange(root->right,k1,k2);//10 13
	
	if(root->data>=k1&&root->data<=k2){
		cout<<root->data<<" "; //8
	}
	printinarange(root->left,k1,k2);//lst--> 6 7



}


bool isbstornot(node*root,int min=INT_MIN,int max=INT_MAX){


	// base case
	if(root==NULL){
		return true;
	}



	// recursive case
	if((root->data>=min&&root->data<=max)&& isbstornot(root->left,min,root->data)&&isbstornot(root->right,root->data,max)){
		return true;

	}
	else{
		return false;

	}


}


class Pair{
public:
	int height;
	bool balanced;
	// constructor
	Pair(){
		height=0;
		balanced=true;
	}
};


Pair isheightbalanedornot(node*root){
	Pair p;
	// base case
	if(root==NULL){
		return p;
	}

	// recursive case
	Pair lst=isheightbalanedornot(root->left);
	Pair rst=isheightbalanedornot(root->right);
	p.height=max(lst.height,rst.height)+1;
	// p ki balance check larne k lye
	if(lst.balanced==true&&rst.balanced==true&& (abs(lst.height-rst.height)<=1)){
		p.balanced=true;

	}
	else{
		p.balanced=false;
	}

	return p;

}





class linkedlist{
public:
	node*head;
	node*tail;
	linkedlist(){
		head=NULL;
		tail=NULL;
	}

};


linkedlist bsttoll(node*root){
	linkedlist l;


	// base case
	if(root==NULL){

		return l;

	}



	// recursive case
	// case 1: no child exist 
	if(root->left==NULL&&root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;

	}


	// case 2: left child exist 
	else if(root->left!=NULL&&root->right==NULL){
		linkedlist lst=bsttoll(root->left);
		lst.tail->right=root;
		l.head=lst.head;
		l.tail=root;
		// return l;

	}


	// case 3: right child exist 
		else if(root->left==NULL&&root->right!=NULL){
			linkedlist rst=bsttoll(root->right);
			root->right=rst.head;
			l.head=root;
			l.tail=rst.tail;
			// return l;

	}
	// case 4: left and right child both exists
	else{
		linkedlist lst=bsttoll(root->left);
		linkedlist rst=bsttoll(root->right);
		lst.tail->right=root;
		root->right=rst.head;
		l.head=lst.head;
		l.tail=rst.tail;
		// return l;

	}
	return l;
}


void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->right;
	}
	cout<<"NULL"<<endl;
}

int arr[]={1,2,3,4,8,9,10};

node* sortedarraysebst(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}


	// recursive case
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);

	root->left=sortedarraysebst(s,mid-1);//lst
	root->right=sortedarraysebst(mid+1,e);//rst


	return root;




}


node* Deleteinbst(node*root,int key){
	// base case
	if(root==NULL){
		return NULL;
	}

	// recursive case
	// key is in lst
	if(key<root->data){

		root->left=Deleteinbst(root->left,key);
		return root;

	}

	// key is in rst
	else if(key>root->data){
		root->right=Deleteinbst(root->right,key);
		return root;
	}

	// agar mera root hi delete karna ho
	else{

		// root node is leaf node-->no child
		if(root->left==NULL&&root->right==NULL){
			delete root;
			return NULL;
		}

		// case 2 node 1 child

		// rc exist

		if(root->left==NULL&&root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;
		}

		// lc exist
		else if(root->left!=NULL&&root->right==NULL){
			node*temp=root->left;
			delete root;
			return temp;
		}


		// case 3 node 2 childeren 
		else{
			node*replace=root->right;//mujhe rst ka min chahiye

			while(replace->left!=NULL){//replace wala pointer will reach to min 
				replace=replace->left;

			}


			swap(replace->data,root->data);

			root->right=Deleteinbst(root->right,key);
			return root;


			// node*replace=root->right;//mujhe rst ka min chahiye


// replace max of lst

		// 		node*replace=root->left;//mujhe rst ka min chahiye
		// 	while(replace->right!=NULL){//replace wala pointer will reach to min 
		// 		replace=replace->right;

		// 	}


		// 	swap(replace->data,root->data);

		// 	root->left=Deleteinbst(root->left,key);
		// 	return root;
			

		}




	}



}




void rightview(node*root,int level,int &abhitakmaximumkisleveltakgayeho){

	// base case
	if(root==NULL){


		return;
	}



	// recursive case
	if(level>abhitakmaximumkisleveltakgayeho){//5>4
		cout<<root->data<<" ";//8 10 14 13 4
		abhitakmaximumkisleveltakgayeho=level;//5

	}


	rightview(root->right,level+1,abhitakmaximumkisleveltakgayeho);

	rightview(root->left,level+1,abhitakmaximumkisleveltakgayeho);



}



void leftview(node*root,int level,int &abhitakmaximumkisleveltakgayeho){

	// base case
	if(root==NULL){


		return;
	}

	// recursive case
	if(level>abhitakmaximumkisleveltakgayeho){//5>4
		cout<<root->data<<" ";//8 10 14 13 4
		abhitakmaximumkisleveltakgayeho=level;//5

	}


	// rightview(root->right,level+1,abhitakmaximumkisleveltakgayeho);

	leftview(root->left,level+1,abhitakmaximumkisleveltakgayeho);
	leftview(root->right,level+1,abhitakmaximumkisleveltakgayeho);



}

// input 


// 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
// 8 3 1 -1 -1 6 4 -1 -1 7 9 -1 -1 -1 10 -1 14 13 -1 -1 -1
int main(){

	// node*root=Buildtree();

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


	// cout<<"mirror se pehle "<<endl;

	// printlevel(root);

	// cout<<endl;
	// mirror(root);

	// cout<<"preorderprint : "<<endl;
	// // preorderprint(root);
	// // cout<<endl;

	// cout<<"mirror k baad  "<<endl;
	// printlevel(root);


	// node*root=buildleveltree();
	// printlevel(root);


	// preorderprint(root);
	// cout<<endl;
	// inorderprint(root);

	// int n=sizeof(pre)/sizeof(int);



	// node*root=createtreeinpre(0,n-1);
	// printlevel(root);


	// if(searchinbt(root,90)){
	// 	cout<<"yes exists"<<endl;

	// }
	// else{
	// 	cout<<"Doesn't exist"<<endl;

	// }


	node*root=Buildbstree();
	printlevel(root);


	// if(searchinbt(root,476)){
	// 	cout<<"yes exists"<<endl;

	// }
	// else{
	// 	cout<<"Doesn't exist"<<endl;

	// }

	// printinarange(root,6,13);

	// if(isbstornot(root)){
	// 	cout<<"yes it is a bst"<<endl;

	// }
	// else{
	// 	cout<<"No it is not a bst"<<endl;
	// }


	// Pair l=isheightbalanedornot(root);
	// if(l.balanced){
	// 	cout<<"yes balanced "<<endl;

	// }
	// else{
	// 	cout<<"Not balanced "<<endl;
	// }


	// linkedlist x=bsttoll(root);
	// printll(x.head);


	// int n=sizeof(arr)/sizeof(int);
	// node*root=sortedarraysebst(0,n-1);
	// printlevel(root);

	// root=Deleteinbst(root,3);
	// printlevel(root);
	// root=Deleteinbst(root,10);

	// printlevel(root);


	root=Deleteinbst(root,365);

	printlevel(root);

int abhitakmaximumkisleveltakgayeho=0;
	rightview(root,1,abhitakmaximumkisleveltakgayeho);




	cout<<endl;


abhitakmaximumkisleveltakgayeho=0;
	leftview(root,1,abhitakmaximumkisleveltakgayeho);












	return 0;
}