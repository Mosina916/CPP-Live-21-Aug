#include<iostream>
using namespace std;
int wineproblem(int *price,int l,int r,int day){
	// base case
	if(l>r){
		return 0;
	}



	// recursive case
	int op1=price[l]*day+wineproblem(price,l+1,r,day+1);
	int op2=price[r]*day+wineproblem(price,l,r-1,day+1);
	return max(op1,op2);
}


int wineproblemtopdown(int *price,int l,int r,int day,int dp[][100]){
	// base case
	if(l>r){
		return dp[l][r]=0;
	}
	// calculate karne se pehle check
	if(dp[l][r]!=-1){
		return dp[l][r];
	}



	// recursive case
	int op1=price[l]*day+wineproblemtopdown(price,l+1,r,day+1,dp);
	int op2=price[r]*day+wineproblemtopdown(price,l,r-1,day+1,dp);
	return dp[l][r]=max(op1,op2);
}


int bottomupwineproblem(int *price,int n){
	int dp[100][100]={0};
	// fill the diagonal 
	for(int i=0;i<n;i++){
		dp[i][i]=n*price[i];
	}


	// upper traiangle
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(i<j){
				int day=n-(j-i);//5-(1)//4
				int op1=day*price[i]+dp[i+1][j];
				int op2=day*price[j]+dp[i][j-1];
				dp[i][j]=max(op1,op2);

			}
		}
	}
	return dp[0][n-1];


}
int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);//5
	cout<<wineproblem(price,0,n-1,1)<<endl; ////pure recursion

	// top down
	int dp[100][100];
	// for(int i=0;i<100;i++){
	// 	for(int j=0;j<100;j++){
	// 		dp[i][j]=-1;
	// 	}
	// }
// syntax
	// memset(arrayname,value you want to initilize array with,sizeof(arrayname));
	memset(dp,-1,sizeof(dp));

	cout<<wineproblemtopdown(price,0,n-1,1,dp)<<endl;//top down



	cout<<bottomupwineproblem(price,n)<<endl;//bottom up solution
	


	




	return 0;

}