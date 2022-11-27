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

void MasukanDepan(int dta)
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

void Selip(){
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

void Muncul(){
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

void hapusDepan(){
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

void clearBelakang(){
    TNode*hapus,*help;
    int d;
    if (isEmpty()==0){
        if (head->next != NULL){
            help=head;
            while(help->next->next !=NULL){
                help=help->next;
            }
            hapus=help->next;
            d=hapus->data;
            help->next=NULL;
            delete hapus;
        }else{
            d=head->data;
            head=tail=NULL;
        }
        cout<<d<<"Terhapus\n ";
    }else cout<<"Data Kosong\n ";
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
    printf(" clear ");
}

void hapus(){
    cout<<endl;
    cout<<"1.Hapus Depan"<<endl;
    cout<<"2.Hapus Belakang"<<endl;
    cout<<"Pilih:";cin>>intrn;
    switch (intrn)
    {
        case 1:
            hapusDepan();
            break;
        case 2:
            clearBelakang();
            break;
    }
}

int main(){
    int dta;
    do{
        cout<<endl;
        cout<<"Pilih Menu:"<<endl;
        cout<<"1.Input Data"<<endl;
        cout<<"2.Hapus Data"<<endl;
        cout<<"3.Munculkan Data"<<endl;
        cout<<"4.Hapus Semua Data"<<endl;
        cout<<"5.Sisipkan Data"<<endl;
        cout<<"6.Keluar"<<endl;
        cout<<"Pilih:";cin>>intrn;
        switch (intrn){
            case 1:
                cout<<"Input Data =";cin>>dta;
                MasukanDepan(dta);
                break;
            case 2:
                hapus();
                break;
            case 3:
                Muncul();
                break;
            case 4:
                clear();
                break;
            case 5:
                Selip();
                break;
            case 6:
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
