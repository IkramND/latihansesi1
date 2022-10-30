#include <iostream>
#include <string.h>

using namespace std;
int main(){
  char kalimat[100];
  cout << "Masukan kalimat = \n";
  cin.getline(kalimat, sizeof(kalimat));
  int x = strlen(kalimat);
  for(int c = x-1;c>=0;c--){
    cout << kalimat[c];
  }
  getchar();
}