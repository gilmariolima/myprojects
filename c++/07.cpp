#include <iostream>
#include <vector>

using namespace std;

class horario{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        horario(int hrs = 0, int min = 0, int seg = 0){
            horas = hrs;
            minutos = min;
            segundos = seg;
        }
        void set_horas(int horas){
            this->horas = horas;
        }
        void set_minutos(int min){
            minutos = min;
        }
        void set_segundos(int seg){
            segundos = seg;
        }
        int get_horas(){
            return horas;
        }
        int get_minutos(){
            return minutos;
        }
        int get_segundos(){
            return segundos;
        }
    

};

int main(){
    horario hoje(13, 15, 0);
    cout << hoje.get_horas() << ":";
    cout << hoje.get_minutos() << ":";
    cout << hoje.get_segundos();
    return 0;
}