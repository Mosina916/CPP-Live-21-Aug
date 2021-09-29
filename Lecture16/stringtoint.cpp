#include<iostream>
using namespace std;

int stringtoint(string s,int len){
	// base case
	if(len==0){
		return 0;
	}


	// recursive case
	 // "5634"
	int ldigit=s[len-1]-'0';//'4'-'0'-->
	return stringtoint(s,len-1)*10+ldigit;//"563"-->563*10+4-->5634
}

int main(){
	string s;
	// "5634"+70-->5634+100
	cin>>s;
	int len=s.length();//4
	cout<<stringtoint(s,len)<<endl;//
	cout<<stringtoint(s,len)+100<<endl;//

	

	return 0;
}