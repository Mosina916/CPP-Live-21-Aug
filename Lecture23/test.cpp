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
	node*temp=head;

// loop
	while(temp!=NULL){
			cout<<temp->data<<"--> ";//30 50 80
			temp=temp->next;

	}

	cout<<endl;


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

	printll(head);

	// n1+n2;





 

	return 0;
}