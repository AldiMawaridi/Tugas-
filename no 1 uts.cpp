#include <iostream>
using namespace std;
 
int main(){
 
    int angka [] = {1, 2, 3, 4, 5, 6, 7, 8};
 
    cout << "\t Menentukan Ganjil & Genap Data Array \n";
 
   cout << "\n Genap  : ";
 
   for(int i = 0; i < 8; i++){
 
       if(angka[i] % 2 == 0){
 
           cout << angka[i] << ", ";
       }
   }
 
    cout << "\n Ganjil : ";
 
    for(int j = 0; j < 8; j++){
 
        if (angka[j] % 2 != 0){
 
            cout << angka[j] << ", ";
        }
       
    }
}
