#include<iostream>
using namespace std;
// #define pi 3.14+1
#define pi (3.14+1) //micros 

int main(){

	int no;
	int c=0;
	cin>>no;
	while(no>0){
		c=c+1;
		no=no/10;
	}

	cout<<c<<endl;





	return 0;
}