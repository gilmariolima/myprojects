#include <iostream>

using namespace std;

class retangulo{
    public:
        int largura;
        int altura;

        int area(){
            int res = largura * altura;
            return res;
        }    
};

int main(){
    retangulo a, b, c;

    cin >> a.altura;
    cin >> b.altura;
    cin >> c.altura;
    cin >> a.largura;
    cin >> b.largura;
    cin >> c.largura;

    cout << "area de A: " << a.area() << endl;
    cout << "area de B: " << b.area() << endl;
    cout << "area de C: " << c.area() << endl;

    return 0;
}