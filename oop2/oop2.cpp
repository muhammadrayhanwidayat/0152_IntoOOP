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
            
        }

};





int main()
{
    
}
