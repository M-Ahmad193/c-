#include<iostream>
using namespace std;
int main(){
	int r,Weight;
	float boyantForce,volume,specificWeight;
	specificWeight=62.4;
	cout<<"SPECIFIC WEIGHT OF WATER= "<<specificWeight<< " lbf/ft3"<<endl;
	cout<<"ENTER THE WEIGHT(IN POUND)= "<<flush;
	cin>>Weight;
	
	cout<<"ENTER THE RADIUS(IN FEET)= "<<flush;
	cin>>r;
		volume=(4/3)*(3.14*r*r*r);
	boyantForce=volume*specificWeight;
	cout<<"BOUYANT FORCE IS= "<<boyantForce<<endl;
	if (boyantForce>=Weight){
		cout<<"The Object Will Float On The Water"<<endl;
	cout<<"=================================="<<endl;
}
	else{
	cout<<"The Object Will Sink In The Water"<<endl;
	cout<<"=================================="<<endl;
}
	return 0;
}
