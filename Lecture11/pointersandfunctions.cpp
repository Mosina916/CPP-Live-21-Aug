#include<iostream>
using namespace std;
void update(int* z){ //
	*z=*z+50;//20+50-->70
	int u=*z;

	cout<<"inside update function : "<<u<<endl;

}

// update2(int d)//int d=10
int main(){

	int x=20;
	cout<<"value of x is "<<x<<endl;

	int *xptr=&x;  //5000

	// update2(10);
	update(xptr);//pass address(5000);


	cout<<"value of x is "<<x<<endl;//70

	// int *xptr=&x;
	// int &pytr=&y;


	// int *xptr,*pytr;


	return 0;
}