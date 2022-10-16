#include <iostream>
#include <string>

using namespace std;

class poligono{
    private:
        int lados;
        string cor;
    public:
        poligono(int lados = 0, string cor = "nenhuma"){
            this->lados = lados;
            this->cor = cor;
        }
        int get_lados(){
            return lados;
        }
        string get_cor(){
            return cor;
        }

};

class retangulo : public poligono{
    public:

        }
        
}

int main(){
    return 0;
}