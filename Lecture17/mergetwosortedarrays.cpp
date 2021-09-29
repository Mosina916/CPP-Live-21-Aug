#include<iostream>
using namespace std;


void mergetwosortedarrays(int*a,int na,int *b,int nb){
	int i=0,j=0,k=0;
	int temp[10000];

// loop
	while(i<na&&j<nb){
		if(a[i]<b[j]){
		temp[k]=a[i];
		k++;
		i++;

	}
	else{
		temp[k]=b[j];
		k++;
		j++;
	}

	}
	// i==na

// loop
	// agar a wala array pura khatam huva hoga aur b wala array baccha hoga

	while(j<nb){
		temp[k]=b[j];
	j++;
	k++;


	}


	// agar j==nb k huva uska mtlb 2nd array khatam ho chuki hai

	// loop
	while(i<na){
	temp[k]=a[i];
	i++;
	k++;


	}


	for(int i=0;i<na+nb;i++){
		cout<<temp[i]<<" ";
	}

	cout<<endl;
	
	



	

}
int main(){
	int a[]={1,2,5,8};
	int b[]={3,4,6,9,10};
	int na=sizeof(a)/sizeof(int);
	int nb=sizeof(b)/sizeof(int);

	mergetwosortedarrays(a,na,b,nb);



	return 0;
}