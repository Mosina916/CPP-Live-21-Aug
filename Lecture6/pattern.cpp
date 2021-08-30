#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n; //5


// for(int rowno=1;rowno<=n;rowno++){

// }


	// int rowno=1;
	// while(rowno<=n){



	for(int rowno=1;rowno<=n;rowno++){

			// 1 row
		// -------------------------------------------------
	char ch='A';
	
	// increasing print 
	// int incou=1;
	// while(incou<=n-rowno+1){//6<=5
	// 	cout<<ch<<" "; //A B C D E
	// 	ch=ch+1; //'A'+1 -->65+1-->66-->B-->C-->D-->E-->F

	// 	incou++; //6

	// }


	for(int incou=1;incou<=n-rowno+1;incou++){
		cout<<ch<<" "; //A B C D E
		ch=ch+1; //'A'+1 -->65+1-->66-->B-->C-->D-->E-->F


	}
	// ch-->F

	ch=ch-1;//F-1-->E
	// decreasing print

	// int deccou=1;
	// while(deccou<=n-rowno+1){//3<=5
	// 	cout<<ch<<" "; //E D C
	// 	ch=ch-1;//E-1-->D-1-->C-1-->B

	// 	deccou++; //3


	// }


	for(int deccou=1;deccou<=n-rowno+1;deccou++){
		cout<<ch<<" "; //E D C
		ch=ch-1;//E-1-->D-1-->C-1-->B

	}

// -------------------------------------------------
	cout<<endl;	

	}


	

	


	

	//1 row














	return 0;
}