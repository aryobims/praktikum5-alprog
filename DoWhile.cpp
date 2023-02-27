#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int i=0;
	
	do {
		cout<<"Apakah kamu mau mengulang?\n";
		cout<<"jawab (y/t): ";
		cin >> ulangi;
		
		//increement i
		i++;
	} while (ulangi == 'y');
	
	cout<<"Perulaangan Selesai!\n";
	cout<<"Kamu mengulang sebanyak "<<i<<" kali \n";
}