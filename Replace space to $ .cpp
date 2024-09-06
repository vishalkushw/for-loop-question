#include <iostream>
using namespace std;
void replace(string &s){
	int size =s.size();
	for(int i=0;i<size;i++){
		if(s[i]==' '){
			s[i]='$';
		}
	}
	cout<<s;
	return ;
}
int main(){
	string s="we are here to learn";
	replace(s);
}
