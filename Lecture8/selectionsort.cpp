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



	// selection sort
	for(int pos=0;pos<=n-2;pos++){
		int min=pos;

		for(int j=pos+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;

			}
		}
		swap(arr[pos],arr[min]);

	}


	cout<<"After sorting"<<endl;


	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;






	return 0;
}