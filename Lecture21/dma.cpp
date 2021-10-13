#include<iostream>
using namespace std;
int main(){

	// variables 
	// int a-->static memory
	// a=10;
	int *aptr=new int;
	*aptr=10;


	cout<<*aptr<<endl;//10



	// float f;
	// f=80.19;


	float*fptr=new float;
	*fptr=80.19;


	cout<<*fptr<<endl;



	// arrays
	// // static 
	// int arr[100];
	// for(int i=0;i<5;i++){
	// 	cin>>arr[i];
	// }



	int*arrptr=new int[100];
	for(int i=0;i<5;i++){
		cin>>*(arrptr+i);
	}


	// print


	for (int i = 0; i <5; ++i)
	{
		cout<<*(arrptr+i)<<" ";
	}

	cout<<endl;



	// this is wrong


	// // int n;
	// cin>>n;
	// int arr[n];

	int n;
	cin>>n;

	int *arrptr=new int[n];


	// int a=10;



















// delete 


delete aptr;
aptr=NULL;


delete fptr;
fptr=NULL;


delete[] arrptr;

arrptr=NULL;






	

	return 0;
}