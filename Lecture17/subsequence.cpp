#include<iostream>
using namespace std;

void subsequence(char *in,int i,char *out,int j){//abc
	// base case 
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}



	// recursive case

	// subsequences without a 
	subsequence(in,i+1,out,j);//left call


	// subsequences with a
	out[j]=in[i];  //right call
	subsequence(in,i+1,out,j+1);



}
int main(){
	char in[100];
	cin>>in;
	char out[100];
	subsequence(in,0,out,0);



	return 0;
}