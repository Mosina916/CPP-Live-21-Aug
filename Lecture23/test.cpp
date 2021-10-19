#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	// constructor
	node(int d){
		data=d;
		next=NULL;

	}



};

void insertionathead(node*&head,node*&tail,int data){
	// create node
	node*n=new node(data);
	// 1 . ll is empty-->head is NULL
	if(head==NULL){
		head=tail=n;

	}

	//  2 ll is not empty
	else{
		n->next=head;
		head=n;


	}

}




void printll(node*head){
// 	node*temp=head;

// // loop
// 	while(temp!=NULL){
// 			cout<<temp->data;//30-->50-->80-->
// 			temp=temp->next;

// 	}

// 	cout<<endl;



// LOOP
	while(head!=NULL){
		cout<<head->data<<"--> ";//30 50 80
	head=head->next;



	}
	cout<<endl;
	


}


void insertattail(node*&head,node*&tail,int data){
	node*n=new node(data);

	// 1 ll empty
	if(head==NULL){
		head=tail=n;
	}

	// 2. ll is not empty

	else{
		tail->next=n;
		tail=n;
	}

}
int length(node*head){
	int cnt=0;
	node*temp=head;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}


	return cnt;

}


int lenrec(node*head){

	// base case
	if(head==NULL){
		return 0;
	}


	// recusrive 

	return 1+lenrec(head->next);

}

void insertatanypost(node*&head,node*&tail,int data,int pos){

	if(pos==0){
		insertionathead(head,tail,data);
	}
	else if(pos>=length(head)){
		insertattail(head,tail,data);

	}
	else{
		node*n=new node(data);
		node*temp=head;

		for(int jump=1;jump<pos;jump++){
			temp=temp->next;
		}







		n->next=temp->next;
		temp->next=n;
	}


}
int main(){
	// int a=10;
	// int *aptr=&a;
	// cout<<*aptr<<endl;

	// // int x;
	// // datatype variable name
	// node n1(20);
	// node n2(35);
	// n1.next=&n2;

	// // cout<<n1.data<<" "<<n2.data<<endl;
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
	// cout<<n1.data<<" "<<(n1.next)->data<<endl;


	node*head=NULL;////ll is empty
	node*tail=NULL;//ll is empty
	insertionathead(head,tail,80);

	insertionathead(head,tail,50);
	insertionathead(head,tail,30);


	printll(head);

	// printll(head);



	insertattail(head,tail,70);
	insertattail(head,tail,500);


	printll(head);

	int pos;
	cin>>pos;//

	insertatanypost(head,tail,65,pos);

	printll(head);


cout<<"Length of ll is "<<lenrec(head)<<endl;
	// n1+n2;





 

	return 0;
}