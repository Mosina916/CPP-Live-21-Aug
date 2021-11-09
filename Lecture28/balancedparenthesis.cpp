#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(char *a){
	stack<char>s;
	for(int i=0;a[i]!='\0';i++){
		char ch=a[i];//')'

		switch(ch){
			case '{':
			case '[':
			case '(': s.push(ch);
						break;

			case ')':
					if(!s.empty()&&s.top()=='('){
						s.pop();
					}
					else{
						return false;
					}
					break;


			case '}':
					if(!s.empty()&&s.top()=='{'){
						s.pop();
					}
					else{
						return false;
					}
					break;
			case ']':
					if(!s.empty()&&s.top()=='['){
						s.pop();
					}
					else{
						return false;
					}

		}


	}

	if(s.empty()){
		return true;
	}
	else{
		return false;
	}


}
int main(){
	// char a[]="{[()}";//-->not balanced

	// char a[]="[{(())}]";

	char a[]="[t*{y-((a+b)*c)}]";

	if(isbalanced(a)){
		cout<<"yes balanced"<<endl;
	}
	else{
		cout<<"No not balanced"<<endl;
	}




	return 0;
}