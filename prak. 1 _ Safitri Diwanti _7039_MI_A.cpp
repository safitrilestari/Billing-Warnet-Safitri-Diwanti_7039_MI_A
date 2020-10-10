/* billing warnet safitri diwanti - 7039*/

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	cout<<"===BILLING WARNET SAFITRI==="<<endl;
	cout<<"============================"<<endl;
	char nama[100];
	int totjam,jam;
	int totmenit,menit;
	int totdetik,detik;
	int totw;
	
	cout<<" : ";
	cin.getline(nama,100);
	cout<<"masukkan jam pengguna	:	";
	cin>>jam;
	cout<<"masukkan menit pengguna	:	";
	cin>>menit;
	cout<<"masukkan detik pengguna	:	";
	cin>>detik;
	totjam=5000*jam;
	totmenit=menit*5000/60;
	totdetik=detik*5000/3600;
	cout<<"jumlah billing warnet SAFITRI : RP. ";
	totw = totjam+totmenit+totdetik;
	cout<<totw<<endl;
	getch();
}
