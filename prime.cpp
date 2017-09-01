#include<iostream>

using namespace std;

int main(){
    int number,factors = 0;
    cin>>number;

    //Main condition for testing prime is factor is greater than 1 then  it's not prime
    for(int i = 2; i<number; i++){
        if(number%i==0){
            factors++;
        }
    }
    if(factors == 0){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"not prime";
    }
    

    return 0;
}