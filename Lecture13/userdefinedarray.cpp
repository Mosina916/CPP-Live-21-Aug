#include<iostream>
using namespace std;
int main(){


	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 3

	// input array

	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}
	

	}


// print


	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cout<<arr[i][j]<<" ";
	}


	cout<<endl;

	}
	cout<<endl;
	















	return 0;
}