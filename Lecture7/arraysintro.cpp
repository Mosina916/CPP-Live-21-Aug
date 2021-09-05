#include<iostream>
using namespace std;
int main(){

	// int s1=70,s2=40,s3=20,s4=49,s5=80;

	// cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;

	// int s1=30,s2=70,...........,s100=45;
	// Arrays-->same type variables
	// styntax-->
	// datatype nameofarr[size of array];


	// initilization

	// 1st way

	// int arr[5]={70,40,20,49,80}; //5


	// print arrayname[index];


	// cout<<arr[0]<<" ";
	// cout<<arr[1]<<" ";
	// cout<<arr[2]<<" ";
	// cout<<arr[3]<<" ";
	// cout<<arr[4]<<" ";



	// for(int i=0;i<5;i++){
	// 	cout<<arr[i]<<" ";
	// }

	//2nd way-->skip the size of array


	// int arr[]={70,40,20,49,80}; //5


	// for(int i=0;i<5;i++){
	// 	cout<<arr[i]<<" ";
	// }



	// int a[10000];
	// int b[30];


	// 3rd way

	// int b[100];
	// // int n;
	// // cin>>n; //5


	// b[0]=70;
	// b[1]=44;
	// b[2]=90;
	// b[3]=41;
	// b[4]=80;



	// for(int i=0;i<5;i++){
	// 	cout<<b[i]<<" ";
	// }

	// 4th way

	// int b[100];
	// int n;
	// cin>>n; //5


	// b[0]=70;
	// b[1]=44;
	// b[2]=90;
	// b[3]=41;
	// b[4]=80;

	// for(int i=0;i<=4;i++){
	// 	cin>>b[i]; //b[0]=98
	// }



	// for(int i=0;i<5;i++){
	// 	cout<<b[i]<<" ";
	// }



	// int c[0];
	// cout<<c[0]<<" "


	// int c[50];
	// for(int i=0;i<4;i++){
	// 	cin>>c[i]; //68 39 28 50
	// }


	// wrong
	// int n;
	// cin>>n;//4 //10
	// int d[n];



	// long long int arr[10]



	// int arr[10]={0,4,7,3,6,5};
		// int arr[10];
		int arr[10]={0}; //whole array will get initilized with 0


	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}




	int g[]={3,4,2,5,6,1,7,8,45,3,6,9,0,1,3};


	// int g[]={3,4,2};




	// int size;?????


	int tb=sizeof(g)/sizeof(int); //15


	// print


	for(int i=0;i<tb;i++){
		cout<<g[i]<<" ";
	}






	return 0;
}