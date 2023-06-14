#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool analise(string a, string b, string c){
    int count = 0;
    for(int j = 0; j < a.size(); j++){
        if(a[j] == c[j] || b[j] == c[j]){
            count++;
        }else{
            return false;
        }
    }
    if(count == a.size()){
        return true;
    }
}

int main(int argc, char* argv[]){ //_
    int n;
    cin >> n;
    string a, b, c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a == c || b == c){
            cout << "YES" << endl;
        }else{
            if(analise(a,b,c)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}