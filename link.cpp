#include <iostream>
using namespace std;

struct TNode{
    int data;
    TNode *next;
};

int intrn;
char repeat;
TNode *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(tail==NULL)return 1;
    else return 0;
}

void inputDpn(int dta)
{
    TNode *tambah;
    tambah = new TNode;
    tambah->data = dta;
    tambah->next = NULL;
    if(isEmpty()==1)
    {
        head=tail=tambah;
        tail->next=NULL;
    }else
    {
        tambah->next = head;
        head=tambah;
    }
    cout<<"Berhasil\n ";
}

void newInput(){
    TNode *tambah;
    tambah = new TNode;
    tambah->next = head->next;
    head->next = tambah;
    if(isEmpty()==1)
    {
        head=tail=tambah;
        tail->next=NULL;
    }else
    {
        tambah->next = head;
        head=tambah;
    }
    cout<<"Berhasil\n ";
}

void show(){
    TNode *help;
    help=head;
    if(isEmpty()==0)
    {
        while(help!=NULL)
        {
            cout<<help->data<<" ";
            help=help->next;
        }
    }else cout <<"Data Kosong\n ";
}

void caridata(int data) {
    TNode *help;
    help = head;
    int ketemu = false;
    if(isEmpty()==0){
        while(help!=NULL && !ketemu){
            if (help->data == data) {
                ketemu == true;
            } else {
                help=help->next;
            }
        }
        if (ketemu) {
            cout<<"Data ditemukan"<<endl;
        } else {
            cout<<"Data tidak ditemukan"<<endl;
        }
    } else cout<<("Masih kosong\n");
}

void clearDpn(){
    TNode *hapus;
    int d;
    if (isEmpty()==0)
    {
        if(head!=tail)
        {
            hapus=head;
            d=hapus->data;
            head=head->next;
            delete hapus;
        }else
        {
            d=tail->data;
            head=tail=NULL;
        }
        cout<<d<< "Terhapus ";
    }else cout<<"Data Kosong\n";
}

void batal(){
    cout<<"Hapus File Dibatalkan"<<endl;
}

void clear()
{
    TNode *help, *hapus;
    help =head;
    while(help!=NULL)
    {
        hapus=help;
        help=help->next;
        delete hapus;
    }
    head = NULL;
    printf("Berhasil");
}

void dlt(){
    cout<<endl;
    cout<<"1.Confirm"<<endl;
    cout<<"2.Batal"<<endl;
    cout<<"Pilih:";cin>>intrn;
    switch (intrn)
    {
        case 1:
            clearDpn();
            break;
        case 2:
            batal();
            break;
    }
}

int main(){
    int dta;
    int cari;
    do{
        cout<<endl;
        cout<<"Pilih Menu:"<<endl;
        cout<<"1.Input Data"<<endl;
        cout<<"2.Hapus Data"<<endl;
        cout<<"3.Munculkan Data"<<endl;
        cout<<"4.Hapus Semua Data"<<endl;
        cout<<"5.Sisipkan Data"<<endl;
        cout<<"6.Sisipkan Data"<<endl;
        cout<<"7.Keluar"<<endl;
        cout<<"Pilih:";cin>>intrn;
        switch (intrn){
            case 1:
                cout<<"Input Data =";cin>>dta;
                inputDpn(dta);
                break;
            case 2:
                dlt();
                break;
            case 3:
                show();
                break;
            case 4:
                clear();
                break;
            case 5:
                newInput();
                break;
            case 6:
                cout<<"Cari Data =";cin>>cari;
                caridata(cari);
                break;
            case 7:
                return 0;
                break;
            default :
                cout<<"Tidak Tersedia";
        }
        cout<<endl;
        cout<<"Pilih Menu:"<<endl;
        cout<<"1.Menu Utama"<<endl;
        cout<<"2.Keluar"<<endl;
        cout<<"Pilih =";
        cin>>repeat;
    }
    while ((repeat=='1')||(repeat=='1'));
}
