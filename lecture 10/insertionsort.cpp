#include<iostream>
#include<cmath>
using namespace std;
// 4 5 6 3 2
void insertionsort(int arr[],int n){
	int i,j;
	for(i=1;i<n;i++){
	int curr=arr[i];//6//kis element ko apni jagah position karna hai
	for(j=i-1;j>=0 &&arr[j]>curr;j--){
		arr[j+1]=arr[j];

	}
	arr[j+1]=curr;

	}

	
	

}

int main(){
	int arr[]={5,4,3,2,1,6,8,4};
	int n=sizeof(arr)/sizeof(int);//5

	cout<<"Before sorting"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	insertionsort(arr,n);

	cout<<"After sorting"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	return 0;
}