#include <iostream>
using namespace std;

int main() {
  string x,y;
  cout<<"Digite qualquer coisa: "<<endl;
  cin>>x;
  int cont = 0, tam = x.length();
  for(int i = tam; i > 0; i-- ){
      y += x[i];
  }
  x = y;
  cout<<"String ao contrario: "<<endl;
  cout<<x;
  return 0;
}
