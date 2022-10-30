#include<iostream>
using namespace std;
   
int main() {
      
       int angka, jumlah, max, min;
     
       cout << "Mencari nilai terbesar dan terkecil. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;
    
       for (int c = 1; c <= jumlah; c++) {
     
       cout << "Masukkan Angka       : "; cin >> angka;
   
       if ( c == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }
    
       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
       cout << "Nilai terbesar           : " <<  max << endl;
    
       getchar();
} 