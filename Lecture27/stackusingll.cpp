#include<iostream>
#include<vector>
using namespace std;


class node{
public:
	// int data;
	char data;
	node*next;//self refrential class
	// constructor
	// node(int d){
	node(char d){
		data=d;
		next=NULL;
	}
};



// implement with the help of ll
class Stack{
	node*head;
	int len;


public:
	// constructor
	Stack(){
		head=NULL;
		len=0;
	}


	// push
	// void push(int d){//20
		void push(char d){//20
		node*n=new node(d);
		n->next=head;
		head=n;
		len++;


	}


	// pop
	void pop(){
		// agar ll empty hai
		if(head==NULL){
			return;
		}
		// single noded

		else if(head->next==NULL){
			delete head;
			head=NULL;
			len--;
		}
		// muliple nodes
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;

		}



	}



	// top
	// int top(){
	char top(){
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

	// Stack s;


	// // Stack s;


	// s.push(10);//10
	// s.push(20);//20 10
	// s.push(65);////65 20 10
	// s.push(75);
	// s.push(15);
	// s.push(61);


	Stack s;


	// Stack s;


		s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	while(!s.empty()){
		cout<<s.top()<<" ";//61 15 ...10

	s.pop();

	}
// 	// cout<<s.v[3]<<endl;
// 	s.push('A');
// 	s.push('B');
// 	s.push('C');
// 	s.push('D');

// // loop
// 	while(!s.empty()){
// 		cout<<s.top()<<" ";//D C B A

// 	s.pop();

// 	}


	// s.push(7.89);


	cout<<endl;



	return 0;
	






	





}