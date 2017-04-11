#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char huruf[10];
	cout << "MASUKAN 10 KARAKTER HURUF KAPITAL" << endl << endl;
	cout << "=================================" << endl << endl;
	for (int a = 0; a < 10; a++ ) 
	{  
		cout << "Input Karakter         : ";
		cin >> huruf[a];
	}
	cout <<  endl;
	
	int hitung = 0;
	cout << "=================================" << endl;
	for (int a = 0; a < 10; a++)
	{
		cout << huruf[a] << ", ";
		if (huruf[a] == 'A' )
			hitung++;
	}
	cout << endl;

	cout << "Jumlah Karakter A    : " <<  hitung << endl;
	return 0;
}