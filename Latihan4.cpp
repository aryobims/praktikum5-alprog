#include <iostream>
using namespace std;

int main(){
	int i, n;
	float nilai, kali, rata, jml=0;
	cout<<"Input Banyak Nilai= ";
	cin>>n;
	
	for(i=1; i<=n; i++) {
		cout<<"Input Nilai "<<i<<" = ";
		cin>>nilai;
		jml+=nilai;
		kali*=nilai;
		rata=jml/n;
	}
	cout<<"\nTotal nilai= "<<jml;
	cout<<"\nTotal perkalian= "<<kali;
	cout<<"\nRata nilai= "<<rata;
}