#include <iostream>
using namespace std;

int main() {
	int bilangan1, bilangan2;
	string status;
	srand(time(0));

	bilangan1 = rand() % 10;
	bilangan2 = rand() % 10;

	if (bilangan1 == bilangan2)
	{
		status = "Bilangan satu sama dengan bilangan dua";
	}
	else if (bilangan1 > bilangan2)
	{
		status = "Bilangan satu lebih besar dari bilangan kedua";
	}
	else
	{
		status = "Bilangan satu lebih kecil dari bilangan kedua";
	}
	cout << "Bilangan Pertama : " << bilangan1 << endl;
	cout << "Bilangan Kedua : " << bilangan2 << endl;
	cout << "Status Bilangan : " << status;
}