#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//5

	int rowno=1;

	int no;

	while(rowno<=n){ //3<=5

		// check whether row no is even or odd
		if(rowno%2==0){
			// even
			no=0;

		}
		else{
			no=1;
		}


		// for one row

	int c=1; 
	while(c<=rowno){ //2<=3
		// task-->print some number
		cout<<no<<'\t';
		// if(no==1){
		// 	no=0;
		// }
		// else{
		// 	no=1;
		// }
		no=1-no; //1

		
		c=c+1; //2

	}

	cout<<endl;
	rowno=rowno+1;


	}

	cout<<endl;




	




	




	
	return 0;
}