#include <iostream>
using namespace std;

int main ()
{
double weight,shipcharge,price,totalCharge;
string country,city,location;

cout << "Please enter the weight in kilograms of your package: ";
cin>>weight;
price=weight*2;
cout<<"price of stamps in $ is="<<price<<endl;
cout << "Please enter the location(destination) of parcel to be shipped "<<endl;
cout <<"write 'city' if within city or write 'country' if delivery anywhere else in the country: ";
cin>>location;
if (location == city){
shipcharge = 20;

}
else if (location == country){
shipcharge = 40;

}
totalCharge = price + 20;

cout << "Your total charge is : " << totalCharge <<"$"<< endl;
return 0;
}

