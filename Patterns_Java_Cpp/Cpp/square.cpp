#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0 ; i < n ; i++){ //outer loop new line
        for(int j = 0 ; j <= (n-1) ; j++){// inner loop row operation or logic or work on single line
            //cout<<j<<" ";
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}