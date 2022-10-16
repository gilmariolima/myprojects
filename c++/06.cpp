#include <iostream>
#include <string>
#include <vector>

using namespace std;

class pessoa{
    private:
        string nome;
        int idade;
        float salario;
    public:
        void set_nome(string n){
            nome = n;
        }
        void set_idade(int idd){
            idade = idd;
        }
        void set_salario(float sal){
            salario = sal;
        }
        string get_nome(){
            return nome;
        };
        int get_idade(){
            return idade;
        }
        float get_salario(){
            return salario;
        }
};

pessoa cadastrar(){
    pessoa novo; string nome; int idade; float salario;

    cout << "Nome: ";
    cin >> nome; novo.set_nome(nome);

    cout << "Idade: ";
    cin >> idade; novo.set_idade(idade);

    cout << "Salario: ";
    cin >> salario; novo.set_salario(salario);

    return novo;
}

void exibir(vector<pessoa> aux){
    for(int i=0; i < aux.size(); i++){
        cout << "Nome: " << aux[i].get_nome() << endl;
        cout << "Idade: " << aux[i].get_idade() << endl;
        cout << "Salario: " << aux[i].get_salario() << endl;
        cout << endl;
    }
}

int main(){
    int opc; vector<pessoa> dados;
    while(opc != 0){
        cout << "[ 1 ] Cadastrar" << endl;
        cout << "[ 2 ] Exibir" << endl;
        cout << "[ 0 ] Sair" << endl;
        cin >> opc;

        switch(opc){
            case 1:
                dados.push_back(cadastrar());
                break;
            case 2:
                exibir(dados);
                break;
            case 0:
                cout << "Saindo" << endl;
                break;
            default:
                cout << "invalido" << endl;
                break;
        }
    }
    return 0;
}