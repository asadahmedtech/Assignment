#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,x,k;
    float sum = 0.0;

    cout<<"Enter n , x, k"<<endl;
    cin>>n>>x>>k;

    for(int i = 0; i<k; i++){
        int tempSumofN = 1, fact = 1;
        for(int j = 0; j<i; j++){
            tempSumofN*=(n-j);
            fact*=(j+1);
        }
        sum+=(tempSumofN * pow(x, i))/fact;
    }
    cout<<sum;
    return 0;
}