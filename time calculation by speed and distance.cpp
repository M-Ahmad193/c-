#include<iostream>
using namespace std;
int main(){
	float distance=55 ;
	float speed= 15 ;
	double time=distance/speed;
	int hours=time;
	double rmin=(time-hours)*60;
 
	cout<<"JOHN  COVER DISTANCE(in MILES): "<<distance<<endl;
	cout<<"Total Speed(in MILES per HOUR): "<<speed<<endl;

	cout<<"TOTAL NUMBER OF HOURS JOHN TAKES TO COVER DISTANCE: "<<hours<<endl;
	cout<<"NUMBER OF MINUTES JOHN TAKES TO COVER DISTANCE: "<<rmin<<endl;
	
	return 0;
	}
