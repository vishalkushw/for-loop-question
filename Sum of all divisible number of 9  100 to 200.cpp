// Write a program to find number and sum of all integer 
// between 100 and 200 which are divisible by 9.

#include <iostream>
using namespace std;
int main(){
	int sum=0;
	cout<<"All number : ";
    for( int i=100; i<=200; i++){
 	   if(i%9==0){
 	   	cout<<i<<" ";
 	   	sum= sum+i;
	}	
 }
 cout<<endl;
 cout<<"Sum of all divisible number of 9 is : "<<sum;
}
