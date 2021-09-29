#include<iostream>
using namespace std;
void mergetwosortedaarrays(int *a,int s,int e){
	int mid=(s+e)/2; //0+1/2;==0

	int i=s;//0
	int j=mid+1; //1
	int temp[1000];
	int k=s;//0

	while(i<=mid&&j<=e){
			if(a[i]<a[j]){
		temp[k]=a[i];
		i++;
		k++;

	}
	else{
		temp[k]=a[j];
		j++;
		k++;

	}

	}
	while(i<=mid){
		temp[k]=a[i];
		i++;
		k++;
	}


	while(j<=e){
		temp[k]=a[j];
		j++;
		k++;
	}

	for(int i=s;i<=e;i++){
		a[i]=temp[i];
	}


}

void mergesort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;

	}


	// recursive case


	// divide through mid
	int mid=(s+e)/2; //2;

	// sort 
	mergesort(arr,s,mid); //1
	mergesort(arr,mid+1,e);//
	// merge
	mergetwosortedaarrays(arr,s,e);




}
int main(){

	int arr[]={4,2,1,5,3,8,8,6,9,0};
	int n=sizeof(arr)/sizeof(int);

	cout<<"before merge sort"<<endl;

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}


	mergesort(arr,0,n-1);
	cout<<"After merge sort"<<endl;


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;




	return 0;
}