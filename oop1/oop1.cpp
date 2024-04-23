#include <iostream>
using namespace std;

class mahasiswa {
public://akses modifier
	string nama;
	int umur;
	string jurusan;

	void output(){
		cout << "nama:" << nama << endl;
		cout << "umur:" << umur << endl;
		cout << "jurusan:" << jurusan << endl;
	}
};

class Matakuliah{
	private:
		string kodemk;
		string namamk;
		int sks;

	public:
		void input() {
			cout << "kode mk:";
			cin >> kodemk;
			cout << "nama mk:";
			cin >> namamk;
			cout << "SKS:";
			cin >> sks;
		}
		void output() {
			cout << "kode mk:" << kodemk << endl;
			cout << "nama mk:" << namamk << endl;
			cout << "sks:" << sks << endl;
		}
};



int main(){
	mahasiswa mhs;
	Matakuliah mk;

	mhs.nama = "budi";
	mhs.umur = 20;
	mhs.jurusan = "teknik informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;

}
