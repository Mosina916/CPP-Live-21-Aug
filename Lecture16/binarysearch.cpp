#include<iostream>
using namespace std;
int binarysearchrec(int *arr,int s,int e,int key){
	// base case //stop condition
	if(s>e){
		return -1;
	}


	// recursive case
	int mid=(s+e)/2;//2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key>arr[mid]){
		return binarysearchrec(arr,mid+1,e,key);
	}
	else{
		return binarysearchrec(arr,s,mid-1,key);
	}


}

int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//4

	cout<<binarysearchrec(arr,0,n-1,key)<<endl;

	

	

	return 0;
}