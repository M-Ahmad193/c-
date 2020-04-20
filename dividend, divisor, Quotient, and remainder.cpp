#include<iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	int num3;
	int num4;
	cout<<"ENTER 1ST NUMBER: "<<flush;
	cin>>num1;
	cout<<"ENTER 2nd NUMBER: "<<flush;
	cin>>num2;
	num3=num1/num2;
	num4=num1%num2;
	cout<<"DIVISOR IS: "<<num1<<endl;
	cout<<"DIVIDEND IS: "<<num2<<endl;
	cout<<"Qutient IS: "<<num3<<endl;
	cout<<"REMAINDER IS: "<<num4<<endl;
	
	return 0;
}
