// WITHOUT LOOP

#include <iostream>

using namespace std;

int main()
{
    int deret[5]={2,3,4,5,6};

    cout<<"Index ke 1 ="<<endl;
    cout<< deret[1] <<endl;


    return 0;
}

// WITH LOOP


int main()
{
    int deret[5]={2,3,4,5,6};

    for(int i=0;i<5;i++){
        cout<<"Index ke"<< i << "=" << deret[i] <<endl;
    }


    return 0;
}

// PARAMETER

#include <iostream>

using namespace std;

bool cetak(int A[]){
    if(A[0]>0){
        for(int i=0;i<5;i++){
            cout<<"Index ke"<< i << "=" << A[i] <<endl;
        }
        return true;
    }else{
        return false;
    }
}

int main()
{
    int deret[5]={2,3,4,5,6};
    if (cetak(deret)==true){
        cout<<"Sukses"<<endl;
    }else{
        cout<<"Gagal"<<endl;
    }
    return 0;
}
