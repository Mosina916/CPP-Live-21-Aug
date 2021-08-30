#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no; //13-->1101&1
	int cou=0;


	// no=no/2; //no=no>>1


	while(no>0){

	if((no&1)==1){
		// last digit will be 1
		cou++;

	}
	no=no>>1;//1101>>1-->110>>1-->11>>1-->1>>1-->0


	}

	cout<<"Set bits : "<<cou<<endl;















}