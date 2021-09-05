#include<iostream>
using namespace std;


void fertocel(int init,int fin,int step){

// task-->print table

	int f=init; //0


	while(f<=fin){
		int c=(5/9.0)*(f-32); //explicit type conversion
		cout<<f<<" "<<c<<endl;
		f=f+step;//120

	}
	cout<<endl;


}
int main(){

	int init,fin,step;
	cin>>init>>fin>>step;//0 100 20 //fer

	// c=(5/9)*(0-32)

	fertocel(init,fin,step);

	cin>>init>>fin>>step;//100 300 30


	fertocel(init,fin,step);



	return 0;
}