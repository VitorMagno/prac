#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

void calculate(int direcao, int incremento, int decremento, int atual, int destino){
    int vezEmCima = 0, vezEmBaixo = 0, result = 0;
    int estado = -1;
    if((direcao > 0 && incremento == 0) || (direcao < 0 && decremento == 0)){
        cout << "use the stairs" << endl;
    }else{
        while(atual != destino){
            if(vezEmBaixo > 1 || vezEmCima > 1){
                cout << "use the stairs" << endl;
                break;
            }else{
                if(atual < destino){
                    atual += incremento;
                    result++;
                    if(estado != 1){
                        vezEmCima++;
                        estado = 1;
                    }
                }else if(atual > destino){
                    atual -= decremento;
                    result++;
                    if(estado != 0){
                        vezEmBaixo++;
                        estado = 0;
                    }
                }
            }
            if(atual == destino){
                cout << result << endl;
            }
        }
    }
}

int main(int argc, char* argv[]){
    int andares, inicio, destino, incremento, decremento;
    cin >> andares >> inicio >> destino >> incremento >> decremento;
    bool praCima = false;
    int direcao = destino - inicio;

    if(direcao > 0){
        praCima = true;
    }else if(direcao == 0){
        cout << 0 << endl;
        return 0;
    }

    if(praCima){
        if(incremento != 0 && direcao%incremento == 0){
            cout << (direcao/incremento) << endl;
        }else{
            calculate(direcao, incremento, decremento, inicio, destino);
        }
    }else{
        if(decremento != 0 && -(direcao)%decremento == 0){
            cout << (-direcao/decremento) << endl;
        }else{
            calculate(direcao, incremento, decremento, inicio, destino);
        }
    }

    return 0;
}