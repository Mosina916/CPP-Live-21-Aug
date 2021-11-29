#include<iostream>
#include<list>
using namespace std;



class Graph{
	public:
	list<int>*l;
	int n;


	Graph(int N){
		l=new list<int>[N];
		n=N;

	}

	void addedge(int u,int v,bool bird=true){
		l[u].push_back(v);
		if(bird==true){
			l[v].push_back(u);

		}
	}


	void print(){
		for(int i=0;i<n;i++){

			cout<<i<<" : ";//0 : 


			for(auto neightbour:l[i]){//for every node in l[i];
				cout<<neightbour<<"-->";//1 4
			}
			cout<<endl;


		}
	}



};
int main(){
	int noe,non;
	cin>>noe>>non;//7 6
	Graph g(non);


	for(int i=0;i<noe;i++){
		int u,v;
		cin>>u>>v;//0 1   //1 2
		g.addedge(u,v);
	}


	g.print();


	


	return 0;
}