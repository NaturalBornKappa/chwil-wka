#include"biblioteki.h"

int main() {
	//srand(time(NULL));

	int tab[] = { 7,6,5,4,3,2,1 };
	int tab2[] = { 7,4,2,5,2,6,0,9,2 };

	cout << "SORTOWANIE SZYBKIE (QUICK SORT)" << endl << "Przed sortowaniem:" << endl;
	wyswietl(tab, 7);
	quicksort(tab, 0, 6);
	cout << "Po sortowaniu: " << endl;
	wyswietl(tab, 7);

	system("PAUSE");
	return 0;
}