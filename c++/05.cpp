#include <iostream>
#include <vector>

using namespace std;

class retangulo{
    public:
        int largura;
        int altura;
};

retangulo insere(){
    retangulo aux;
    cout << "Digite a largura: ";
    cin >> aux.largura;
    cout << "Digite a altura: ";
    cin >> aux.altura;

    return aux;
}

void exibe(vector <retangulo> x){
    for(int i=0; i < x.size(); i++){
        cout << "Largura: " << x[i].largura << endl;
        cout << "Altura: " << x[i].altura << endl;
        cout << endl;
    }
}

int main(){
    vector <retangulo> ret;
    int opc;
    while(opc != 0){
        cout << "[ 1 ] Inserir" << endl;
        cout << "[ 2 ] Exibir" << endl;
        cout << "[ 0 ] Sair" << endl;
        cin >> opc;

        switch(opc){
            case 1:
                ret.push_back(insere());
                break;
            case 2:
                exibe(ret);
                break;
            case 0:
                cout << "Saindo" << endl;
                return 0;
            default:
                cout << "Opcao invalida" << endl;
        }
    }
    return 0;
}