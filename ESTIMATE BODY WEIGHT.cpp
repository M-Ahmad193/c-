#include<iostream>
using namespace std;
int main(){
	double heightInFeet=6;
	int feetAboveFive=heightInFeet-5;
	int inchesAboveFive=feetAboveFive*12;
	int output=110+(inchesAboveFive*5)+(inchesAboveFive+5);
	
	cout<<"HEIGHT IN FEET:"<<heightInFeet<<endl;
	cout<<"ADDITIONAL INCHES:"<<inchesAboveFive<<endl;
	cout<<"your body weight:"<<output<<"pounds"<<endl;
	return 0;


       
	
}

