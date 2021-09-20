#include<iostream>
using namespace std;
int main(){
	int t;
	int a[10000],b[10000];
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		// 8 -8 9 -9 10 -11 12
		int cs=0,ms=0,csum=0;


		for (int i = 0; i <n; ++i)//1
		{
			cin>>a[i];//12
			csum=csum+a[i];//0+8-->8-8-->11
			
			cs=cs+a[i];//0+8-->8+-8-->0+9-->9+(-9)-->0+10-->10-11-->-1-->0+12-->12
			if(cs<0){
				cs=0;
			}
			ms=max(cs,ms);//(8,0)-->9,8-->0,9-->10,9-->0,10-->12,10-->12
			a[i]=(-a[i]);
			
		}

		int res1=ms;//12

		// csum-->11
		// ms-->12

		// b-->// -8 8 -9 9 -10 11 -12

		ms=0,cs=0;
		for (int i = 0; i <n; ++i)
		{
			cs=cs+b[i];//0
			if(cs<0){
				cs=0;
			}
			ms=max(cs,ms);//11
		}


		// ms-->11


		int res2=csum-(-ms);//11-(-11)-->22


		cout<<max(res2,res1)<<endl;//22





	}



	return 0;
}