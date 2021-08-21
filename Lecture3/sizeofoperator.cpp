#include<iostream>
using namespace std;
int main(){
	// sizeof

	//datatype
	// PASS DATATYPE
	cout<<" int "<<sizeof(int)<<endl; //2 bytes
	cout<<" char "<<sizeof(char)<<endl; //bytes
	cout<<" float "<<sizeof(float)<<endl; //bytes
	cout<<" double "<<sizeof(double)<<endl; //bytes
	cout<<" bool "<<sizeof(bool)<<endl; //bytes


	int x=10;
	float f=90.45;
	bool is=true;
	char ch='A';
	double d=332.234234;

	// NAME OF VARIABLE PASSED

	cout<<" int "<<sizeof(x)<<endl; //bytes
	cout<<" char "<<sizeof(ch)<<endl; //bytes
	cout<<" float "<<sizeof(f)<<endl; //bytes
	cout<<" double "<<sizeof(d)<<endl; //bytes
	cout<<" bool "<<sizeof(is)<<endl; //bytes


	// value PASSED


	cout<<" int "<<sizeof(10)<<endl; //bytes
	cout<<" char "<<sizeof('A')<<endl; //bytes
	cout<<" float "<<sizeof(10.232)<<endl; //bytes
	cout<<" double "<<sizeof(71326.214)<<endl; //bytes
	cout<<" bool "<<sizeof(true)<<endl; //bytes













	return 0;
}