#include<iostream>
using namespace std;
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


	// wave print

	for(int colno=0;colno<=cols-1;colno++){
		if(colno%2==0){
			// col no is even
			// top to bottom  print
			for(int rowno=0;rowno<=rows-1;rowno++){
				cout<<arr[rowno][colno]<<" ";

			}
		}
		else{
			// colno is odd
			// buttom to top print
			for(int rowno=rows-1;rowno>=0;rowno--){
				cout<<arr[rowno][colno]<<" ";

			}
		}

	}


	cout<<endl;
	




	return 0;
}