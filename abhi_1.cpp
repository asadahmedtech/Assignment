#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int lowerlimit;
    cin>>lowerlimit;

    bool palindromefound = false;

    while(!palindromefound){
        lowerlimit++;
        int num = lowerlimit;
        int tempRev = 0,digit = 0;

        //number of digit calculation
        while(num!=0){
            num/=10;
            digit++;
        }
        num = lowerlimit;
        
        //reversing the number
        while(num!=0){
            digit--;
            tempRev+=(num%10)*pow(10, digit);
            num/=10;
        }
        
        if(tempRev == lowerlimit){
            cout<<lowerlimit<<endl;
            palindromefound = true;
        }
    }
    return 0;
}