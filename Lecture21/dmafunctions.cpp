#include<iostream>
using namespace std;
int* f(int n){

	int *aptr=new int[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>aptr[i];
	}
	return aptr;


}
int main(){

	int n;
	cin>>n;
	int *fptr=f(n);
	for (int i = 0; i < n; ++i)
	{
		cout<<fptr[i]<<" ";
	}

	cout<<endl;



	

	return 0;
}