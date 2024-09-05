// Write a program to print reverse tables

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter your number : ";
	cin>>num;
     cout<<" Your number table  "<<endl;
     
	for(int i=10; i>=1; i--){
		cout <<i*num <<endl;
	}
	
}
