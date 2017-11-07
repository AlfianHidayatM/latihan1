#include<iostream>
using namespace std;

int main(){
	int x,y,selisih;
	 menu:
	 system("cls");
		cout <<"===========================\n";
		cout <<"Masukan Angka atau bilangan\n";
		cout <<"===========================\n"<<endl;
	
	cout <<"Masukan Nilai x = ";
	cin >> x;
	cout << "Masukan Nilai y = ";
	cin >> y;
	
	selisih =x-y;
	if(selisih<0)
	cout << selisih*-1;
	else
	cout << selisih;	
}
