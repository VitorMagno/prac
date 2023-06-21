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
    int j = 1, k = 1;
    int sum = 0;
    while(true){
        cin >> j >> k;
        if(j < k){
            int aux = k;
            k = j;
            j = aux;
        }
        if(j<= 0 || k <=0 ) break;
        sum = 0;
        for(int i = k; i <= j; i++){
            sum += i;
            cout << i << " ";
        }
        if(sum!=0){
            cout << "Sum="<< sum << endl;
        }
    }
    return 0;
}