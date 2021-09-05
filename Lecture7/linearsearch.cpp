#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n; //4

	// input in array

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	// 6 5 3 2

	int key;
	cin>>key;
	int i; //3
	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
			cout<<"key is present at index "<<i<<endl;
			break;
		}
	}

	if(i==n){
		cout<<"key is not present "<<endl;
	}







	return 0;
}