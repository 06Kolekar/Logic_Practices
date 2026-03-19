#include<iostream>
using namespace std;

int decToBinary(int decTobin){
    int ans = 0 , pow = 1;//Power of 10 , 10 to the power 2 means 10 X 10 = 100.
    while(decTobin > 0){
       int rem = decTobin % 2; // Remainder we will get 0 or 1.
       decTobin /= 2; // here we are we use Quotient to use last number for to get Remainder
       //example 5/2 = we will get Quotient = 1 then = 0 then = 1.
       //so , so the last Remainder (1) to first (1) is consider. Down to up last Remainder 1 0 1 to first
       ans += (rem * pow);
       pow *= 10;
    }
    return ans;
}

