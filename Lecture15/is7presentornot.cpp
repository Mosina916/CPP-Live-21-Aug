#include<iostream>
using namespace std;
bool is7preesntornot(int arr[],int n){
	// base case
	if(n==0){
		return false;
	}

	// recursive case
	if(arr[0]==7){
		return true;
	}
	return is7preesntornot(arr+1,n-1);
}



int firstindexof7(int arr[],int n,int i){
	// base case
	if(i==n){
		// cout<<"no element ";
		return -1;//element is not present


	}



	// recursive case
	if(arr[i]==7){
		return i;

	}

	return firstindexof7(arr,n,i+1);

}


int last7index(int arr[],int n,int i){
	// base case
	if(i==-1){
		return -3;
	}


	// recursive case
	if(arr[i]==7){
		return i;
	}
	return last7index(arr,n,i-1);

}

int cnt=0;


void allindices(int *arr,int n,int i){
	// base xase
	if(i==n){
		return;
	}



	// recursive case
	if(arr[i]==7){
		cnt++;
		cout<<i<<" ";//1 3 4

	}
	allindices(arr,n,i+1);
}


// int arr[10]={2,5};


int main(){
	int arr[]={1,7,3,7,7,2};
	int n=sizeof(arr)/sizeof(int);//6

	if(is7preesntornot(arr,n)){
		cout<<"7 is present in array "<<endl;
	}
	else{
			cout<<"7 is not present in array "<<endl;

	}

	int x=firstindexof7(arr,n,0);//3
	
	if(x<0){
		cout<<"element is not present"<<endl;

	}
	else{
		cout<<"element is present at index "<<x<<endl;
	}



	cout<<last7index(arr,n,n-1)<<endl;

	allindices(arr,n,0);

	cout<<endl;

	cout<<cnt<<endl;

	return 1;
}