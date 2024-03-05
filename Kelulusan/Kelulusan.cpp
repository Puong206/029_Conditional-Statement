#include <iostream>
using namespace std;

int main() {
	int NilMtk, NilBhs, NilFis;
	string status;
	float rerata;

	cout << "Masukkan Nilai Matematika = ";
	cin >> NilMtk;

	cout << "Masukkan Nilai Bahasa = ";
	cin >> NilBhs;

	cout << "Masukkan Nilai Fisika = ";
	cin >> NilFis;

	rerata = (NilMtk + NilBhs) / 2;

	if (NilMtk > 70 || rerata > 60) {
		status = "Lulus";
		if (NilFis >= 90) {
			status = "Lulusan Terbaik";
		}
	}
	else
	{
		status = "Tidak Lulus";
	}

	cout << "Nilai Matematika = " << NilMtk << endl;
	cout << "Nilai Bahasa = " << NilBhs << endl;
	cout << "Nilai Fisika = " << NilFis << endl;
	cout << "Status Kelulusan = " << status << endl;

	return 0;
}