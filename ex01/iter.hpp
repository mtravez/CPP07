#pragma once

template <typename T, typename F>
void iter(T *array, int length, F function)
{
	if (!array || length <= 0 || !function)
		return;
	for (int i = 0; i < length; i++)
		function(array[i]);
}