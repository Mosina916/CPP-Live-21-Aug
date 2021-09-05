#include<iostream>
#include<climits>
using namespace std;
int main(){

	int arr[]={5,4,27,3,35,35};


	int tb=sizeof(arr)/sizeof(int); //16/4-->4


	int largest=INT_MIN;

	for(int i=0;i<=tb-1;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}


	cout<<"largest value "<<largest<<endl;


	// int largest=arr[0];
	// for(int i=1;i<=3;i++){
	// 	if(arr[i]>largest){
	// 		largest=arr[i]; //7
	// 	}

	// }


	// cout<<"largest value "<<largest<<endl;


	// int arr[]={5,4,27};


	int arr[100];
	int n;
	cin>>n; //5

	// input in array

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	// arr-->4 7 3 8 90


	int smallest=INT_MAX;

	for(int i=0;i<n;i++){ //1
		if(arr[i]<smallest){
			smallest=arr[i];

		}
	}
	cout<<"smallest value "<<smallest<<endl;










	return 0;
}