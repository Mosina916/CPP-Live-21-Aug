#include<iostream>
using namespace std;
int main(){

	// int arr[]={1,2,3,4};//arr-->act as a pointer

	// cout<<arr<<endl; //first bucket address

	// // 1st way of iitilization
	// char ch[]={'A','B','C','D','\0'};

	// cout<<ch<<endl;//ABCD

	// char ch2[]={'C','D','E','F','\0'};

	// cout<<ch2<<endl;//CDEFABC


	// 2nd way of iitilization


	// char ch3[]="hello"; //by default strings have NULL at end;
	// cout<<ch3<<endl;

	// // 3rd way of iitilization
	// char ch4[11]="helloworld"; //by default strings have NULL at end;
	// cout<<ch4<<endl;



	// // 4th way of iitilization

	// char ch5[100];
	// cin>>ch5;//"coding"//this will work for words without space
	// cout<<ch5<<endl;


	// 5th way of iitilization


	// char ch6[100];//"hi co$sb\n"
	// char ch=cin.get();//h
	// int i=0;

	// // /loop
	// while(ch!='$'){
	// // while(ch!='\n'){
	// 	ch6[i]=ch;
	// i++;//6
	// ch=cin.get(); //'\n'

	// }
	// ch6[i]='\0';


	// cout<<ch6<<endl;


	// 6th
	// sentence


	char ch7[100];
	// cin.getline(arrname,size,'\n')
	cin.getline(ch7,100,'$');
	cout<<ch7<<endl;





	

	


















	return 0;
}