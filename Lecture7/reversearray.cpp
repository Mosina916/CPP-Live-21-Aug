#include<iostream>
using namespace std;
int main(){

	int arr[]={7,5,3,4,8,9};
	// o/p-->9 8 4 3 5 7
	int tb=sizeof(arr)/sizeof(int); //24 /4-->6-->indexing-->0 to 5

	cout<<"reverse array : ";
	for(int i=tb-1;i>=0;i--){ //-1
		cout<<arr[i]<<" "; //9 8 4 3 5 7
	}


	cout<<endl;





	return 0;
}