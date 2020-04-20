#include<iostream>
using namespace std;
int main(){
	double noOfMilGrm;
	double reqNoOfMilGrm;
	double totalDriks;
    
    
	cout<<"ENTER NUMBER OF MILIGARAMS OF CAFFIEINE IN A DRINK: "<<flush;
	cin>>noOfMilGrm;
	 reqNoOfMilGrm=10000-noOfMilGrm;
	cout<<"Required No. of Miligrams to die: "<<reqNoOfMilGrm<<flush<<endl;
	totalDriks=reqNoOfMilGrm/noOfMilGrm;//if totalDriks is in points then increase by one 
 	
 	cout<< "Drinks to kill a Person:"<<totalDriks<<flush;
	 return 0; 
	
	
	
}
