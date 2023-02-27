#include <iostream>
using namespace std;

int main(){
	int a=5;
	for(int i=1; i<=10; i++) {
		cout<<"Nilai ke "<< i <<" = "<< a <<endl;
		a+=5;
	}
}