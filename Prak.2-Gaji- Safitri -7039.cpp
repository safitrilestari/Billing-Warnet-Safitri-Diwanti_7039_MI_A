#include <iostream>
using namespace std;
int main(){
    char nama[40];
    int gaji_pokok[4]={6000,8000,8000,10000},gaji_lembur[4]={4000};
    int jp,jl,gp,lembur,gaji;
    string golongan,verifikasi;
    do{
    cout<<"Program Gaji Karyawan PT.SafitriLine\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|   Golongan    |      Gaji     |   Lembur/jam    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|       A       |    Rp5000     |      Rp4000     |\n";
    cout<<"|       B       |    Rp7000     |      Rp4000     |\n";
    cout<<"|       C       |    Rp8000    |      Rp4000     |\n";
    cout<<"|       D       |    Rp10000    |      Rp4000     |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|      Jam      |       48      |       > 48      |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"Input Data Karyawan\n";
    cout<<"Nama Lengkap : ";cin.getline(nama,40);
    cout<<"Golongan     : ";cin>>golongan;
    if(golongan=="a"|| golongan=="A"){
        cout<<"Masukan Jam Kerja : ";cin>>jp;
        if(jp>48){
            jl=jp-48;
            lembur=jl*gaji_lembur[0];
            gp=jp*gaji_pokok[0];
            gaji=gp+lembur;
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine              |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp";cout<<lembur;
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gaji<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }else{
            gp=jp*gaji_pokok[0];
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine               |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp0";
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gp<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }
    }if(golongan=="b"|| golongan=="B"){
        cout<<"Masukan Jam Kerja : ";cin>>jp;
        if(jp>48){
            jl=jp-48;
            lembur=jl*gaji_lembur[1];
            gp=jp*gaji_pokok[1];
            gaji=gp+lembur;
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine            |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp";cout<<lembur;
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gaji<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }else{
            gp=jp*gaji_pokok[1];
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine              |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp0";
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gp<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }
    }if(golongan=="c"|| golongan=="C"){
        cout<<"Masukan Jam Kerja : ";cin>>jp;
        if(jp>48){
            jl=jp-48;
            lembur=jl*gaji_lembur[2];
            gp=jp*gaji_pokok[2];
            gaji=gp+lembur;
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine              |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp";cout<<lembur;
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gaji<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }else{
            gp=jp*gaji_pokok[2];
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine             |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp0";
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gp<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }
    }if(golongan=="d"|| golongan=="D"){
        cout<<"Masukan Jam Kerja : ";cin>>jp;
        if(jp>48){
            jl=jp-48;
            lembur=jl*gaji_lembur[3];
            gp=jp*gaji_pokok[3];
            gaji=gp+lembur;
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine              |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp";cout<<lembur;
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gaji<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }else{
            gp=jp*gaji_pokok[3];
            cout<<"\n-------------------------------------";
            cout<<"\n| Slip Gaji PT.SafitriLine              |\n";
            cout<<"-------------------------------------\n";
            cout<<" Nama Karyawan : ";cout<<nama;
            cout<<"\n Gaji Pokok    : Rp";cout<<gp;
            cout<<"\n Gaji Lembur   : Rp0";
            cout<<"\n-------------------------------------\n";
            cout<<"| Jumlah Gaji    : Rp";cout<<gp<<"         |";
            cout<<"\n-------------------------------------\n";
            cout<<"Apakah anda ingin mengulanginya lagi?(Y/n) ";
            cin>>verifikasi;
        }
    }
   
    }while(verifikasi!="n");
    return 0;
}


