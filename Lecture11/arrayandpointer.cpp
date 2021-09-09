#include<iostream>
using namespace std;

int main(){

	int arr[]={5,6,3,9,2};
	int n=sizeof(arr)/sizeof(int);

	// // print array
	for (int i = 0; i < n; ++i)
	{
		cout<<*(arr+i)<<" "<<arr[i]<<endl;
	}

	cout<<endl;



	// cout<<arr<<endl;//pointer-->internal pointer
	// cout<<arr+1<<endl;

	// cout<<&arr[0]<<endl;

	// arr is same as &arr[0]






	return 0;
}