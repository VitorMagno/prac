#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void avalia(string obj, string teste, map<char, int> &v){
    int tamanhoPalavra = obj.size();
    int tamanhoTeste = teste.size();
    for(int i = 0; i < tamanhoPalavra; i++){
        if(v.find(obj[i]) != v.end()){
            v[obj[i]] += 1;
        }else{
            v.insert(pair<char,int>(obj[i],1));
        }
    }
    for(int i = 0; i < tamanhoTeste; i++){
        for(int j = 0; j < tamanhoPalavra; j++){
            if(i+j> tamanhoTeste){
                i = 0;
            }
            
        }
        i++;
    }
}

int main(int argc, char* argv[]){ _
    int n;
    cin >> n;
    string obj, teste;
    map<char,int> v;
    for(int i = 0; i < n; i++){
        cin >> obj >> teste;
        cout << obj.size() << " " << teste.size();
        avalia(obj, teste, v);
    }
    return 0;
}