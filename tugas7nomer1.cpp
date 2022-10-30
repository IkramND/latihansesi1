#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int c;
char nama[10][20];
int nilai1[10];
int nilai2[10];
int hasil[10];

for(c=1;c<=2;c++){
cout<<"Data Ke - "<<c<<endl;
cout<<"Nama Siswa : ";
cin >> nama[c];
  cout<<"Nilai MidTest : " ; 
  cin>>nilai1[c];
  cout<<"Nilai Final : "; 
  cin>>nilai2[c];
}
  for(c=1;c<=2;c++){
  
  hasil[c] = (nilai1[c]+nilai2[c])/2;
  cout<<endl;
    }
  cout<<"------------------------------------------"<<endl;
cout<<"No. Nama Siswa \t\t Nilai \tNilai\tHasil"<<endl;
cout<<" \t\t\t\t\tMidTest Final   Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(c=1;c<=2;c++)
{
cout<<setiosflags(ios::left)<<setw(4)<<c;
cout<<setiosflags(ios::left)<<setw(19)<<nama[c];
cout<<nilai1[c] <<"     ";
cout<<nilai2[c] <<"      ";
cout<<hasil[c] <<"              "<<endl;
}
cout<<"------------------------------------------"<<endl;
getchar();
}