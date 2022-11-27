#include <iostream>
using namespace std;
struct TNode{
    int data;
    TNode *next;
};
char ulang;
int agus;

TNode *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(tail==NULL)return 1;
    else return 0;
}

void insertDepan(int databaru)
{
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if(isEmpty()==1)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
    cout<<" Data Telah Masuk\n ";
}

void sisipkan(){
    TNode *baru;
    baru = new TNode;
    baru->next = head->next;
    head->next = baru;
    if(isEmpty()==1)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
    cout<<" Data Telah Masuk\n ";
}

void tampil(){
    TNode *bantu;
    bantu=head;
    if(isEmpty()==0)
    {
        while(bantu!=NULL)
        {
            cout<<bantu->data<<" ";
            bantu=bantu->next;
        }
    }else cout <<" Masih kosong\n ";
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
        cout<<" Data : " <<d<< " terhapus ";
    }else cout<<" Masih kosong\n";
}

void hapusBelakang(){
    TNode*hapus,*bantu;
    int d;
    if (isEmpty()==0){
        if (head->next != NULL){
            bantu=head;
            while(bantu->next->next !=NULL){
                bantu=bantu->next;
            }
            hapus=bantu->next;
            d=hapus->data;
            bantu->next=NULL;
            delete hapus;
        }else{
            d=head->data;
            head=tail=NULL;
        }
        cout<<" Data : " <<d<<" Terhapus\n ";
    }else cout<<" Masih kosong\n ";
}

void clear()
{
    TNode *bantu, *hapus;
    bantu =head;
    while(bantu!=NULL)
    {
        hapus=bantu;
        bantu=bantu->next;
        delete hapus;
    }
    head = NULL;
    printf(" clear ");
}

void hapus(){
    cout<<endl;
    cout<<"      Menghapus Data     "<<endl;
    cout<<" 1. Hapus Depan          "<<endl;
    cout<<" 2. Hapus Belakang       "<<endl;
    cout<<"Pilih: ";cin>>agus;
    switch (agus)
    {
        case 1:
            hapusDepan();
            break;
        case 2:
            hapusBelakang();
            break;
    }
}

int main(){
    int databaru;
    do{
        cout<<endl;
        cout<<"             MENU           "<<endl;
        cout<<" 1. Masukan Data            "<<endl;
        cout<<" 2. Hapus Data          "<<endl;
        cout<<" 3. Tampilkan Data          "<<endl;
        cout<<" 4. Clear Semua Data        "<<endl;
        cout<<" 5. Sisipkan Data           "<<endl;
        cout<<" 6. Exit                    "<<endl;
        cout<<"Pilih: ";cin>>agus;
        switch (agus){
            case 1:
                cout<<" Masukan Data = ";cin>>databaru;
                insertDepan(databaru);
                break;
            case 2:
                hapus();
                break;
            case 3:
                tampil();
                break;
            case 4:
                clear();
                break;
            case 5:
                sisipkan();
                break;
            case 6:
                return 0;
                break;
            default :
                cout<<" \n Maaf, Pilihan yang anda pilih tidak tersedia ";
        }
        cout<<endl;
        cout<<" \n Kembali Ke Menu Utama (Y/T) : ";cin>>ulang;
    }
    while ((ulang=='Y')||(ulang=='y'));
}
