#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //construktor
	~angka(); //destructor
	void cetakData();
	void isiData();
};
//Definisi member function