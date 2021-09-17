#include<iostream>
#include<algorithm>
using namespace std;

int main(){


	// 1 3 5 7 9

	// 2 4 6 8 10

	// 1 3 5 7 9 2 4 6 8 10

	// 1 2 3 4 5 6 7 8 9 10

	int arr[1000000];//10^6

	int n;
	cin>>n; //5

	int i;


	for (i = 0; i < n; ++i)//5
	{
		cin>>arr[i];
	}

	// 1 3 5 7 9


	//loop se bahar--> i-->5
	for (;i <2*n; ++i)
	{
		cin>>arr[i];
	}


	int b[5]={5,3,6,7,2};
	sort(b,b+5);

	// 2 3 5 6 7

	//inbuild
	sort(arr,arr+2*n);


	cout<<arr[n-1]<<endl;
	

	return 0;
}