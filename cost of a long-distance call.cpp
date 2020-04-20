#include<iostream>
using namespace std;
int main()
{
    int startTime, minutes;
    double cost;
    char first, second, choice('Y');
    do {
        cout<<"When did the call start?"<<endl;
        cout<<"Please enter the time in 24-hour notation."<<endl;
        cin>>startTime;
        cout<<"How long did the call last?"<<endl;
        cin>>minutes;
        cout<<"Please enter the first two letters of the day of the call."<<endl;
        cin>>first>>second;
        if (((first=='M')||(first=='m'))&&((second=='O')||(second=='o'))){
            if ((startTime>=('8:00'))||(startTime<='18:00'))
            {
                cost=minutes*.40;
            }
            else{
                cost=minutes*.25;
            }
        } 
        else if (((first=='T')||(first=='t'))&&((second=='U')||(second=='u'))){
            if ((startTime>='8:00')||(startTime<='18:00'))
            {
                cost=minutes*.40;
            }
            else{
                cost=minutes*.25;
            }
        }
        else if (((first=='W')||(first=='w'))&&((second=='E')||(second=='e'))){
           if ((startTime>='8:00')||(startTime<='18:00'))
            {
                cost=minutes*.40;
            }
           else{

                cost=minutes*.25;
            }
        }
        else if (((first=='T')||(first=='t'))&&((second=='H')||(second=='h'))){
             if ((startTime>='8:00')||(startTime<='18:00'))
            {
                cost=minutes*.40;
            }
            else{
		            cost=minutes*.25;
           }
       }
    else if (((first=='F')||(first=='f'))&&((second=='R')||(second=='r'))){
             if ((startTime>='8:00')||(startTime<='18:00')){
                cost=minutes*.40;
            }
           else{
                cost=minutes*.25;
            }
        }
        else if (((first=='S')||(first=='s'))&&((second=='A')||(second=='a'))){
            cost=minutes*.15;
        }
        else if (((first=='S')||(first=='s'))&&((second=='U')||(second=='u'))){
          cost=minutes*.15;
        }
        cout<<"The cost of the call is "<<cost<<endl;
        cout<<endl;
        cout<<"Do you want to rerun the program? Y or N"<<endl;
        cin>>choice;
       cout<<endl;
   }while ((choice=='Y')||(choice=='y'));
    return 0;
}

