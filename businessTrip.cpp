#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int binarySearch(vector<int> &v, int i){
    int de = 0, ate = v.size();
    cout << de << " " << ate << endl;
    int meio = 0;
    while(de < ate){
        meio = floor((de+ate)/2);
        if(v[meio] < i){
            de = meio+1;
        }else{
            ate = meio;
        }
        cout << meio << endl;
    }
    if(v[de] == i){
        return i;
    }
    return -1;
}


int main(int argc, char* argv[]){ //_
    int i;
    cin >> i;
    vector<int> v(12,0);
    for(int i = 0; i < 12; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << binarySearch(v, i) << endl;
    return 0;
}