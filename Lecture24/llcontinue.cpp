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



void deleteatfront(node*&head,node*&tail){
	// 1 case ll is empty
	if(head==NULL){
		return;
	}

	// single node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}


	// many nodes in ll

	else{
		node*n=head;
		head=head->next;
		delete n;
	}
}


void deleteatend(node*&head,node*&tail){
	// 1 case ll is empty
	if(head==NULL){
		return;
	}

	// single node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}

	// multiple nodes
	else{
		node*temp=head;

		// loop
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		temp->next=NULL;
		tail=temp;
		
	}

}


bool searchitertively(node*&head,node*&tail,int key){
	node*temp=head;

// loop
	while(temp!=NULL){
		if(temp->data==key){
		return true;
	}
	temp=temp->next;


	}
	return false;


}



node* midpoint(node*head){
	if(head==NULL){
		return NULL;
	}

	node*slow=head;
	// node*fast=head;

	node*fast=head->next;

	while(fast->next!=NULL&&fast!=NULL){//segmentation fault
		fast=fast->next->next;//NULL 
		slow=slow->next;

	}
	return slow;

}

void reversell(node*&head,node*&tail){
	// tail=head;
	node*previous=NULL;
	node*current=head;
	node*n;

//LOOP
	while(current!=NULL){
		n=current->next;
	current->next=previous;
	previous=current;
	current=n;


	}
	head=previous;
	

}



// search recursively

bool searchrec(node*&head,int key){
	// base case
	if(head==NULL){
		return false;
	}



	// recursive case

	if(head->data==key){
		return true;
	}
	return searchrec(head->next,key);

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

	insertionathead(head,tail,180);

	insertionathead(head,tail,510);
	insertionathead(head,tail,530);


	printll(head);//530 510 180 30 50 80

	reversell(head,tail);
	printll(head);



	// node*m=midpoint(head);

	// cout<<"mid point data is "<<m->data<<endl;

	// // deleteatfront(head,tail);
	// // deleteatfront(head,tail);
	// // deleteatend(head,tail);

	// // if(searchitertively(head,tail,50)){
	// // 	cout<<"yes the element is present"<<endl;
	// // }
	// // else{
	// // 	cout<<"no the element is present"<<endl;

	// // }


	// if(searchrec(head,450)){
	// 	cout<<"yes the element is present"<<endl;
	// }
	// else{
	// 	cout<<"no the element is not present"<<endl;

	// }
	// // printll(head);// 180 30 50


	// printll(head);



// 	insertattail(head,tail,70);
// 	insertattail(head,tail,500);


// 	printll(head);

// 	int pos;
// 	cin>>pos;//

// 	insertatanypost(head,tail,65,pos);

// 	printll(head);


// cout<<"Length of ll is "<<lenrec(head)<<endl;
// 	// n1+n2;





 

	return 0;
}