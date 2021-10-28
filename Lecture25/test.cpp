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


node* mergetwosortedll(node*&head1,node*&head2){
	// if ist ll empty
	if(head1==NULL){
		return head2;
	}

	// if 2nd ll is empty
	if(head2==NULL){
		return head1;
	}
	node*newhead;
	if(head1->data<head2->data){
		newhead=head1;
		node*c=mergetwosortedll(head1->next,head2);
		newhead->next=c;
	}
	else{
		newhead=head2;
		node*d=mergetwosortedll(head1,head2->next);
		newhead->next=d;
	}


	return newhead;

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

	while(fast!=NULL&&fast->next!=NULL){//segmentation fault
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


bool iscyclic(node*head){
	node*slow=head;
	node*fast=head;


	// loop
	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		}

	}
	return false;

}


node* mergesortonll(node*head){
	// base case
	if(head==NULL||head->next==NULL){
		return head;
	}

	// recursive case

	//  divide at mid
	node*m=midpoint(head);
	node*b=head;
	node*c=m->next;
	m->next=NULL;

	b=mergesortonll(b);
	c=mergesortonll(c);
	node*newh=mergetwosortedll(b,c);
	return newh;



}

void createcycle(node*head){
	node*temp=head;

	while(temp->next!=NULL){
		temp=temp->next;

	}
	temp->next=head->next->next;
	

}



void breakcycle(node*&head){

	// to check if the ll is cyclic or not
	// ==========================================
	node*slow=head;
	node*fast=head;


	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;
		}
	}
// ==========================================

	slow=head;

	node*prev=head;


	while(prev->next!=fast){
			prev=prev->next;

	}


	while(slow!=fast){
		prev=fast;

		slow=slow->next;
		fast=fast->next;
	}


	prev->next=NULL;






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


	// node*head=NULL;////ll is empty
	// node*tail=NULL;//ll is empty
	// insertionathead(head,tail,80);

	// insertionathead(head,tail,50);
	// insertionathead(head,tail,30);

	// insertionathead(head,tail,180);

	// insertionathead(head,tail,510);
	// insertionathead(head,tail,530);


	// printll(head);//530 510 180 30 50 80

	// reversell(head,tail);
	// printll(head);


	node*head1=NULL;
	node*tail1=NULL;


	// node*head2=NULL;
	// node*tail2=NULL;

	insertionathead(head1,tail1,8);
	insertionathead(head1,tail1,7); 
	insertionathead(head1,tail1,6);
	insertionathead(head1,tail1,5);
	insertionathead(head1,tail1,4);
	insertionathead(head1,tail1,3); 
	insertionathead(head1,tail1,2);  
	insertionathead(head1,tail1,1); //1 2 3 4 5 6 7 8


	printll(head1);

	// node*newhead=mergesortonll(head1);
	// printll(newhead);//1 2 4 5 8 9

	if(iscyclic(head1)){
		cout<<"yes the ll is cyclic"<<endl;
	}
	else{
			cout<<"No the ll is not cyclic"<<endl;

	}

	createcycle(head1);


	if(iscyclic(head1)){
		cout<<"yes the ll is cyclic"<<endl;
	}
	else{
			cout<<"No the ll is not cyclic"<<endl;

	}

	breakcycle(head1);


	printll(head1);











	// insertionathead(head2,tail2,7);
	// insertionathead(head2,tail2,6);
	// insertionathead(head2,tail2,3);
	// insertionathead(head2,tail2,2);

	// printll(head2);

	// node*newhead=mergetwosortedll(head1,head2);

	// printll(newhead);









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