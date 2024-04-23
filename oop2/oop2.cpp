#include <iostream>
using namespace std;

class bangundatar {
    //akses modifier
    private:
        float panjang, lebar;
    public:
        float luas;

        void input() { //methode input persegi panjang

            cout << "masukan panjangnya = ";
            cin >> panjang;
            cout << "masukan lebarnya = ";
            cin >> lebar;
        }

        float hitungluas() {
            return panjang * lebar;
        }

        void display() {
            cout << "panjangnya =" << panjang << endl;
            cout << "lebarnya =" << lebar << endl;
            cout << "luasnya ="  << hitungluas() << endl;

        }

};

int main(){
    bangundatar pp;//deklarasi objek pp dari class bangun datar
    pp.input();
    pp.display();

    return 0;
}
