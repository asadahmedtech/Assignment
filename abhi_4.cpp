#include<iostream>

using namespace std;

int main(){
    int numberofdays ;
    float fine = 0.0;
    
    cin>>numberofdays;

    if(numberofdays<6){
        fine = numberofdays*0.5;
        cout<<"FINE : Rs"<<fine<<endl;

    }
    else if(numberofdays<11){
        fine = numberofdays*1.5;
        cout<<"FINE : Rs"<<fine<<endl;
    }
    else if(numberofdays>10){
        fine = numberofdays*5.5;
        cout<<"FINE : Rs"<<fine<<endl<<"MEMBERSHIP CANCELLED";
    }
    return 0;
}