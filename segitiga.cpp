#include <iostream>

using namespace std;

int main(){
    int N;
    cout<<"N=";
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int j=N-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "##  Program C++ Segitiga Angka  ##" << endl;
//    cout << "==================================" << endl;
//    cout << endl;
//
//    int tinggi_segitiga,i,j;
//
//    cout << "Input tinggi segitiga: ";
//    cin >> tinggi_segitiga;
//
//    cout << endl;
//
//    for(i=1;i<=tinggi_segitiga;i++) {
//        for(j=1;j<=i;j++) {
//            cout << i <<" ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}