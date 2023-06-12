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
    int m, n;
    cin >> n >> m;
    vector<vector<int>> tab(100,vector<int>(100,0));
    vector<int> somaCol(100,0);
    vector<int> somaLin(100,0);
    for(int i = 0; i < n; i++){
        int somaLinha = 0;
        for(int j = 0; j < m; j++){
            int temp = 0;
            cin >> temp;
            tab[i].push_back(temp);
            somaLinha += temp;
            somaCol[j] += temp;

        }
        somaLin[i] = somaLinha;
    }
    int maxCol = *max_element(somaCol.begin(), somaCol.end());
    int maxLin = *max_element(somaLin.begin(), somaLin.end());
    cout << max(maxCol, maxLin) << endl;
    return 0;
}