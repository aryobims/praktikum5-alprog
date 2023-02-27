#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int i=0;
	
	//perulangan while
	while(ulangi == 'y') {
		cout<<"Apakah anda mau mengulang?\n";
		cout<<"Jawab (y/t): ";
		cin>>ulangi;

		//increment i
		i++;
	}
	cout<<"Perulangan Selesai!!!\n";
	cout<<"Kamu Mengulang Sebanyak "<<i<<" kali\n ";

}