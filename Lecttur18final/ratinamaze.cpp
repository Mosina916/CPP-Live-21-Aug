#include<iostream>
using namespace std;
int sol[100][100]={0};
int co=0;
bool ratinamaze(char maze[][10],int n,int m,int i,int j){ //n-->rows,m-->cols
	// base case
	if(i==n-1&&j==m-1){
		sol[i][j]=1;
		for(int l=0;l<n;l++){
			for(int k=0;k<m;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;
		co++;

		sol[i][j]=0;
		// return true

		return false; //all paths
	}



	// recursive case
	sol[i][j]=1;
	// kya mai right jaa sakti hun
	if(j+1<m&&maze[i][j+1]!='X'){
		// mai aage jaa sakti hun
		bool kyamujheaageseansmila=ratinamaze(maze,n,m,i,j+1);
		if(kyamujheaageseansmila==true){
			return true;
		}

	}


	// kya mai neeche jaa sakti hun
	if(i+1<n&&maze[i+1][j]!='X'){
		bool kyamujheneecheseaNSMILA=ratinamaze(maze,n,m,i+1,j);
		if(kyamujheneecheseaNSMILA==true){
			return true;
		}

	}

	sol[i][j]=0; //backtracking


	return false;


}

int main(){
	
	char maze[][10]={
		"OOOO",
		"OOXX",
		"OOOO",
		"XXOO"
	};
	int n=4,m=4;

	ratinamaze(maze,n,m,0,0);

	cout<<"Total paths "<<co<<endl;

	


	return 0;
}