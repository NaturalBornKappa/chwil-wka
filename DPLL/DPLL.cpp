#include"biblioteki.h"

int main() {
	srand(time(NULL));

	Pojemnik tab[25];
	Pojemnik temp;

	for (int i = 0; i < 25; i++) {
		tab[i] = generuj(temp);
	}
	cout << endl;
	
	wyœwietl(tab);

	system("PAUSE");
	return 0;
}