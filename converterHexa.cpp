#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]){
    long int n;
    cin >> n;
    cout.flags(ios::hex | ios::uppercase);
    cout << n << endl;
    return 0;
}