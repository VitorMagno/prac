#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(int argc, char* argv[]){ _
    float x, y; 
    cin >> x >> y;
    if(x == 0 && y == 0){
        cout << "Origem" << endl;
    }else if(x == 0){
        cout << "Eixo Y" << endl;
    }else if(y == 0){
        cout << "Eixo X" << endl;
    }else if(x > 0 && y > 0){
        cout << "Q1" << endl;
    }else if(x < 0 && y > 0){
        cout << "Q2" << endl;
    }else if(x < 0 && y < 0){
        cout << "Q3" << endl;
    }else if(x > 0 && y < 0){
        cout << "Q4" << endl;
    }
    return 0;
}