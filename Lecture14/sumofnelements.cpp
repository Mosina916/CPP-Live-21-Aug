#include<iostream>
using namespace std;
int sumofarray(int arr[],int n){

	// base case
	if(n==1){
		return arr[0];
	}



	// recursive case
	return arr[0]+sumofarray(arr+1,n-1);//14

}


int sumofarray2(int arr[],int n){

	// base case
	// if(n==1){
	// 	return arr[0];
	// }


	if(n==0){
		return 0;
	}
	

	// recursive case
	return sumofarray2(arr,n-1)+arr[n-1];//14

}




int main(){

	int arr[]={1,2,5,7,9};//s
	// int arr[]={6,3,5,7,9};//NS
	int n=sizeof(arr)/sizeof(int);

	cout<<"sum of elements is "<<sumofarray(arr,n)<<endl;

	

	
	return 0;//terminate successfully
}