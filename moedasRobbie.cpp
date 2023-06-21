#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ehPrimo(int t){
    for(int i = 0; i < t; i++){
        bool primo = true;
        ll n;
        cin >> n;
        for(ll j = 2; j*j <= n; j++){
            if(n % j == 0){
                primo = false;
                break;
            }
        }
        return primo;
    }
}

int main(int argc, char* argv[]){ //_
    vector<int> v(20,0);
    int m;
    while(cin >> m){
        int sum = 0;
        for(int i = 0; i < m; i++){
            cin >> v[i];
        }
        int salto;
        cin >> salto;
        for(int i = m-1; i >= 0; i-=salto){
            sum+=v[i];
        }
        bool teste = ehPrimo(sum);
        if(teste){
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        }else{
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }
    return 0;
}