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
    float a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    a = a*2;
    b = b*3;
    c = c*4;
    int totalPeso = 10;
    float media = (a + b + c + d)/totalPeso;
    float novanota = 0;
    cout << fixed << setprecision(1) << "Media: " << media << endl;
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media >= 5.0){
        cout << "Aluno em exame." << endl;
        cin >> novanota;
        cout << fixed << setprecision(1) << "Nota do exame: " << novanota << endl;
        media = (media + novanota)/2;
        if(media < 5.0){
            cout << "Aluno reprovado." << endl; 
        }else{
            cout << "Aluno aprovado." << endl;
        }
        cout << fixed << setprecision(1) << "Media final: " << media << endl;
    }else{
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}