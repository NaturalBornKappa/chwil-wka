#include"biblioteki.h"

template <typename T>
void swap_data(T &_left, T &_right) {
	T temp = _left;
	_left = _right;
	_right = temp;
}