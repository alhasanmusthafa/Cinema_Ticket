#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main ()
{
    char kode_bioskop,usia,mulai_kembali;
    int harga_tiket,bayar,jam,kursi,tot,tiket,kembali;
    do
    {
        printf("\n____________________ HARGA TIKET BIOSKOP _____________________\n");
        cout<<"\n==============================================================\n";
        cout<<"Informasi Usia:          Children                   Adult          \n";
        cout<<"                    5-15 Years Old(E)       16-... Years Old(B)   \n";
        cout<<"==============================================================\n";
        cout<<"1. Ghostbusters         Rp.30000                  Rp.45000        \n";
        cout<<"2. Resident Evil        Rp.50000                  Rp.65000        \n";
        cout<<"3. Hawkeye              Rp.35000                  Rp.50000        \n";
        cout<<"4. Encanto              Rp.35000                  Rp.45000        \n";
        cout<<"==============================================================\n";
        printf("\n________________________ Pilih Film _________________________\n");
        cout<<"\nMasukan Kode Film [1-4]             : ";
        cin>>kode_bioskop;
        switch(kode_bioskop)
        {
            case '1':
            {
                cout<<"Film Yang Anda Pilih                : Ghostbusters\n"<<endl;
                cout<<"==============================================================\n";
                printf("\n__________________ Silahkan pilih jam tayang __________________\n");
                cout<<" 1. 10.00 WIB"<<endl;
                cout<<" 2. 13.30 WIB"<<endl;
                cout<<" 3. 15.45 WIB"<<endl;
                cout<<" 4. 18.00 WIB"<<endl;
                cout<<" Pilih salah satu                   :"; cin>>jam;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih kursi 1-100"<<endl;
                cout<<""<<endl;
                cout<<" Pilih no. kursi                    :"; cin>>kursi;
                cout<<"==============================================================\n";
                cout<<"\nMasukan Kode Usia [E/B]             : ";
                cin>>usia;
                cout<<endl;
                if (usia=='E' || usia=='e')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 50000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                else if (usia=='B' || usia=='b')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 70000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                break;
            }
            case '2':
            {
                cout<<"Film Yang Anda Pilih                : Resident Evil\n"<<endl;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih jam tayang          :             \n"<<endl;
                cout<<" 1. 10.00 WIB"<<endl;
                cout<<" 2. 13.30 WIB"<<endl;
                cout<<" 3. 15.45 WIB"<<endl;
                cout<<" 4. 18.00 WIB"<<endl;
                cout<<" Pilih salah satu                   :"; cin>>jam;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih kursi 1-100"<<endl;
                cout<<""<<endl;
                cout<<" Pilih no. kursi                    :"; cin>>kursi;
                cout<<"==============================================================\n";
                cout<<"\nMasukan Kode Usia [E/B]             : ";
                cin>>usia;
                cout<<endl;
                if (usia=='E' || usia=='e')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 50000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                else if (usia=='B' || usia=='b')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 65000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                break;
            }
            case '3':
            {
                cout<<"Film Yang Anda Pilih                : Hawkeye\n"<<endl;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih jam tayang          :             \n"<<endl;
                cout<<" 1. 10.00 WIB"<<endl;
                cout<<" 2. 13.30 WIB"<<endl;
                cout<<" 3. 15.45 WIB"<<endl;
                cout<<" 4. 18.00 WIB"<<endl;
                cout<<" Pilih salah satu                   :"; cin>>jam;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih kursi 1-100"<<endl;
                cout<<""<<endl;
                cout<<" Pilih no. kursi                    :"; cin>>kursi;
                cout<<"==============================================================\n";
                cout<<"\nMasukan Kode Usia [E/B]             : ";
                cin>>usia;
                cout<<endl;
                if (usia=='E' || usia=='e')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 35000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                else if (usia=='B' || usia=='b')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 50000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                break;
            }
            case '4':
            {
                cout<<"Film Yang Anda Pilih                : Encanto\n"<<endl;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih jam tayang          :             \n"<<endl;
                cout<<" 1. 10.00 WIB"<<endl;
                cout<<" 2. 13.30 WIB"<<endl;
                cout<<" 3. 15.45 WIB"<<endl;
                cout<<" 4. 18.00 WIB"<<endl;
                cout<<" Pilih salah satu                   :"; cin>>jam;
                cout<<"==============================================================\n";
                cout<<" Silahkan pilih kursi 1-100"<<endl;
                cout<<""<<endl;
                cout<<" Pilih no. kursi                    :"; cin>>kursi;
                cout<<"==============================================================\n";
                cout<<"\nMasukan Kode Usia [E/B]             : ";
                cin>>usia;
                cout<<endl;
                if (usia=='E' || usia=='e')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 35000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                else if (usia=='B' || usia=='b')
                {
                    cout<<"==============================================================\n";
                    harga_tiket = 45000;
                    cout<<" Harga Tiket                    : Rp. "<<harga_tiket<<endl;
                    cout<<" Jumlah pesan tiket             : "; cin>>tiket;
                    tot=harga_tiket*tiket;
                    cout<<" Harga total pembayaran         : Rp. "<<tot<<endl;
                    cout<<" Uang Yang Dibayarkan           : Rp. "; cin>>bayar;
                    if (bayar<<tot)
                    cout<<endl;
                    kembali=bayar-tot;
                    cout<<" Uang Kembalian Anda            : Rp. "<<kembali<<endl;
                }
                break;
            }
            default:
            cout<<"Anda Salah Memasukan Kode"<<endl;
        }
        printf("\nAnda Ingin Memesan Kembali [Y/T]   : ");
        cin>>mulai_kembali;
    }
    while(mulai_kembali=='Y' || mulai_kembali=='y');
    getch();
}
