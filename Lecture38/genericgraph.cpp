#include<iostream>
#include<list>
// #include<unordered_map>

#include <map>
#include<cstring>
using namespace std;

template<typename T>

class Graph{
	// unordered_map<string,list<string> >h;
	// unordered_map<T,list<T> >h;
	map<T,list<T> >h;
	public:


	// Graph(int N){
	// 	l=new list<int>[N];
	// 	n=N;

	// }

	// void addEdge(string u,string v,bool bird=false){
			// void addEdge(T u,T v,bool bird=false){
		void addEdge(T u,T v,bool bird=true){
		h[u].push_back(v);
		if(bird==true){
			h[v].push_back(u);

		}
	}


	void print(){
		for(auto node:h){

			cout<<node.first<<" : ";//putin : 


			for(auto neightbour:node.second){//for every node in l[i];
				cout<<neightbour<<"-->";//1 4
			}
			cout<<endl;


		}
	}



};
int main(){
	int noe,non;
	cin>>noe>>non;//7 6
	Graph<int>g;


	for(int i=0;i<noe;i++){
		int u,v;
		cin>>u>>v;//0 1   //1 2
		g.addEdge(u,v);
	}


	g.print();





 //    Graph<string> g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	// g.print();


// 7
// 6
// 0 1
// 1 2
// 2 4
// 0 4
// 2 3
// 4 3
// 3 5

	


	return 0;
}