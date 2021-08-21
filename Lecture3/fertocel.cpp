#include<iostream>
using namespace std;
int main(){

	int init,fin,step;
	cin>>init>>fin>>step;//0 100 20 //fer

	// c=(5/9)*(0-32)

	int f=init; //0


	while(f<=fin){
		int c=(5/9.0)*(f-32); //explicit type conversion
		cout<<f<<" "<<c<<endl;
		f=f+step;//120

	}
	cout<<endl;








	





	return 0;
}