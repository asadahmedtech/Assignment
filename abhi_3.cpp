#include<iostream>

using namespace std;

int main(){
    int year, NoofDays;
    cin>>year>>NoofDays;

    bool isLeap = false;
    //Leap check
    if(year%4 == 0){
        isLeap = true;
    }

    int date=0,month = 1;
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthCounter = 0;
    while(NoofDays!=0){
        int tempDaysinMonth = daysInMonth[monthCounter];
        if(isLeap && monthCounter == 1){
            tempDaysinMonth = 29;
        }
        if(tempDaysinMonth < NoofDays){
            NoofDays -= tempDaysinMonth;
            month++;
        }
        else if(tempDaysinMonth == NoofDays){
            NoofDays -= tempDaysinMonth;
            date+=tempDaysinMonth;
        }
        else{
            date+=NoofDays;
            NoofDays=0;
        }
        monthCounter++;
        if (monthCounter == 11){
            year++;
            monthCounter = 0;
        }
        
    }
    cout<<date<<"/"<<month<<"/"<<year;
    return 0;
}