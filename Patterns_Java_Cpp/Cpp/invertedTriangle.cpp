#include<iostream>
using namespace std;

int main(){
    int n = 4 ;

    for(int i = 0 ; i < n ; i++){
        
        //first loop for space spring in same row
        for(int s = 0 ; s < i ; s++){
            cout<<" ";
        }

        //second loop for print number in same row
        for(int j = 0 ; j < n-i ; j++){
            cout<< (i+1);
        }
        cout<<endl;
    }
    return 0;
}