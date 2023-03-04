#include <iostream>
using namespace std;

int main() {
  int n = 0, p1 = 0,p2 = 1,proximo =0;
  bool pertence = false;
  cout << "Fibonacci"<<endl;
  cout << "Informe um valor: "<<endl;
  cin >> n;
  while(n <= proximo){
  	proximo = p1+p2;
    p1 = p2;
    p2 = proximo;
    if(proximo == n){
    	pertence = true;
    }
  }
  if(pertence) {
  	cout << "O numero " << n << "Pertence a sequencia Fibonacci"<<endl;
  }else{
      cout << "Numero não Pertence a sequencia Fibonacci."<<endl;
  }
  return 0;
}
