#include<iostream>
using namespace std;

int minimumcost(int givencost[4][4],int i,int j){
	// base case
	if(i==0&&j==0){
		return givencost[i][j];
	}

	if(i<0||j<0){
		return INT_MAX;

	}

	// recursive case
	int op1=minimumcost(givencost,i,j-1);
	int op2=minimumcost(givencost,i-1,j);

	return min(op1,op2)+givencost[i][j];
}


// top down
int minimumcosttopdown(int givencost[4][4],int i,int j,int dp[100][100]){
	// base case
	if(i==0&&j==0){
		return dp[i][j]=givencost[i][j];
	}

	if(i<0||j<0){
		return INT_MAX;

	}
	// calculate karne se pehle check

	if(dp[i][j]!=-1){
		return dp[i][j];
	}


	// recursive case
	int op1=minimumcosttopdown(givencost,i,j-1,dp);
	int op2=minimumcosttopdown(givencost,i-1,j,dp);

	return dp[i][j]=min(op1,op2)+givencost[i][j];
}

// bottom up
int minimumcostbottomup(int x,int y,int givencost[4][4]){
	int dp[100][100];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==0&&j==0){
				dp[i][j]=givencost[i][j];
			}
			else if(i==0){
				dp[i][j]=dp[i][j-1]+givencost[i][j];

			}
			else if(j==0){
				dp[i][j]=dp[i-1][j]+givencost[i][j];
			}
			else{
				dp[i][j]=min(dp[i-1][j],dp[i][j-1])+givencost[i][j];
			}
		}
	}


	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[x][y];

}

int main(){
	int givencost[4][4]={
		{3,1,3,45},
		{3,1,10,10},
		{1,16,1,16},
		{2,4,7,3}
	};
	// des 2,3 

	// cout<<minimumcost(givencost,2,3)<<endl;//pure recursion


	// int dp[100][100];
	// memset(dp,-1,sizeof(dp));

	// cout<<minimumcosttopdown(givencost,2,3,dp)<<endl;//top down


	cout<<minimumcostbottomup(2,3,givencost)<<endl;

	




	return 0;

}