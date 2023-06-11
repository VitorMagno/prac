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
    int n;
    cin >> n;
    vector<vector<string>> test(n,vector<string>(3));
    string a, b, c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        // test[i].push_back(a);
        // test[i].push_back(b);dudaehlindaS2
        // test[i].push_back(c);
        if(a == c || b == c){
            cout << "YES" << endl;
        }else{
            
        }

    }
    return 0;
}