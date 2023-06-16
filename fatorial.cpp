#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int fat(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

int main(int argc, char* argv[]){ _
    int n;
    cin >> n;
    cout << fat(n) << endl;
    return 0;
}