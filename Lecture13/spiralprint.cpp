#include<iostream>
using namespace std;

void spiralprint(int arr[][100],int rows,int cols){//

	// rows-->4,cols-->4
	int sc=0,ec=cols-1,sr=0,er=rows-1;


	// loop

	while(sr<=er&&sc<=ec){



		// pehle row k lye
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";

	}
	sr++;//1

	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;


	// last row

	for(int i=ec;i>=sc;i--){
		cout<<arr[er][i]<<" ";
	}
	er--;


	// ist col

	for(int j=er;j>=sr;j--){
		cout<<arr[j][sc]<<" ";
	}

	sc++;

	}


}
int main(){


	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//4 4 

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


	spiralprint(arr,rows,cols);


	

	return 0;
}