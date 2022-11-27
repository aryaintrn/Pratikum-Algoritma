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

void SisipSesudah(int databaru, int datacari){
    TNode *help, *tambah;
    help = head;
    int find = 0;
    if(isEmpty()==0){
        while((help!=NULL) && (find == 0)){
            if (help->data == datacari) {
                find = 1;
                tambah = new TNode;
                tambah->data = databaru;
                tambah->next = help->next;
                help->next = tambah;
            } else {
                help=help->next;
            }
        }
        if (find == 1) {
            cout<<"Data berhasil ditambahkan"<<endl;
        } else {
            cout<<"Data tidak ditemukan"<<endl;
        }
    } else cout<<("Masih kosong\n");
}

void SisipSebelum(int databaru, int datacari){
    TNode *prev, *tambah;
    TNode *temp = head;

    tambah = new TNode;
    tambah->data = databaru;

    if(isEmpty()==0){
        if (temp != NULL && temp->data == datacari) {
            tambah->next = temp;
            return;
        } else {
            while (temp != NULL && temp->data != datacari) {
                prev = temp;
                temp = temp->next;
                cout<<("Data");
            }
            prev->next = tambah;
            tambah->next = temp;
        }
    } else cout<<("Data Tidak Ada");
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
    int find = 0;
    if(isEmpty()==0){
        while((help!=NULL) && (find == 0)){
            if (help->data == data) {
                find = 1;
            } else {
                help=help->next;
            }
        }
        if (find == 1) {
            cout<<"Data ditemukan"<<endl;
        } else {
            cout<<"Data tidak ditemukan"<<endl;
        }
    } else cout<<("Masih kosong\n");
}

void deldata(int data) {
    TNode *prev;
    TNode *temp = head;
    if(isEmpty()==0){
        if (temp != NULL && temp->data == data) {
            head = temp->next; // Changed head
            delete temp;            // free old head
            return;
        } else {
            while (temp != NULL && temp->data != data) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
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

void clearBlkng(){
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
    cout<<"1.Hapus Data Depan"<<endl;
    cout<<"2.Hapus Data Belakang"<<endl;
    cout<<"Pilih:";cin>>intrn;
    switch (intrn)
    {
        case 1:
            clearDpn();
            break;
        case 2:
            clearBlkng();
            break;
    }
}

void Menudlt(){
    int hps;
    cout<<endl;
    cout<<"1.Hapus Data Tertentu"<<endl;
    cout<<"2.Hapus Data Sesuai Posisi"<<endl;
    cout<<"3.Hapus Seluruh Data"<<endl;
    cout<<"Pilih:";cin>>intrn;
    switch (intrn)
    {
        case 1:
            cout<<"Input Data Yang Akan Di Hapus =";cin>>hps;
            deldata(hps);
            break;
        case 2:
            dlt();
            break;
        case 3:
            clear();
            break;
    }
}

void Sisip(){
    int databaru;
    int lokasi;
    int databaru1;
    int lokasi1;
    cout<<endl;
    cout<<"1.Menyisipkan setelah data"<<endl;
    cout<<"2.Menyisipkan sebelum data"<<endl;
    cout<<"Pilih:";cin>>intrn;
    switch (intrn)
    {
        case 1:
            cout<<"Data Baru =";cin>>databaru;
            cout<<"Lokasi =";cin>>lokasi;
            SisipSesudah(databaru, lokasi);
            break;
        case 2:
            cout<<"Data Baru =";cin>>databaru1;
            cout<<"Lokasi =";cin>>lokasi1;
            SisipSebelum(databaru1, lokasi1);
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
        cout<<"2.Tampilkan Seluruh Data"<<endl;
        cout<<"3.Menu Hapus Data"<<endl;
        cout<<"4.Sisipkan Data"<<endl;
        cout<<"5.Cari Data"<<endl;
        cout<<"6.Keluar"<<endl;
        cout<<"Pilih:";cin>>intrn;
        switch (intrn){
            case 1:
                cout<<"Input Data =";cin>>dta;
                inputDpn(dta);
                break;
            case 2:
                show();
                break;
            case 3:
                Menudlt();
                break;
            case 4:
                Sisip();
                break;
            case 5:
                cout<<"Cari Data =";cin>>cari;
                caridata(cari);
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
    while (repeat=='1');
}
