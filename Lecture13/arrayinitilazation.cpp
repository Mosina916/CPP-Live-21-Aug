#include<iostream>
using namespace std;
int main(){


	// 1st way of initi;ization-->integer array

	// syntax

	// datatype arrayname[no of rows][no of cols];


	// int arr[4][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12},
	// 	{13,14,15,16}



	// };

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;



	// 2nd way
	// ignore the no of rows


	// int arr[][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12},
	// 	{13,14,15,16}



	// };

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;



	// char 2d array

	// char ch[3][3]={
	// 	{'A','B','C'},
	// 	{'D','E','F'},
	// 	{'G','H','I'},


	// };


	// cout<<ch[0]<<endl;//ABCDEFGHIe
	// cout<<ch[1]<<endl;// DEFGHIe
	// cout<<ch[2]<<endl;//GHIe


	// char ch2[3][3]={
	// 	{'a','B','C'},
	// 	{'d','e','F'},
	// 	{'g','H','I'},


	// };


	// cout<<ch2[0]<<endl;//aBCdeFgHIABCDEFGHIe
	// cout<<ch2[1]<<endl;//deFgHIABCDEFGHIe 
	// cout<<ch2[2]<<endl;//gHIABCDEFGHIe


	// char ch[3][4]={
	// 	{'A','B','C','\0'},
	// 	{'D','E','F','\0'},
	// 	{'G','H','I','\0'}


	// };


	// cout<<ch[0]<<endl;//
	// cout<<ch[1]<<endl;// 
	// cout<<ch[2]<<endl;//


	int arr[][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}

	};


	// first row-->0

	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
		cout<<arr[i][j]<<" ";
	}


	cout<<endl;

	}
	cout<<endl;
	
	// cout<<arr[0][0]<<" ";
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<" ";




	// // 2nd row-->1
	// cout<<arr[1][0]<<" ";
	// cout<<arr[1][1]<<" ";
	// cout<<arr[1][2]<<" ";


	// // 3rd row-->2
	// cout<<arr[2][0]<<" ";
	// cout<<arr[2][1]<<" ";
	// cout<<arr[2][2]<<" ";

	// cout<<arr[0]<<endl;//0x7ffee1dea8f0
	// cout<<arr[1]<<endl;//0x7ffee1dea8fc
	// cout<<arr[2]<<endl;//0x7ffee1dea908

	// int arr[3][]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}

	// };



	// 3rd way

	char arr3[][7]={
		"cod",
		"blocks",
		"hello"
	};


	cout<<arr3[0]<<endl;//0x7ffee1dea8f0
	cout<<arr3[1]<<endl;//0x7ffee1dea8fc
	cout<<arr3[2]<<endl;//0x7ff














	return 0;
}