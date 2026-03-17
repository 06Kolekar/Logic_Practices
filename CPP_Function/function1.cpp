#include<iostream>
using namespace std;

int sumOfNumber(int x){
    int sum=0;
    // for(int i = x ; i !=0 ; i=(i/10)){
    //     sum += i%10;
    // }
    // while(x != 0){
    //     sum +=x%10;
    //     x /= 10;
    // }
    do{
        sum += x%10;
        x /= 10;
    }while(x != 0);
    
    return sum;
}

int main () {
    cout<<sumOfNumber(555);
    return 0;
}