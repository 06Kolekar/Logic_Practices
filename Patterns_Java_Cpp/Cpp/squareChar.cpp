#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0 ; i < n ; i++){
        char c = 97; // 65

        for(int j = 0 ; j < n ; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }

    return 0;
}