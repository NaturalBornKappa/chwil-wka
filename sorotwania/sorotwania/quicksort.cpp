#include"biblioteki.h"

template <typename T>
unsigned int podzialka(T *_data, unsigned int _lewa, unsigned int _prawa) {
	T value = _data[_lewa];
	while (true) {
		while (_data[_prawa] > value)
			-- _prawa;
		while (_data[_lewa] < value)
			++_lewa;

		if (_lewa < _prawa) {
			swap_data(_data[_lewa], _data[_prawa]);
			++_lewa;
			--_prawa;
		}
		else
			return _prawa;
	}
}

template <typename T> 
void quicksort(T *_data, unsigned int _lewa, unsigned  int _prawa) {
	if (_lewa < _prawa)	{
		unsigned  int center = podzialka(_data, _lewa, _prawa);
		void quicksort(_data, _lewa, center);
		void quicksort(_data, center + 1, _prawa);
	}
}