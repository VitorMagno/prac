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
    int hrI, minI, hrF, minF;
    cin >> hrI >> minI >> hrF >> minF;
    int diffHr, diffMin;
    diffMin = minF - minI;
    if(hrF == hrI && diffMin > 0){
        diffHr = 0;
    }else if(hrF <= hrI){
        diffHr = (24 - hrI) + hrF;
    }else{
        diffHr = hrF - hrI;
    }
    if(minF < minI){
        diffMin = 60 - minI + minF;
        diffHr--;
    }
    
    cout << "O JOGO DUROU " << diffHr << " HORA(S) E " << diffMin << " MINUTO(S)" << endl;

    return 0;
}