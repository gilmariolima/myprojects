#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    vector<int> numeros;
    srand(time(NULL));
    
    for(int i=0; i < 4; i++){
        int num = rand() % 50;
        numeros.push_back(num);
        cout<<numeros[i]<<endl;
    }
    return 0;
}