#include <iostream> 
#include <string>

using namespace std;

class pessoa{
    private:
        string nome;
        int idade;
        int nascimento;
    public:
        pessoa(string nome, int idade, int nascimento){
            this->nome = nome;
            this->idade = idade;
            this->nascimento = nascimento;
        };

        void set_nome(string nome){
            this->nome = nome;
        }
        void set_idade(int idade){
            this->idade = idade;
        }
        void set_nascimento(int nascimento){
            this->nascimento = nascimento;
        }
        string get_nome(){
            return nome;
        }
        int get_idade(){
            return idade;
        }
        int get_nascimento(){
            return nascimento;
        }
};

class funcionario : public pessoa{
    private:
        int admissao;
        double salario;
    public:
        funcionario(string nome, int idade, int nascimento, int admissao, double salario) : pessoa(nome,idade,nascimento){
            this->admissao = admissao;
            this->salario = salario;
        }
        double qual_salario(){
            return salario;
        }
        void set_admissao(int ano){
            admissao = ano;
        }
        void set_salario(double valor){
            salario = valor;
        }
        int get_admissao(){
            return admissao;
        }
};

class chefeDepartamento : public funcionario{
    private:
        int departamento;
    public:
        chefeDepartamento(string nome, int idade, int nascimento, int admissao, double salario, int departamento):funcionario(nome, idade, nascimento, admissao, salario){
            this->departamento = departamento;
        }
        int qual_departamento(){
            return departamento;
        }
        void set_departamento(int dep){
            departamento = dep;
        }
};

int main(){
    funcionario gil("gilmas", 20, 2002, 2022, 1000);
    cout << "nome: " << gil.get_nome() << endl;
    cout << "idade: " << gil.get_idade() << endl;
    cout << "nascimento: " << gil.get_nascimento() << endl;
    cout << "ano de admissao: " << gil.get_admissao() << endl;
    cout << "salario: " << gil.qual_salario() << endl;
    return 0;
}