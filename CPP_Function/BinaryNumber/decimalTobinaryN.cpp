#include<iostream>
using namespace std;

int dectoBinary(int decimal){
    int binary = 0 , pow = 1 ;
    while(decimal > 0) {
        int rem = decimal %2;
        decimal /= 2;
        binary +=(rem * pow);
        pow *= 10;
    }
    return binary;
}

int main(){
    int n;
    cout<<"Enter the decimal number : ";
    cin >> n;
    for(int i = 0 ; i <= n ; i++){
        cout<<"Result of decimal - "<< i << " to binary : " << dectoBinary(i) <<endl;
    }
    return 0;
}