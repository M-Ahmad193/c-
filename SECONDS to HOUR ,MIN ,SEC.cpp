#include<iostream>
using namespace std;
int main(){
	int  valueInSec=50397;
	int hoursCal=valueInSec/3600;
	int minInSec=hoursCal*3600;
	int remainSec=valueInSec-minInSec;
	double minsCal=remainSec/60;
	int newSec=minsCal*60;
	double sec=remainSec-newSec;
	
	
	cout<<"Enter your value in sec:"<<valueInSec<<endl;
	cout<<"HOURS:"<<hoursCal<<endl;
	cout<<"MINUTES:"<<minsCal<<endl;
	cout<<"SECONDS:"<<sec<<endl;
	return 0;
	
} 
