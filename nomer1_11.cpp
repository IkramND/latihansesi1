#include <iostream>
using namespace std;

int main(){
  int A[3] = {200,201,200};
  int *P;
  P = &A [0];
  cout << *P << " ";
  P = P+1;     
  cout << *P << " ";
  P = P-1;    
  cout << *P << endl;

  return 0;
  }