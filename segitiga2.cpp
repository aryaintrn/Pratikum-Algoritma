#include <iostream>
using namespace std;

int main(){
    int a, b, jmlh;
    cout<<"Masukan Jumlah=";
    cin>>jmlh;

    for (a = 1; a<=jmlh; a++){
        for (b = 1; b<=jmlh-a; b++){
            cout<<" ";
        }
        for(b = 1; b<=a; b++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}