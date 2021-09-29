#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int i,int j){
	// 5
	// 5 4 3 2 1
	// i-->0,j-->0


	// base case
	if(i==n-1){ //0==4
		return;
	}



	// recursive case
	// 5 4 3 2 1
	if(j==n-1-i){//0==5-1-0-->4
		bubblesortrec(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
			

				swap(arr[j],arr[j+1]);

			}
			// 4 5 3 2 1-->4 3 5 2 1-->4 3 2 5 1-->4 3 2 1 5
			bubblesortrec(arr,n,i,j+1);


	}


	


	
		
		


}
int main(){
	int arr[]={4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesortrec(arr,n,0,0);

	for (int i = 0; i <4; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}