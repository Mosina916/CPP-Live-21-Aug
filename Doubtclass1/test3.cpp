#include<iostream>
#include<cmath>
using namespace std;
int main(){

	int a=10,b;
	b=++a+ a++ + ++a + ++a;
	cout<<b<<endl;

	return 0;
}