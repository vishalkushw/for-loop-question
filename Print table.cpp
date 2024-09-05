//Write a program to print tables

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter your number : ";
	cin>>num;
     cout<<" Your number table  "<<endl;
     
	for(int i=1; i<=10; i++){
		cout <<i*num <<endl;
	}
	
}
