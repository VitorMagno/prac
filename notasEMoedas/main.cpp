#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <float.h>
#include <cmath>

using namespace std;

const float cent10 = roundf(0.10*100)/100;
const float cent05 = roundf(0.05*100)/100;
const float cent01 = roundf(0.01*100)/100;
void filtragem (float &n, int notas[], int moedas[]){
    int temp = 0;
    while(n > 0.00){
        if(n >= 100.00){
            temp = n/100.00;
            n = fmod(n,100);
            n = roundf(n*100)/100;
            notas[0] = temp;
        }
        if(n >= 50.00 && n < 100.00){
            temp = n/50.00;
            n = fmod(n,50);
            n = roundf(n*100)/100;
            notas[1] = temp;
        }
        if(n >= 20.00 && n < 50.00){
            temp = n/20.00;
            n = fmod(n,20);
            n = roundf(n*100)/100;
            notas[2] = temp;
        }
        if(n >= 10.00 && n < 20.00){
            temp = n/10.00;
            n = fmod(n,10.00);
            n = roundf(n*100)/100;
            notas[3] = temp;
        }
        if(n >= 5.00 && n < 10.00){
            temp = n/5.00;
            n = fmod(n,5.00);
            n = roundf(n*100)/100;
            notas[4] = temp;
        }
        if(n >= 2.00 && n < 5.00){
            temp = n/2.00;
            n = fmod(n,2.00);
            n = roundf(n*100)/100;
            notas[5] = temp;
        }
        if(n >= 1.00 && n < 2.00){
            temp = n/1.00;
            n = fmod(n,1.00);
            n = roundf(n*100)/100;
            moedas[0] = temp;
        }
        if(n >= 0.50 && n < 1.00){
            temp = n/0.50;
            n = fmod(n,0.50);
            n = roundf(n*100)/100;
            moedas[1] = temp;
        }
        if(n >= 0.25 && n < 0.50){
            temp = n/0.25;
            n = fmod(n, 0.25);
            n = roundf(n*100)/100;
            moedas[2] = temp;
        }
        if(n >= cent10 && n < 0.25){
            temp = n/cent10;
            n = fmod(n,cent10);
            n = roundf(n*100)/100;
            moedas[3] = temp;
        }
        if(n >= cent05 && n < 0.10){
            temp = n/cent05;
            n = fmod(n,cent05);
            n = roundf(n*100)/100;
            moedas[4] = temp;
        }
        if(n >= cent01 && n < 0.05){
            temp = n/cent01;
            n = fmod(n,cent01);
            n = roundf(n*100)/100;
            moedas[5] = temp;
        }
    }
    return;
}

int main(int argc, char* argv[]){
    float n = 0;
    cin >> n;
    n+=0.001;
    float valorNotas[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    float valorMoedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int notas[6] = {0};
    int moedas[6] = {0};
    filtragem(n, notas, moedas);
    cout << "NOTAS:"<< endl;
    for(int i = 0; i < 6; i++){
        cout << fixed << setprecision(2) << notas[i] << " nota(s) de R$ " << valorNotas[i] << endl;
    }
    cout << "MOEDAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << fixed << setprecision(2) << moedas[i] << " moeda(s) de R$ " << valorMoedas[i] << endl;
    }
    return 0;
}