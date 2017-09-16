#include<iostream>

using namespace std;

int main(){

    int limit;//the number upto which prime number should be printed
    cin>>limit;

    for(int i =2; i<limit; i++){
        
        //Code to check whether i is prime or not
        int factorcounter = 0;
        for(int j = 2; j<i; j++){
            if(i%j==0){
                factorcounter++;
                break;
            }
        }

        //printing if it's prime
        if(factorcounter==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
