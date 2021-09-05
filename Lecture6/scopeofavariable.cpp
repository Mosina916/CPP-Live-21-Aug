#include<iostream>
using namespace std;

// gloabal variable
int r=70;


int main(){
	// local variables
	int r=69;
	int x=5;
	int y=10;

	// int z;
	
	cout<<y<<endl; //10
	cout<<x<<endl; //5


	// ==============
	if(x<10){
		int z=80;
		int y=40;
		// int y=80;
		cout<<y<<endl; //40
		cout<<x<<endl; //5

	
	}
	// cout<<z<<endl;

	if(x==5){
		int r=3405;
		int u=80; //lv
		cout<<u<<endl; //80
		cout<<y<<endl; //10
		cout<<::r<<endl; //70 //scope resolution operator ::
	}

	// while(){
	// 	int u=23;

	// }

	// for(){

	// }
	// ==============

	cout<<y<<endl; //10
	cout<<x<<endl; //5
	



	return 0;
}