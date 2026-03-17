#include<iostream>
using namespace std;

int main(){
    int n = 4;
    char c = 65; //97

    for(int i =0 ; i < n ; i++){
        char k = c;
        for(int j = i+1 ; j > 0 ; j--){ 
            cout << k << " ";
            k--;
        }
        c++;
        cout<<endl;
    }
    return 0;
}