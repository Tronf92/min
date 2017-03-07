#include <iostream>
using namespace std;

int main(){
	int nr,contor=0,max,limita;
	cout << "Spuneti cate nr vreti sa introduceti" << endl;
	cin >> limita;
	cout << "Introduceti numere: " << endl;
	cin >> nr;

	max=nr;
	contor=1;
	while(contor<limita){
		if(nr>max){
			max=nr;
		}
		cin >> nr;
		contor++;

	}
	if(nr>max){
		max=nr;
	}

	cout << "Maximul dintre numere este: " << max << endl;

	system("pause");
	return 0;
}