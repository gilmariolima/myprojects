#include <iostream>
#include <string>

using namespace std;

class conta{
    private:   
        string nomeTitular;
        double saldo;
        static int numero;
    public:
        
        conta(string nomeTitular = "guest"){
            this->nomeTitular = nomeTitular;
            saldo = 0;
            numero += 1;
        }
       
        void depositar(double valor){
            saldo += valor;
        }
        bool sacar(double valor){
            if(saldo >= valor){
                saldo -= valor;
                return true;
            }
            return false;
        }
        double get_saldo(){
            return saldo;
        }
        string get_nome(){
            return nomeTitular;
        }
        static int get_numero(){
            return numero;
        }
        
};

int conta::numero = 0;

int main(){
    conta gil("gilmas");
    cout << gil.get_numero() << endl;

    conta ala("alanis");
    cout << ala.get_numero() << endl;
    cout << gil.get_numero() << endl;

    return 0;
}