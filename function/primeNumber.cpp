#include<iostream>
#include<cmath>
using namespace std;

bool prime(int p){
    int count = 0;
    
    if(p < 2){
        return false;
    }
    for(int i = 2 ; i <= sqrt(p) ; i++ ){
        if(p%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Enter the Number" << endl;
    cin >> num;
    if(prime(num)){
        cout<< "The Number is prime"<<"\n";
    }else{
        cout<<"The number is not prime"<<endl;
    }
    return 0;
}