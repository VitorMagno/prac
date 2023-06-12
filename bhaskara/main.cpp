#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]){
    double a=0, b=0, c=0;
    cin >> a >> b >> c;
    double delta = (b*b)+(-4*a*c);
    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        double r1 = ((-b) + sqrt(delta))/(2*a), r2 = ((-b) - sqrt(delta))/(2*a);
        cout << fixed << setprecision(5) << "R1 = " << r1 << endl << "R2 = " << r2 << endl;
    }
    return 0;
}