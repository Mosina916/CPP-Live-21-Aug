#include<iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){
	// base case
	if(n==1){
		return true;

	}


	// recursive case
	if(arr[0]<=arr[1]&&isarraysortedornot(arr+1,n-1)){
		return true;

	}

	return false;


	// T
}

bool isarraysortedornot2(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}





	// recursive case
	if(arr[n-2]<=arr[n-1]&&isarraysortedornot2(arr,n-1)){
		return true;
	}


	return false;
}



bool isarraysortedornot3(int *arr,int n,int i){

	// base case
	if(i==n-1){
		return true;
	}


	// recursive case
	if(arr[i]<=arr[i+1]&&isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	return false;

}


int main(){

	int arr[]={1,2,5,7,9};//s
	// int arr[]={6,3,5,7,9};//NS
	int n=sizeof(arr)/sizeof(int);

	// if(isarraysortedornot(arr,n)){

	// 	cout<<"yes sorted"<<endl;

	// }
	// else{
	// 	cout<<"Not sorted"<<endl;

	// }


	// if(isarraysortedornot2(arr,n)){

	// 	cout<<"yes sorted"<<endl;

	// }
	// else{
	// 	cout<<"Not sorted"<<endl;

	// }



	if(isarraysortedornot3(arr,n,0)){

		cout<<"yes sorted"<<endl;

	}
	else{
		cout<<"Not sorted"<<endl;

	}

	

	
	return 0;//terminate successfully
}