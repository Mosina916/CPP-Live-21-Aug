#include<iostream>
#include <cstring>
using namespace std;
int main(){

	// datatype variable name---->int ,float ,double, bool, char-->primitive datatpes

	// user defined DT
	// string s;
	// // cin>>s;//cin-->ignore space 

	// // getline(cin,string name)

	// getline(cin,s);

	// cout<<s<<endl;



	// string s1="hello hii this is coding blocks";

	// cout<<s1<<endl;


	// string s2("i am a teacher");
	// cout<<s2<<endl;


	// // with the char array


	// char arr[100]="hello hii";

	// cout<<arr<<endl;



	// concatenation-->piche lag jana
	// int a,b,v;


	string s1,s2;
	s1="abc";
	s2="def";


	cout<<s1<<endl<<s2<<endl;
	s2=s1+s2;//abcdef

	cout<<s1<<endl<<s2<<endl;


	// comparison


	string s3="abce";
	string s4="abyi";
	if(s3>s4){//"abce" > "abyi"
		cout<<"s3 is greater"<<endl;
	}
	else{
		cout<<"s4 is greater"<<endl;

	}


	// substring


	string s6="abcdefghijkl";


	cout<<s6.substr(4)<<endl;

	cout<<s6.substr(2,5)<<endl;//cdefg



	cout<<s6.length()<<endl;


	string s7="def";//defg
	s7.push_back('d');
	s7.push_back('H');
	cout<<s7<<endl;//defgH


	s7.pop_back();////defg
	cout<<s7<<endl; //abc


	int x=10;


	printf("%d\n",x);


















	return 0;
}