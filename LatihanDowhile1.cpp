#include <iostream>
using namespace std;

int main(){
	int i=1, n;
	float nilai, jml=0;
	cout<<"Input banyak nilai= ";
	cin>>n;
	
	do {
		cout<<"Input Nilai "<<i<<" = ";
		cin>>nilai;
		jml+=nilai;
		i++;
	}while(i<=n);
	cout<<"\nTotal Nilai= "<<jml;
	
}