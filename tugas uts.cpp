#include <iostream>
using namespace std;
 
int main(){
 
    int a;

 
    cout << "\t Menentukan Ganjil & Genap Data Array \n";
    cin >> a ; 
   cout << "\n Genap  : ";
 
   for(int i = 1; i <= a; i++){
 
       if(i % 2 == 0){
 
           cout << i << ", ";
       }
   }
 
    cout << "\n Ganjil : ";
 
    for(int i = 0; i < a; i++){
 
        if (i % 2 != 0){
 
            cout << i << ", ";
        }
       
    }
}
