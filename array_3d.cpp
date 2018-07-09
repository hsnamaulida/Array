#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void array_angka(){
 //Mendeklarasikan array
 int angka[2][5][2]={{{10,2},{8,20},{2,79},{4,67},{8,21}},
       {{10,27},{27,48},{83,28},{2,73},{4,98}}};
 
 //Menampilkan array
 for(int i = 0; i<=1; i++){
  cout<<i+1<<".\n";
  for(int j = 0; j<=4; j++){
   for(int k = 0; k<=1; k++){
    cout<<angka[i][j][k]<<"\t";
   }
   cout<<endl;
  }
  cout<<endl;
 }
}

void array_huruf(){
 string huruf[2][3][2]={{{"Nama","\t  Hasna Maulida"},{"Jurusan","Teknik Informatika"},{"Teori","Array 3 Dimensi"}},
    {{"Mata Kuliah","Struktur Data"},{"Semester","Genap"},{"Fokus","Pemrograman"}}};
       
 //Memanggil array
 for(int i = 0; i<=1; i++){
  cout<<i+1<<".\n";
  for(int j = 0; j<=2; j++){
   cout<<j+1<<".";
   for(int k = 0; k<=1; k++){
    cout<<" "<<huruf[i][j][k]<<"\t\t ";
   }
   cout<<endl;
  }
  cout<<endl;
 }
}

int main(){
 array_huruf();
 return 0;
 getch();
}
