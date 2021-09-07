#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x=0,y=0; 
	char ch;
	// NESNWES\n
	ch=cin.get();//N
	while(ch!='\n'){
		if(ch=='E'){
			x++;//1
		}
		else if(ch=='W'){
			x--;
		}
		else if(ch=='N'){
			y++; 
		}
		else if(ch=='S'){
			y--;//0

		}

		ch=cin.get(); //\n


	}


	// i will check kahi mai first quad mai tou nahi hun
	if(x>=0&&y>=0){
		// i am in 1st quad
		for(int i=1;i<=x;i++){
			cout<<'E'; //E
		}


		for(int j=1;j<=y;j++){
			cout<<'N';
		}
	}


	else if(x<=0&&y>=0){
		// i am in 2nd quadrant
		for(int i=1;i<=y;i++){
			cout<<'N';

		}
		// NNW
		for(int j=1;j<=abs(x);j++){
			cout<<'W';

		}
	}


	else if(x<=0&&y<=0){
		// i am in 3rd quadrant
		for(int i=1;i<=abs(y);i++){
			cout<<'S';
		}
		for(int j=1;j<=abs(x);j++){
			cout<<'W';
		}
	

	}
	else{
		// // i am in 4th quadrant
		for(int i=1;i<=x;i++){
			cout<<'E';
		}
		for(int j=1;j<=abs(y);j++){
			cout<<'S';
		}
	
	}
	cout<<endl;






	return 0;
}