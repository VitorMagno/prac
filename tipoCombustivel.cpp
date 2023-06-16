#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>



using namespace std;

int main(int argc, char* argv[]){
    int c = 0, alcool = 0, gasolina = 0, diesel = 0;
    bool cont = true;
    while(cont == true){
        cin >> c;
        cin.ignore();
        if(c == 1){
            alcool++;
        }else if(c == 2){
            gasolina++;
        }else if(c == 3){
            diesel++;
        }else if(c == 4){
            cout << "MUITO OBRIGADO\nAlcool: "<< alcool << "\nGasolina: " << gasolina << "\nDiesel: " << diesel << endl;
            cont = false;
        }
    }
    return 0;
}