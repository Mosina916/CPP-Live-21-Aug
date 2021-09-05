#include <iostream>
using namespace std;
// 
void updatearr(int a[],int tb){

	for(int i=0;i<=tb-1;i++){
		a[i]=a[i]+2;

	}

}

int main(){

	int arr[5]={4,5,3,6,7};// +2
	int tb=sizeof(arr)/sizeof(int);


	cout<<"Before updation :"<<endl;


	for (int i = 0; i <tb; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	updatearr(arr,tb);


	cout<<"After updation :"<<endl;


	for (int i = 0; i <tb; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	

	return 0;

}





