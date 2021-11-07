#include<iostream>
#include<vector>
using namespace std;

template<typename U>

class Stack{
	// by default ye private
	vector<U>v;
	


public:
	

	// push
	void push(U d){
		v.push_back(d);
	}




	// pop
	void pop(){
		v.pop_back();
	}



	// top
	U top(){
		return v[v.size()-1];
	}



	// size
	int size(){
		return v.size();
	}


	// is empty or not
	bool empty(){
		if(v.size()==0){
			return true;
		}
		else{
			return false;
		}
	}

};


// class Stack{
// 	// by default ye private
// 	vector<char>v;
	


// public:
	

// 	// push
// 	void push(char d){
// 		v.push_back(d);
// 	}




// 	// pop
// 	void pop(){
// 		v.pop_back();
// 	}



// 	// top
// 	char top(){
// 		return v[v.size()-1];
// 	}



// 	// size
// 	int size(){
// 		return v.size();
// 	}


// 	// is empty or not
// 	bool empty(){
// 		if(v.size()==0){
// 			return true;
// 		}
// 		else{
// 			return false;
// 		}
// 	}

// };
int main(){

	// Stack<int>s;

	// s.push(10);
	// s.push(20);
	// s.push(65);
	// s.push(75);
	// s.push(15);
	// s.push(61);
	// while(!s.empty()){
	// 	cout<<s.top()<<" ";//61 15 ...10

	// s.pop();

	// }
// 	// cout<<s.v[3]<<endl;
	stack<char> s;

	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

// loop
	while(!s.empty()){
		cout<<s.top()<<" ";//D C B A

	s.pop();

	}

	stack <float> s;



	cout<<endl;



	return 0;
	






	





}