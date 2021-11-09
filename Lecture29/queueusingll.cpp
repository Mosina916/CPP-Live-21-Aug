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

class Queue{
	node*head;
	node*tail;
	int len;
public:
	Queue(){
		head=NULL;
		tail=NULL;
		len=0;
	}

	// push
	void push(int d){
		node*n=new node(d);
		// queue empty
		if(head==NULL){
			head=tail=n;
			len++;

		}
		// queue empty nahi
		else{
			tail->next=n;
			tail=n;
			len++;

		}

	}


	// pop

	void pop(){
		// queue empty
		if(head==NULL){
			return;

		}
		// one npode
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
			len--;
		}
		// multiple nodes

		else{
			node*temp=head;
			head=head->next;
			delete temp;
			// temp=NULL;
			len--;

		}
	}


	// front
	int front(){
		return head->data;
	}


	// size
	int size(){
		return len;
	}


	// empty
	bool empty(){
		if(head==NULL){
			return true;
		}
		else{
			return false;
		}
	}

};
int main(){

	Queue q;

	q.push(2);
	q.push(4);
	q.push(6);
	q.push(1);
	q.push(3);
	q.push(5);

	while(!q.empty()){
		cout<<q.front()<<" ";//2
	q.pop();

	}
	cout<<endl;
	





	return 0;
}