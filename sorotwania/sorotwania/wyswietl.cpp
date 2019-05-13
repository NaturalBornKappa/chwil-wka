#include"biblioteki.h"

template <typename T>
void wyswietl(T *_data, unsigned int _licz) {
	for (unsigned int pozycja = 0; pozycja != _licz; ++pozycja)
		cout << "#" << pozycja << " = " << _data[pozycja] << endl;
}