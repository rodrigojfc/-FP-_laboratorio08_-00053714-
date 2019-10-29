#include <iostream>
using namespace std;

int matriz_c(){
 int carnet[8];
   int matrizc[5][9];
  int contador = 0;
  for (int i = 0; i < 8; i++){
    cout<<"Ingrese digito "<< i + 1<<" de su carnet: ";
    cin>>carnet[i];
} 
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 8; j++){
      if (i == 1){
        for (int k = 7; k >= 0; k--){
        matrizc[i][k]= carnet[j];
        j++;
        }
      }
      else if (i == 3){
        for (int k = 7; k >= 0; k--){
        matrizc[i][k]= carnet[j];
        j++;
        }
      }
      else{
        matrizc[i][j]= carnet[j];
      }
}

}
for (int i = 0; i < 5; i++){
  contador += 1;
  for (int j = 0; j < 8; j++){
    contador += 1;

    if(i == 4) {
      matrizc[4][8]= contador;
    }
    else
    {
      matrizc[i][8]=contador;
      matrizc[4][j]=contador + 8;
    }


  }

}
for (int i= 0; i < 5; i++){
  for(int j = 0; j < 9; j++){
    cout<<matrizc[i][j]<< " | ";
  }
  cout<<endl;
}
return 0; 
}
int main() {
  matriz_c();
}