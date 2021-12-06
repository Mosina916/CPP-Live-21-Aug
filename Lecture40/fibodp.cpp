#include<iostream>
using namespace std;
int fibo(int n){

	if(n==0||n==1){
		return n;

	}
	
	return fibo(n-1)+fibo(n-2);//5+3-->8


}


int topdownfibodp(int n,int *dp){//3

	if(n==0||n==1){

		return dp[n]=n;

	}


	// check kahi already claculated tou nahi hai
	if(dp[n]!=-1){
		return dp[n];

	}

// return karne se pehle store karna
	// arr[n]=fibodp(n-1)+fibodp(n-2);//3+2

	return dp[n]=topdownfibodp(n-1,dp)+topdownfibodp(n-2,dp);//3+2
}


int bottomup(int n){//5
	int *dp=new int[n+1];//6
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];

	}


	for (int i = 0; i <=n; ++i)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;




	int ans=dp[n];
	delete []dp;

	return ans;



}


// start
int main(){

	int n;//5
	cin>>n;
	int *arr=new int[n+1];

	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	cout<<"position "<<n<<"th fibonacci is "<<topdownfibodp(n,arr)<<endl;

	// cout<<"position "<<n<<"th fibonacci is "<<fibo(n)<<endl;

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	cout<<"position "<<n<<"th fibonacci is "<<bottomup(n)<<endl;

	
	return 0;//terminate successfully
}