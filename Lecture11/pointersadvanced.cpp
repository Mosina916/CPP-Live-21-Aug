#include<iostream>
using namespace std;
int main(){

	// pointers should always get initilized

	int rad=10;
	// int* radptr=&rad;
	// int* radptr;
	// int* radptr=NULL;
	int* radptr=0;


	

	// cout<<"circumfrence : "<<2*3.14*rad<<endl;//62.8

	int ans=2*3.14*(*radptr);//0
	cout<<"circumfrence : "<<ans<<endl;//0










	return 0;
}