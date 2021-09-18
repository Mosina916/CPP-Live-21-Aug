#include<iostream>
using namespace std;

void formmatrixOandX(char arr[][100],int rows,int cols){//

	// rows-->4,cols-->4
	int sc=0,ec=cols-1,sr=0,er=rows-1;
	char ch='X';


	// loop

	while(sr<=er&&sc<=ec){



		// pehle row k lye
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;

	}
	sr++;//1

	// last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;


	// last row

	for(int i=ec;i>=sc;i--){
		arr[er][i]=ch;
	}
	er--;


	// ist col

	for(int j=er;j>=sr;j--){
		arr[j][sc]=ch;
	}

	sc++;

	if(ch=='X'){
		ch='O';
	}
	else{

		ch='X';
	}


	}


}
int main(){


	char arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//4 4 

	// input array




	formmatrixOandX(arr,rows,cols);



	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cout<<arr[i][j]<<" ";
	}


	cout<<endl;

	}
	cout<<endl;



	

	return 0;
}