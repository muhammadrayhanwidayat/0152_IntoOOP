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
		string kodeMK;
		string namaMK;
		int sks;

	public:
		void input() {
			cout << "kode mk:";
			cin >> kodeMK;
			cout << "nama MK";
			cin >> namaMK;
			cout << "SKS";
			cin >> sks;
		}
};



int main(){
	mahasiswa mhs;
	Matakuliah mk;

	mhs.nama = "budi";
	mhs.umur = 20;

}
