
template <typename T>
void swap(T &value1, T&value2)
{
	T temp = value1;
	value1 = value2;
	value2 = temp;
}

template <typename T>
T &min(T &value1, T &value2)
{
	if (value1 < value2)
		return value1;
	return value2;
}

template <typename T>
T &max(T &value1, T &value2)
{
	if (value1 > value2)
		return value1;
	return value2;
}