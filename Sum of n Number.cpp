#include <iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"enter number : ";
	cin>>num;
	for(int i=1; i<=num; i++){
		sum=sum+(i*i);
		
	}
	cout <<" sum (1*1)+(2*2)+........+(n*n) : "<<sum;
}
