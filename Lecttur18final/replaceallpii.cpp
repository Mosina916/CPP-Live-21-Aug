#include<iostream>
using namespace std;
string replaceallpi(string s){
	// base case
	// if(s.size()<=1){ //p
	// 	return s;

	// }
	if(s.size()==0){
		return "";
	}





	// recursive case pibpixp-->3.14b3.14x +p\0
	// xpibpixp
	if(s.substr(0,2)=="pi"){
		return "3.14"+replaceallpi(s.substr(2));



	}
	return s[0]+replaceallpi(s.substr(1));//3.14b3.14xp



}
int main(){
	string s; //xabpixp
	cin>>s;
	cout<<replaceallpi(s)<<endl;


	return 0;
}