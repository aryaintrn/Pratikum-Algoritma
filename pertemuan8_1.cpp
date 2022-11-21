#include <iostream>

using namespace std;

int main()
{
    int deret[5];
    for(int i=0;i<5;i++){
        cout<<"Index ke"<<i<<"=";
        cin>>deret[i];
    }
    for(int i=0;i<5;i++){
        cout<<deret[i]<<", ";
    }
    return 0;
}
