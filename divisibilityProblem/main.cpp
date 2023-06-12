#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

long int calc(long int a, long int b){
    long int menorDiv = floor(a/b);
    long int result = ((b*menorDiv)+b)-a;
    return result;
}

int main(int argc, char* argv[]){ //_
    int t; 
    long int a, b, result;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if(a%b == 0){
            result = 0;
        }
        else if(a > b){
            result = calc(a,b); 
        }else if(a < b){
            result = b - a;
        }else{
            result = 0;
        }
        cout << result << endl;
    }
    return 0;
}