#include <iostream>

using namespace std;
// Array 2 dimensi
int main()
{
    int matrik[3][2]={{1,2},{3,4},{5,6}};
    for(int b=0;b<3;b++){
        for(int k=0;k<2;k++){
            cout<<matrik[b][k]<<" ";    
        }
        cout<<endl;
    }
    return 0;
}
