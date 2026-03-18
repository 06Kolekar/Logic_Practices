#include<iostream>
using namespace std;

int fabbonici(int f){
    int a = 0, b = 1;

    cout << a << " " << b << " ";
     
    for(int i = 2; i < f; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0 ;
}

int main (){
    int n ;
    cout<<"Enter the value : "<<endl;
    cin >> n ;
    fabbonici(n);
    return 0;
}