#include<iostream>
#include <unordered_map>
using namespace std;
class node{
public:
	char data;
	bool isterminal;
	unordered_map<char,node*> h;

	// constructor
	node(char ch){
		data=ch;
		isterminal=false;
	}
};


class Trie{
	node*root;
public:
	// constructor
	Trie(){
		root=new node('\0');

	}


	void insert(char*word){//coder
		node*temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];//r
		if(temp->h.count(ch)){
			temp=temp->h[ch];

		}
		else{
			temp->h[ch]=new node(ch);
			temp=temp->h[ch];
		}

		}

		temp->isterminal=true;


	}


	bool search(char*key){//code
		node*temp=root;

		for(int i=0;key[i]!='\0';i++){
			char ch=key[i];//e
			if(temp->h.count(ch)){
				// wo character present hai
				temp=temp->h[ch];

			}
			else{
				return false;
			}


		}


		if(temp->isterminal==true){
			return true;
		}
		else{
			return false;
		}





	}




};
int main(){
	Trie t;

	

	// t.insert("code");
	// char arr[100]="code";
	// t.insert(arr);

	t.insert("coder");
	t.insert("coding");
	t.insert("hello");
	t.insert("helloworld");

	


	if(t.search("code")){
		cout<<"yes present "<<endl;
	}
	else{
		cout<<"no not present "<<endl;

	}





	return 0;
}