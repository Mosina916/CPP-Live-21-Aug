#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int f;
	int e;
	int cs;
	int n;

	// int arr[n]

public:
	// constructor
	Queue(int s=5){
		arr=new int[s];
		f=0;//0
		n=s;//5
		e=s-1;//4
		cs=0;

	}
	
	// push
	void push(int d){
		if(cs<n){
			e=(e+1)%n;//4+1%5-->0
			arr[e]=d;
			cs++;

		}
		else{
			cout<<"array is already filled-->overflow"<<endl;

		}

		
	}

	
	// pop
	void pop(){
		if(cs>0){
			f=(f+1)%n;//1
		cs--;

		}
		else{
			cout<<"queue is empty -->underflow"<<endl;
		}

		
	}

	


	// front
	int front(){
		return arr[f];
	}
	

	// size
	int size(){
		return cs;
	}
	


	// empty
	bool empty(){
		if(cs==0){
			return true;
		}
		else{
			return false;
		}
	}
	

};
int main(){

	Queue q(7);

	q.push(2);
	q.push(4);
	q.push(6);
	// q.pop();
	q.push(1);
	q.push(3);
	q.push(5);
	q.push(6);

	while(!q.empty()){
		cout<<q.front()<<" ";//2
	q.pop();

	}
	cout<<endl;
	




	return 0;
}