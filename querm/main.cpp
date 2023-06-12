#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(int argc, char* argv[]){ //_
    int n = -1;
    int cont = 0;
    while(n != 0){
        cont ++;
        cin >> n;
        vector<int> pessoas;
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            pessoas.push_back(temp);
        }
        for(int i = 0; i < n; i++){
            if(i+1 == pessoas[i]){
                cout <<"Teste " << cont << endl <<  i+1 << endl;
                break;
            }
        }
        pessoas.clear();
    }
    return 0;
}