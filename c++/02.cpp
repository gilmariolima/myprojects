#include <iostream>

using namespace std;

class pessoa{
    public:
        char nome[20];
        int idade;    
};

int main(){
    pessoa gilmario;
    cout << "Nome: ";
    cin >> gilmario.nome;
    cout << "idade: ";
    cin >> gilmario.idade;
    cout << "Nome: " << gilmario.nome << " - Idade: " << gilmario.idade << endl;
    return 0;
}