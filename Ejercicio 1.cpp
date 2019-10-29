#include <iostream>
using namespace std;

int pedir_carnet(){
     int a;
  int carnet[8], carnet_rev[8];
  for (int i = 0; i < 8; i++){
    cout<<"Ingrese digito "<< i + 1<<" de su carnet: ";
    cin>>carnet[i];  
  }
  cout<<"Su carnet al revés es: ";
  for (int i = 0, a = 7;i < 8, a >= 0; i++, a--){
    carnet_rev[i] = carnet[a];
    cout<<carnet_rev[i];
}
return 0;
}


int main() {
 pedir_carnet();
}