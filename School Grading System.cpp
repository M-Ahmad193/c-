#include<iostream>
using namespace std;
int main()
{int marks;
cout<<" — -Program To Find Grade — -"<<endl;
 cout<<"\nEnter Marks: "<<endl;
cin>>marks;
if(marks>=90 && marks<=100) {

cout<<"Your Grade is A .";
}
else if(marks>=80 && marks<=90){
 cout<<"Your Grade is A."<<endl;
 cout<<"TEACHER REMARS:"<<flush;
 cout<<"Excellent Work Keep It Up "<<endl;}
else if(marks>=70 && marks<80){

 cout<<"Your Grade is B."<<endl;
 cout<<"TEACHER REMARS:"<<flush;
 cout<<"Good Work Keep It Up "<<endl;}
else if(marks>=60 && marks<70){

 cout<<"Your Grade is C."<<endl;
 cout<<"TEACHER REMARS:"<<flush;
 cout<<" Fine Work   hard "<<endl;}
else if(marks>=50 && marks<60){
 cout<<"Your Grade is D."<<endl;
 cout<<"TEACHER REMARS:"<<flush;
 cout<<"you should have to improve your self "<<endl;}
else if(marks>=0 && marks<50){

 cout<<"Your Grade is F."<<endl;
 cout<<"TEACHER REMARS:"<<flush;
 cout<<"do not loose hope try again and again "<<endl;}
else cout<<"Invalid Marks."<<endl;
 return 0;
  }
