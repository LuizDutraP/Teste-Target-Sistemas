#include <iostream>
using namespace std;

int main() {
  float mes[30] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};
  float maior = 0.0, menor = 0.0, media = 0.0, total = 0.0;
  int contDias= 0 ,fds = 0;
  maior = mes[0];
  menor = mes[0];
  for(int i; i < 30; i++){
      if(mes[i] == 0.0){fds++;}
      if(mes[i] != 0.0){total += mes[i];} 
      if(mes[i]> maior){
        maior = mes[i];    
      }
      if((mes[i]<menor) || (mes[i] != 0)){
          menor = mes[i];
      }
  }
  
  
  
  media = total/(30-fds);
  for(int i; i < 30; i++){
      if((mes[i]> media) || (mes[i] != 0)){
          contDias++;
      }
  }
  cout<<"O menor valor de faturamento ocorrido em um dia do mês: "<<menor<<endl;
  cout<<"O maior valor de faturamento ocorrido em um dia do mês: "<<maior<<endl;
  cout<<"Número de dias no mês em que o valor de faturamento diário foi superior à média mensal "<<media<<" Foram: "<<contDias<<" Dias"<<endl;
  return 0;
}
