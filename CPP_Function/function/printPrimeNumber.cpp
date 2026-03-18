#include<iostream>
#include<cmath>
using namespace std;

bool prime(int p){
    if(p < 2){
        return false;
    }
    // for(int i = 2 ; i <= sqrt(p) ; i++){
    for(int i = 2 ; i*i <= p ; i++){
       if(p%i == 0){
        return false;
       }
    }
    return true;
}

int main(){
    int n ;
    cout<<"Enter the number : "<<endl;
    cin >> n;
    cout<<"Prime Number are "<<endl;

    for(int i = 2 ; i <= n ; i++){
        if(prime(i)){
            cout<< i << endl;
        }
    }
    return 0;
}