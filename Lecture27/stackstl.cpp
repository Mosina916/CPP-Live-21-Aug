#include<iostream>
#include<stack>//push pop top empty size
using namespace std;


int main(){

// 	stack<int>s;

// 	s.push(10);
// 	s.push(20);
// 	s.push(65);
// 	s.push(75);
// 	s.push(15);
// 	s.push(61);

	
// 	while(!s.empty()){
// 		cout<<s.size()<<endl;//6 5 4
// 		cout<<s.top()<<" ";//61 15 ...10

// 	s.pop();

// 	}
// // 	// cout<<s.v[3]<<endl;

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


	cout<<endl;



	return 0;
	






	





}