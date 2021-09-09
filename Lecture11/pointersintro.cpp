#include<iostream>
using namespace std;
int main(){

	int x=10;
	float f=70.56;
	double g=90.64353;


	// cout<<"value of x is : "<<x<<endl; //10
	// cout<<"value of f is : "<<f<<endl; //70.56
	// cout<<"value of g is : "<<g<<endl;//90.64353

	// // adrees

	// cout<<"address of x is : "<<&x<<endl; //0x7ffeee433948
	// cout<<"address of f is : "<<&f<<endl; //0x7ffeee433944
	// cout<<"address of g is : "<<&g<<endl;//0x7ffeee433938


	// // size
	// cout<<"size of x is : "<<sizeof(x)<<endl; //4
	// cout<<"size of f is : "<<sizeof(f)<<endl; //4
	// cout<<"size of g is : "<<sizeof(g)<<endl;//8


	// // size of adrees-->same -->will not depend on the datatype
	// cout<<"size of &x is : "<<sizeof(&x)<<endl; //8
	// cout<<"size of &f is : "<<sizeof(&f)<<endl; //8
	// cout<<"size of &g is : "<<sizeof(&g)<<endl;//8




	//char bucket
	// &ch-->bucket value till it gets null
	// compiler char buckets uniquely treat
	// char ch='A';
	// cout<<"value of ch is : "<<ch<<endl; //'A'
	// cout<<"address of ch is : "<<&ch<<endl; //not giving address//A??s?/?V@hɓ??B

	// // fooling of compiler

	// cout<<"address of ch is : "<<(int*)&ch<<endl; 
	// cout<<"address of ch is : "<<(float*)&ch<<endl; 
	// cout<<"address of ch is : "<<(double*)&ch<<endl; 
	// cout<<"address of ch is : "<<(void*)&ch<<endl; 

	// to store adress-->pointer
	// datatype* bucketname
	// datatype *bucketname
	// initilization
	// int* xptr=&x;//0x7ffeee433948
	int* xptr;//declare
	xptr=&x;//assignment

	float* fptr=&f;
	double *dptr=&g;


	// cout<<"address of x is : "<<&x<<endl; //0x7ffeee433948
	// cout<<"address of f is : "<<&f<<endl; //0x7ffeee433944
	// cout<<"address of g is : "<<&g<<endl;//0x7ffeee433938


	// cout<<"address of x is : "<<xptr<<endl; //0x7ffeee433948
	// cout<<"address of f is : "<<fptr<<endl; //0x7ffeee433944
	// cout<<"address of g is : "<<dptr<<endl;//0x7ffeee433938

	cout<<"address of x is : "<<&x<<endl; //0x7ffee9081948
	cout<<"address of f is : "<<&f<<endl; //0x7ffee9081944
	cout<<"address of g is : "<<&g<<endl;//0x7ffee9081938

	cout<<"address of x+1 is : "<<&x+1<<endl; //0x7ffee908194c //&x+1-->address of next bucket
	cout<<"address of f+1 is : "<<&f+1<<endl; //0x7ffee9081948
	cout<<"address of g+1 is : "<<&g+1<<endl; //0x7ffee9081940


	cout<<"address of x+2 is : "<<&x+2<<endl; //
	cout<<"address of f+2 is : "<<&f+2<<endl; //
	cout<<"address of g+2 is : "<<&g+2<<endl; //



	// defrence operator-->*

	cout<<*xptr<<endl;//bucket value

	cout<<*(&x)<<endl;


	cout<<*fptr<<endl;

	cout<<*(&f)<<endl;


	











































	return 0;
}