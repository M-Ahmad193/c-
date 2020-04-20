#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
    double p ;
    double g ; 
	cout<<"Enter percentage: "<<flush; 
	cin>>p;
	 if (p >=90 && p <=100)
        g = 4.0;
    else if (p >=80 && p <=90)
        g = 3.75;
    else if (p >=75 && p <=80)
        g = 3.5; 
    else if (p >=70 && p <=75)
        g = 3.00;
    else if(p >=65 && p <=70)
        g = 2.5; 
    else if (p >=60 && p <=65)
        g = 2.00;
    else if (p >=55 && p <=60)
        g = 1.5; 
    else if (p >=50 && p <=55)
        g = 1.00; 
    else if (p <50)
        g = 0.0;
    cout<<"your GPA is: "<<g<<flush;
    return 0; 
}
