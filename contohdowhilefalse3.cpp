#include <iostream>
using namespace std;

int main(){
	int i=1, a=5;
	do {
		cout<<"Nilai ke "<< i <<" = "<< a <<endl;
		a+=5;
		i++;
	} while(i<=10);
}