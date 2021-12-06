#include<iostream>
using namespace std;
int minstepstoreach1(int n){//10
	// base case
	if(n==1){
		return 0;

	}

	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op1=minstepstoreach1(n-1);
	if(n%3==0){
		op2=minstepstoreach1(n/3);
	}
	if(n%2==0){
		op3=minstepstoreach1(n/2);
	}

	return min(op1,min(op2,op3))+1;


}

// top down
int topdownminstepstoreach1(int n,int *arr){//2
	// base case
	if(n==1){
			// return karne se pehle store
		return arr[n]=0;

	}

	// recursive case
	// calculate karne se pehle check;
	if(arr[n]!=-1){
		return arr[n];
	}

	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op1=topdownminstepstoreach1(n-1,arr);
	if(n%3==0){
		op2=topdownminstepstoreach1(n/3,arr);
	}
	if(n%2==0){
		op3=topdownminstepstoreach1(n/2,arr);
	}

	// return karne se pehle store

	return arr[n]=min(op1,min(op2,op3))+1;


}


int bottomup(int n){
	int *arr=new int[n+1];
	arr[0]=-1;
	arr[1]=0;


	for(int i=2;i<=n;i++){
		int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1=arr[i-1];//0

	if(i%3==0){
		op2=arr[i/3];
	}
	if(i%2==0){
		op3=arr[i/2];//0
	}
	arr[i]=min(op1,min(op2,op3))+1;


	}


	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int ans=arr[n];

	delete[]arr;
	return ans;

	



}



int main(){
	int n;
	cin>>n;

	int *arr=new int[n+1];

	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}



	cout<<"topdown min steps are : "<<topdownminstepstoreach1(n,arr)<<endl;//n

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<"Bottom up min steps are : "<<bottomup(n)<<endl;//n





	cout<<"min steps are : "<<minstepstoreach1(n)<<endl;//3^1000






	return 0;
}