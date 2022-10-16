#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>

using namespace std;

vector <int> numeros_aleatorios(int n, int min, int max){
    srand(time(NULL));
    vector <int> numeros;
    for(int i=0; i < n; i++){
        int x = min + rand()%max;
        numeros.push_back(x);
    }
    return numeros;
}

void ver(vector <int> x){
    for(int i=0; i < x.size(); i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

double media(vector <int> x){
    double atual = 0;
    for(int i=0; i < x.size(); i++){
        atual += x[i];
    }
    double media = atual / x.size();
    return media;
}

vector <int> filtra_pares(vector <int> x){
    vector <int> pares;
    for(int i=0; i < x.size(); i++){
        if(x[i] % 2 == 0){
            pares.push_back(x[i]);
        }
    }
    return pares;
}

int main(){
    vector<int> x = numeros_aleatorios(5, 1, 15);
    ver(x);

    ver(filtra_pares(x));

    cout << "Media: " << media(x) << endl;
    return 0;
}