# include <stdio.h>
# include <iostream>
# include <conio.h>
using namespace std;
main()
{
char nama[20],*Grade;
float nk,nt,nu,nmk,nmt,nmu,na;
cout<<"Program Hitung Nilai Akhir Siswa\n";
cout<<"   Masukkan Nama Siswa : ";gets(nama);
cout<<"   Nilai Keaktifan     : ";cin>>nk;
cout<<"   Nilai Tugas         : ";cin>>nt;
cout<<"   Nilai Ujian         : ";cin>>nu;
nmk=nk*0.2;
nmt=nt*0.3;
nmu=nu*0.5;
na=nmk+nmt+nmu;
if(na>=80)
{
Grade="A";
}
else if(na>=70)
{
Grade="B";
}
else if(na>=59)
{
Grade="C";
}
else if(na>=50)
{
Grade="D";
}
else
{
Grade="E";
}
cout<<endl;
cout<<"     Siswa Yang Bernama "<<nama<<endl;
cout<<"     Dengan nilai presentase yang dihasilkan"<<endl;
cout<<"     Nilai Murni Keaktifan x 20%    : "<<nmk<<endl;
cout<<"     Nilai Murni Tugas     x 30%    : "<<nmt<<endl;
cout<<"     Nilai Murni Ujian     x 50%    : "<<nmu<<endl;
cout<<"     Memperoleh Nilai Akhir Sebesar : "<<na<<endl;
cout<<"     Grade yang di dapat            : "<<Grade<<endl;
getch();
}
