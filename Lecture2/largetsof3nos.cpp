// three nos different from each other
#include<iostream>
using namespace std;
int main(){

	int a,b,c; //6 5 4
	cin>>a>>b>>c;

	if(a>b and a>c){
		cout<<"a is largest"<<endl;

	}
	else if(b>a and b>c){
		cout<<"b is largest"<<endl;

	}
	else{
		cout<<"c is largest"<<endl;
	}



	
	return 0;
}