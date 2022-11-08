//PERTEMUAN 6 KAYANYA
#include <iostream>

using namespace std;

int faktorial(int N){
    if(N > 1){
        return N * faktorial(N-1);
    }else{
        return 1;
    }
}
int main()
{
    int Nilai;
    cout<<"Nilai=";
    cin>>Nilai;
    cout<<Nilai<<"! ="<<faktorial(Nilai) <<endl;

    return 0;
}

//

//#include <iostream>
//
//using namespace std;

void hitung (){
    cout<<"2+3="<< (2+3) <<endl;
    cout<<"selesai==========="<<endl;
}

int total(int a,int b){
    int c;
    c=a + b;
    return c;
}

int main() {
    std::cout << "Hello world!" << endl;
    hitung();
    hitung();
    hitung();

    cout << "total=" << total(3, 4) << endl;
    return 0;
}

//

//#include <iostream>
//
//using namespace std;

void hitung (){
    cout<<"2+3="<< (2+3) <<endl;
    cout<<"selesai==========="<<endl;
}

int total(int a,int b){
    int c;
    c=a + b;
    return c;
}

int main()
{
    std::cout << "Hello world!"<<endl;
    hitung();
    hitung();
    hitung();

    cout<<"total="<< total(3,4)<<endl;

    return 0;
}