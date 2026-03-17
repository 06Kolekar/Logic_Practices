#include<iostream>
using namespace std;

int main (){
    int n = 4 ;
    char c = 65;

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1; j > 0 ; j--){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}