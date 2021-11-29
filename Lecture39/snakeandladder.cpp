#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
// #include <map>
#include<cstring>
using namespace std;

template<typename T>

class Graph{
	// unordered_map<string,list<string> >h;
	unordered_map<T,list<T> >h;
	// map<T,list<T> >h;
	public:
	// Graph(int N){
	// 	l=new list<int>[N];
	// 	n=N;

	// }

	// void addEdge(string u,string v,bool bird=false){
			// void addEdge(T u,T v,bool bird=false){
		void addEdge(T u,T v,bool bird=false){
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


	// void bfs(T start){
	// 	queue<T>q;
	// 	q.push(start);//0-->print hoga aur uske neighour queue mai jayege
	// 	unordered_map<T,bool> visited;
	// 	visited[start]=true;

	// 	unordered_map<T,T> distance;
	// 	distance[start]=0;//dis of start node from itself is 0


	// 	// kaam karne
	// 	// loop
	// 	while(!q.empty()){

	// 		T n=q.front();//3
	// 	q.pop();
	// 	cout<<n<<" ";//0 1 4 2 3

	// 	// n k neighous ko queue mai push karna hai-->agar wo already pushed nahi hai
	// 	for(auto neighb:h[n]){//h[3]
	// 		if(!visited[neighb]){
	// 			q.push(neighb);
	// 			visited[neighb]=true;
	// 			distance[neighb]=distance[n]+1;
	// 		}


	// 	}

	// 	}


	// 	// distance map
	// 	cout<<endl;

	// 	for(auto no:distance){

	// 		cout<<"distance of "<<no.first<<" from "<<start<<" is "<<no.second<<endl;

	// 	}

	// 	cout<<endl;
		



	// }




		int sssp(T src,T dest){//1 5
		queue<T>q;
		q.push(src);//0-->print hoga aur uske neighour queue mai jayege
		unordered_map<T,bool> visited;
		visited[src]=true;

		unordered_map<T,T> distance;
		distance[src]=0;//dis of start node from itself is 0
		unordered_map<T,T>parent;
		parent[src]=src;


		// kaam karne
		// loop
		while(!q.empty()){

			T n=q.front();//3
		q.pop();
		// cout<<n<<" ";//0 1 4 2 3 5

		// n k neighous ko queue mai push karna hai-->agar wo already pushed nahi hai
		for(auto neighb:h[n]){//n-->1
			if(!visited[neighb]){
				q.push(neighb);
				visited[neighb]=true;
				distance[neighb]=distance[n]+1;
				parent[neighb]=n;
			}


		}

		}

		cout<<endl;

		T temp=dest;//5


// loop
		while(temp!=parent[temp]){
			cout<<temp<<"<--";//5<--3<--2<--
		temp=parent[temp];//1

		}


		cout<<temp<<endl;//5<--3<--2<--1



	

		return distance[dest];
	


	}



};
int main(){

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = 10;
	board[32] = -2;
	board[34] = -22;


	for(int src=0;src<36;src++){
		for(int dice=1;dice<=6;dice++){

			int dest=src+dice+board[src+dice];
			g.addEdge(src,dest);

		}

	}


	cout<<"minimum moves: "<<g.sssp(0,36)<<endl;;
	



	


	return 0;
}