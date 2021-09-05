#include <iostream>
using namespace std;



// syntax

// return type functionname(){


// 	// task

// }


// 1 type : return nothing , no argument
void printstatement(){ //function decleartion

	// function definition

   	cout<<"i am a teacher"<<endl;
	cout<<"coding blocks"<<endl;
	cout<<"hello world"<<endl;
	cout<<"this is cat"<<endl;
	


   }

// 2 type: return nothing , have arguments
// return type function name(datatype variable name,......);
 void sum(int a,float b){
   	cout<<"sum of two numbers is "<<a+b<<endl;


   }

// type 3: return something ,have arguments
float multiply(int a,float b,int c){
	float ans=a*b*c; //6*2.2-->13.2
	return ans;
}

// 4th type :return something, without arguments
int subtraction(){
	int a,b;
	cin>>a>>b; //7 2
	int ans=a-b;//7-2==5
	return ans;


}


bool compa(int a,int b){
	if(a>b){
		return true;

	}
	return false;

}




int main(){

	// syntax

	// functionname(); //function call


	printstatement(); //function call
	printstatement(); //function call
	printstatement(); //function call
	printstatement(); //function call
	printstatement(); //function call



	sum(7,8.56); //arguments //parameters



	cout<<"multiply of three numbers is "<<multiply(3,2.2,2)<<endl;


	cout<<"subtraction is "<<subtraction()<<endl;


	int x=subtraction(); //store
	cout<<"subtraction is "<<x<<endl;


	if(compa(10,15)){
		cout<<"A is greater than B"<<endl;
	}
	else{
		cout<<"A is not greater than B"<<endl;

	}


	sum(9,10.5);











	// cout<<"i am a teacher"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"this is cat"<<endl;



	// cout<<"i am a teacher"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"this is cat"<<endl;



	// cout<<"i am a teacher"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"this is cat"<<endl;



	// cout<<"i am a teacher"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"this is cat"<<endl;


	// cout<<"i am a teacher"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"hello world"<<endl;
	// cout<<"this is cat"<<endl;




	return 0;

}


