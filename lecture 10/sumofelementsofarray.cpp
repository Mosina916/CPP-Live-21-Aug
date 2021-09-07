#include<iostream>
#include<cmath>
using namespace std;
int sumofelements(int arr[],int n){
	int sum=0;

	for(int i=0;i<n;i++){
		sum=sum+arr[i]; //0+5-->5+4-->9+1-->10


	}

	// sum-->10
	// cout<<"total sum is "<<sum<<endl;
	return sum;


}

int main(){
	int arr[]={5,4,1};
	int n=sizeof(arr)/sizeof(int);//5

	cout<<"total sum is: "<<sumofelements(arr,n)<<endl;










	return 0;
}