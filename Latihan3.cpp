#include <iostream>
using namespace std;

int main(){
	int i, n;
	float nilai, rata, jml=0;
	cout<<"Input Banyak Nilai= ";
	cin>>n;
	
	for(i=1; i<=n; i++) {
		cout<<"Input Nilai "<<i<<" = ";
		cin>>nilai;
		jml+=nilai;
		//jml=jml+nilai;
		rata=jml/n;
	}
	cout<<"\nTotal nilai= "<<jml;
	cout<<"\nRata nilai= "<<rata;
}