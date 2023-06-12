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
    int t;
    cin >> t;
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
        if(primo == false){
            cout << "Not Prime" << endl;
        }else{
            cout << "Prime" << endl;
        }
    }
    return 0;
}