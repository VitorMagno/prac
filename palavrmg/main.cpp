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
    for(int j = 0; j < n; j++){
        string s;
        cin >> s;
        string nova ="";
        bool decision = true;

        for(int i = 0; i < s.size(); i++){
            nova += tolower(s[i]);
            if(i > 0 && (int) nova[i]-'a' <= (int) nova[i-1]-'a'){
            decision = false;
            }
        }

        if(decision == false){
            cout << s << ": N" << endl;
        }else{
            cout << s << ": O" << endl;
        }
    }

    return 0;
}