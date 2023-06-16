#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){

    int n;
    cin >> n;
    n = n * 4;
    string linha;
    int pum = 4;
    for (int i = 1; i <= n; i++){
        if(i == pum){
            linha += "PUM\n";
            cout << linha;
            linha = "";
            pum += 4;
        }else{
            linha += to_string(i)+" ";
        }
    }
    return 0;
}