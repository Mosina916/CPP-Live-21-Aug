#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n; //5
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	// 5 4 3 2 1


	cout<<"Before sorting"<<endl;


	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	// bubble sort

	// 1 5 4 //n==3


	for(int iter=0;iter<=n-2;iter++){

		// iter-->1
		bool swc=0;

		// 1 2 3

		for(int j=0;j<=n-2-iter;j++){
			if(arr[j]>arr[j+1]){
				swc=1;

				// swap

				// 1 inbuild fumction

				swap(arr[j],arr[j+1]);

				// // 2nd way using extra variable
				// int temp=arr[j];
				// arr[j]=arr[j+1];
				// arr[j+1]=temp;






				// without using 3rd variable h/w
			}

		}




		//control comes here
		if(swc==0){
			break;

		}

	}







	cout<<"After sorting"<<endl;


	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;






	return 0;
}