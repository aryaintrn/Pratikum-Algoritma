#include <iostream>

using namespace std;

int main()
{
    int Tiga[3][2][4]={{{1,2,3,4},{1,2,3,4}},{{1,2,3,4},{1,2,3,4}},{{1,2,3,4},{1,2,3,4}}};
    
    for(int b=0;b<3;b++){
        for(int k=0;k<2;k++){
            for(int d=0;d<4;d++){
                cout<<"{"<<Tiga[b][k][d]<<"}";
            }
            cout<<"|";
        }
        cout<<endl;
    }

    return 0;
}
