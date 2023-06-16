#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool busca(string buscada, string aqui, int inicio){
    string buscaEm = aqui.substr(inicio, buscada.size());
    if(buscaEm == buscada){
        return true;
    }
    return false;
}

bool escan(string &toFind, string &toLookIn){
    int tamanhoDaGrande = toLookIn.size();
    int tamanhoDaMenor = toFind.size();
    for(int i = 0; i < tamanhoDaGrande+tamanhoDaMenor-1; i++){
        if(i+tamanhoDaMenor > tamanhoDaGrande){
            if (busca(toFind, toLookIn+toLookIn, i) == true) {
                cout << "S" << endl;
                return true;
            }
        }else{
            if(busca(toFind, toLookIn, i) == true){
                cout << "S" << endl;
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char* argv[]){ //_
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string toFind, toLookIn;
        cin >> toFind >> toLookIn;
        if(escan(toFind, toLookIn) == false){
            reverse(toLookIn.begin(), toLookIn.end());
            if(escan(toFind, toLookIn) == false) cout << "N" << endl;
        }
    }
    return 0;
}