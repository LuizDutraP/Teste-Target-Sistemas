#include <iostream>
using namespace std;

int main() {
  float totalDist,SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53;
  totalDist = SP+RJ+MG+ES+Outros;
  cout<<"Percentual de representação que cada estado teve dentro do valor total mensal da distribuidora"<<endl;
  cout<<"O percentual de SP é: "<< (SP*100)/totalDist<<endl;
  cout<<"O percentual de RJ é: "<< (RJ*100)/totalDist<<endl;
  cout<<"O percentual de MG é: "<< (MG*100)/totalDist<<endl;
  cout<<"O percentual de ES é: "<< (ES*100)/totalDist<<endl;
  cout<<"O percentual de Outros é: "<< (Outros*100)/totalDist<<endl;
  return 0;
}
