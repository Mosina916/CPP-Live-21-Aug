#include<iostream>
using namespace std;
bool kyamaiqueenplacekarsaktihun(int board[50][50],int i,int j,int n){
	// check for the col

	for(int k=0;k<n;k++){
		if(board[k][j]==1){
			return false;
		}
	}


	// check for row


	for(int k=0;k<n;k++){
		if(board[i][k]==1){
			return false;
		}
	}


	int r=i,c=j;
	// right diagonal
	while(i>=0&&j<n){
		if(board[i][j]==1){
			return false;
		}
		i--;//0
		j++;//4


	}

	// i-->0

	// j-->4


	// left diagonal

	while(r>=0&&c>=0){
		if(board[r][c]==1){
			return false;
		}
		r--;
		c--;
	}


	return true;





}
bool nqueen(int board[50][50],int i,int n){
	// base case
	if(i==n){

		for (int k = 0; k <n; k++)
		{
			for(int l=0;l<n;l++){
				if(board[k][l]==1){
					cout<<"Q ";

				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;
		}

		cout<<endl;
		// return true;

		return false;

	}



	// recursive case
	for(int j=0;j<n;j++){
		if(kyamaiqueenplacekarsaktihun(board,i,j,n)==true){
			board[i][j]=1;
			bool kyaneecheseansmila=nqueen(board,i+1,n);//false   true
			if(kyaneecheseansmila==true){
				return true;
			}

			// agar neeche se false mila
			board[i][j]=0;


		}
	}
	return false;
}
int main(){
	int board[50][50]={0};
	int n;
	cin>>n;//4
	nqueen(board,0,n);



	return 0;
}