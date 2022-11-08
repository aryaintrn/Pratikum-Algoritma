//KAYANYA INI PERTEMUAN 2
#include <iostream>

using namespace std;

int main()
{
    //typedata namavariable = value;
    int A=9;
    int B=8;
    bool isA=true;
    bool isB=false;

    //Operator Aritmatika
    //+ - * / mod
    cout<<"A + B="<< (A + B) <<endl;
    cout<<"A - B="<< (A - B) <<endl;
    cout<<"A / B="<< (A / B) <<endl;
    cout<<"A * B="<< (A * B) <<endl;
    cout<<"A mod B="<< (A % B) <<endl;



    //Operator Logika
    //and or xor not
//    cout<<"isA and isB="<< isA && isB <<endl;//konjungsi
//    cout<<"isA or isB="<< isA || isB <<endl;//disjungsi
//    cout<<"isA xor isB="<< isA ^ isB <<endl;//eklusif or
//    cout<<"not isA="<< !isA <<endl;

    //operator relasi
    // >  <  >=  <=  !=  ==
    cout<<"A > B="<< (A > B) <<endl;
    cout<<"A < B="<< (A < B) <<endl;
    cout<<"A >= B="<< (A >= B) <<endl;
    cout<<"A <= B="<< (A <= B) <<endl;
    cout<<"A <> B="<< (A != B) <<endl;
    cout<<"A = B="<< (A == B) <<endl;
    return 0;
}