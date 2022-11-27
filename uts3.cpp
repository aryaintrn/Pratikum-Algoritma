#include <iostream>

using namespace std;

int main()
{
    int hari =5 ;
    cout << "Masukkan Angka =";
    cin >> hari ;

    switch(hari){
        case 1 :
            cout << "Senin";
            break;
        case 2 :
            cout << "Selasa";
            break;
        case 3 :
            cout << "Rabu";
            break;
        case 4 :
            cout << "Kamis";
            break;
        case 5 :
            cout << "Jumat";
            break;
        case 6 :
            cout << "Sabtu";
            break;
        case 7 :
            cout << "Minggu";
            break;
        default :
            cout << "Masukkan Angka 1-7" << endl ;
            main();
    }
    return 0;
}