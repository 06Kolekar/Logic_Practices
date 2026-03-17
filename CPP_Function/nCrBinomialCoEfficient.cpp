#include<iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for(int i = x ; i > 0 ; i--){
        fact *= i;
    }
    return fact;
}

int nCr(int n , int r){
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nrFact = factorial(n-r);
    int nCr = nFact / (rFact * nrFact);

    return nCr;
}

int main(){
    int n = 8 , r = 2;

    cout<<"nCr = "<<nCr(n , r)<<endl;
    return 0;
}