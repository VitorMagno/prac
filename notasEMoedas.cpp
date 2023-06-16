#include <bits/stdc++.h>

using namespace std;

void filtragem (float &n, int notas[], int moedas[]){
    int temp = 0;
    if(n >= 100.00){
        temp = n/100.00;
        n = fmod(n,100.00);  
        notas[0] = temp;
    }
    if(n >= 50.00){
        temp = n/50.00;
        n = fmod(n,50.00);
        notas[1] = temp;
    }
    if(n >= 20.00){
        temp = n/20.00;
        n = fmod(n,20.00);
        notas[2] = temp;
    }
    if(n >= 10.00){
        temp = n/10.00;
        n = fmod(n,10.00);
        notas[3] = temp;
    }
    if(n >= 5.00){
        temp = n/5.00;
        n = fmod(n,5.00);
        notas[4] = temp;
    }
    if(n >= 2.00){
        temp = n/2.00;
        n = fmod(n,2.00);
        notas[5] = temp;
    }
    if(n >= 1.00){
        temp = n/1.00;
        n = fmod(n,1.00);
        moedas[0] = temp;
    }
    if(n >= 0.50){
        temp = n/0.50;
        n = fmod(n,0.50);
        moedas[1] = temp;
    }
    if(n >= 0.25){
        temp = n/0.25;
        n = fmod(n, 0.25);
        moedas[2] = temp;
    }
    if(n >= 0.10){
        temp = n/.10;
        n = fmod(n,.10);
        moedas[3] = temp;
    }
    if(n >= .05){
        temp = n/.05;
        n = fmod(n,.05);
        moedas[4] = temp;
    }
    if(n >= .01){
        temp = n/.01;
        n = fmod(n,.01);
        moedas[5] = temp;
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