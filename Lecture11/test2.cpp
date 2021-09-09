#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int arr[]={5,4,3,2,1,6,8,4};
	int n=sizeof(arr)/sizeof(int);//5

	cout<<"Before sorting"<<endl;


	int *ptr=arr;


	cout<<arr+1<<endl;

	cout<<++(*(ptr))<<endl;
	// cout<<pt<<endl;//


	cout<<ptr<<endl;

	



	return 0;
}