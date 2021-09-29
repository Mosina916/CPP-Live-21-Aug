#include<iostream>
using namespace std;

string moveallxatend(string s){
// abxcx
	// base case
	if(s.length()==0){
		return "";
	}




	// recursive case
	string pehlacharacter=s.substr(0,1); //"a"
	string chotastring=moveallxatend(s.substr(1));//
	if(pehlacharacter=="x"){
		string fstring=chotastring+pehlacharacter; //"bcxx"+"x"-->"bcxxx"
		return fstring;


	}
	else{
		string fstring=pehlacharacter+chotastring;//"a"+"bcxx"-->abcxx
		return fstring;

	}


}
int main(){
	string s;
	cin>>s;
	cout<<moveallxatend(s)<<endl;



	return 0;
}