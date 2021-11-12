#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int>q1;
	queue<int>q2;
public:
	// push
	void push(int d){//56
		if(q1.empty()&&q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty()&&q2.empty()){
			q1.push(d);
		}
		// 
		else{
			q2.push(d);

		}
		// 
	}
	// pop
	void pop(){
		if(!q1.empty()&&q2.empty()){
			// loop
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();

			}
			q1.pop();

			
		}
		else if(q1.empty()&&!q2.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();

			}
			q2.pop();

			
		}
		else{
			cout<<"element can't be popped-->underflow"<<endl;
		}

	}


	// top
	int top(){


		if(!q1.empty()&&q2.empty()){
			// loop
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();

			}
			int top=q1.front();//2
			q2.push(q1.front());

			q1.pop();
			return top;

			
		}
		else if(q1.empty()&&!q2.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();

			}
			int top=q2.front();//7
			q1.push(q2.front());

			q2.pop();
			return top;

			
		}
		else{
			cout<<"element can't be popped-->underflow"<<endl;
		}


	}

	// size
	int size(){
		if(!q1.empty()){
			return q1.size();
		}
		else if(!q2.empty()){
			return q2.size();


		}
		else{
			return 0;

		}
	}



	// empty
	bool empty(){
		if(q1.empty()&&q2.empty()){
			return true;
		}
		else{
			return false;
		}
	}




};
int main(){
	Stack s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(2);
	s.pop();
	s.push(56);
	s.pop();

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;




	return 0;
}