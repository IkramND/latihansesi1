#include <iostream>

using namespace std;

string nama,hadiah;

int nilai1,nilai2,nilai3,rata;

int main()

{
  cout << "Program hitung nilai rata rata\n";

 int x;

 cout << "Nama siswa: "; // Type a number and press enter

 cin >> nama; // Get user input from the keyboard

 cout << "Nilai Pertandingan I: ";

 cin >> nilai1;

 cout << "Nilai Pertandingan II: ";

 cin >> nilai2;

 cout << "Nilai Pertandingan III: ";

 cin >> nilai3;

 rata = (nilai1+nilai2+nilai3)/3;

 if(rata>=85){

     hadiah="Komputer I5";

 }else if(rata>=70){

     hadiah="hadiah Uang sebesar Rp. 2.500,000";

 }else{

     hadiah="hadiah Hiburan";

 }

 

 cout << "siswa yang bernama " << nama <<" memperoleh nilai rata rata " << rata << " dari hasil perlombaannya hadiah yang didapatkannya adalah " << hadiah;

 return 0;

}