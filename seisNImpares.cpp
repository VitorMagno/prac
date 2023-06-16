#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]){
    int n;
    cin >> n;
    for(int i = 0; i < 6;){
        if(n%2 != 0){
            cout << n << endl;
            n+=2;
            i++;
        }else{
            n++;
        }
    }
    return 0;
}