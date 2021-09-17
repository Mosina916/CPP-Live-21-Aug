#include<iostream>
using namespace std;
int uniqueno3(int *arr,int n){
	// pehle mujhe saare numbers k positions k total 1 dekhne hai and store in fereq arra
	int freq[32]={0};

	//  5 5 3 5

	for (int i = 0; i <n; ++i)//2 1
	{
		int pos=0;
		int no=arr[i];//5 -->101

		// loop
		// for one number
		while(no>0){//32 -->1
		freq[pos]=freq[pos]+(no&1);//-->1&1-->1
		no=no>>1;//
		pos++;//3

		}


	}

	// freq--> 4 1 3 0 0 0 0 ......0



	for (int i = 0; i < 32; ++i)
	{
		freq[i]=freq[i]%3;
	}

	// freq-->1 1 0 0 0 0 0 0 0... 0


	// binary to decimal

	int m=1;//2^0
	int ans=0;
	for (int i = 0; i <32; ++i)
	{
		ans=ans+freq[i]*m;//0+1*1-->1+1*2-->3+0*4-->
		m=m<<1;//2*2-->4
	}



	return ans;



}
int main(){
	int n;
	int arr[1000000];

	cin>>n; //4
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	// 1 1 1 2 2 2 3

	cout<<uniqueno3(arr,n)<<endl;





	return 0;
}