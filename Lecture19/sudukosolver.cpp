#include<iostream>
using namespace std;


bool kyamainumberdaalsaktihun(int mat[9][9],int i,int j,int n,int number){
	// check in row
	for(int k=0;k<n;k++){
		if(mat[i][k]==number){
			return false;
		}
	}

	// check for col

	for(int k=0;k<n;k++){
		if(mat[k][j]==number){
			return false;
		}
	}

	// root(n)*root(n) uspe check karna


	n=sqrt(n);//sqrt(9)-->3
	// n-->3

	int starti=(i/n)*n;
	int startj=(j/n)*n;


	for(int k=starti;k<starti+n;k++){//k-->7;k<9
		for(int l=startj;l<startj+n;l++){//l-->6
			if(mat[k][l]==number){
				return false;
			}

		}

	}

	// kahi wo number nahi mila


	return true;




}




bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;

		// return true;

		return false;
	}




	// recursive case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}



	for(int number=1;number<=9;number++){//1
		if(kyamainumberdaalsaktihun(mat,i,j,n,number)==true){//1
			mat[i][j]=number;//5


			bool kyabakiseansmila=sudukosolver(mat,i,j+1,n); //false
			if(kyabakiseansmila==true){
				return true;
			}
			mat[i][j]=0;

		}


	}
	return false;


}
int main(){
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		// 5 3 4 6 7 8 9 1 2 
		// 6 7 2 1 9 5 3 4 8 
		// 1 9 8 3 4 2 5 6 7 
		// 8 5 9 7 6 1 4 2 3 
		// 4 2 6 8 5 3 7 9 1 
		// 7 1 3 9 2 4 8 5 6 
		// 9 6 1 5 3 7 2 8 4 
		// 2 8 7 4 1 9 6 3 5 
		// 3 4 5 2 8 6 1 7 9

		sudukosolver(mat,0,0,9);


	return 0;
}