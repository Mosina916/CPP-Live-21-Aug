#include<iostream>
#include<cmath>
using namespace std;

int binarysearch(int arr[],int n,int key){

	int s=0;
	int e=n-1;
// phirse aayega
	while(s<=e){

		int mid=(s+e)/2;//3

	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		s=mid+1;

	}
	else{
		e=mid-1;

	}


	}
	return -1;

	


}


int main(){
	int arr[]={1,2,4,5,7};
	int n=sizeof(arr)/sizeof(int);//5
	int key;
	cin>>key;//5-->index-->3

	cout<<"key is present at index "<<binarysearch(arr,n,key)<<endl;










	return 0;
}