#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){

    int menu,sm,p,l,k,a,s,b,t,sa,sb,sc;
    float luas;
    cout<<"Menghitung Menu Segitiga"<<endl;
    cout<<"Segitiga Siku-Siku"<<endl;
    cout<<"1 : Sisi Miring | 2 : Luas | 3 : Keliling | 4 : keluar program |"<<endl;
    cout<<"masukan kode menu : ";
        cin>>menu;

    switch(menu){
        case 1 :    {
                    cout<<"menghitung sisi miring segitiga"<<endl;
                    cout<<"masukan alas = "; cin>>a;
                    cout<<"masukan tinggi = "; cin>>b;
                    sm=sqrt((a*a)+(b*b));
                    cout<<"sisi miring segitiga   = " <<sm;
                    };
                    break;
        case 2 :    {
                        cout<<"menghitung luas segitiga"<<endl;
                        cout<<"masukan alas   = "; cin>>a;
                        cout<<"masukan tinggi = "; cin>>t;
                        l=t*a/2;
                        cout<<"luas segitiga  = " <<l;
                    };
                    break;
        case 3 :    {
                        cout<<"menghitung keliling segitiga"<<endl;
                        cout<<"masukan sisi a      	= "; cin>>sa;
                        cout<<"masukan sisi b    	= "; cin>>sb;
                         cout<<"masukan sisi c	  	= "; cin>>sc;
                        k=sa+sb+sc;
                        cout<<"keliling segitiga  = " <<k;

                    };
                    break;
        case 4 :    {
        				keluar:
                        cout<<" Keluar Program "<<endl;
                       

                    };
                    break;

    default : cout<<"Menu Yang Anda Input Salah";
    }
}

