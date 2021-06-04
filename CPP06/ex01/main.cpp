#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void)
{
	unsigned char *raw = new unsigned char[20];

	// Init first string with printable-only values.
	for (size_t i = 0; i < 8; ++i)
		raw[i] = rand() % 26 + 97;
	// Init integer.
	for (size_t i = 8; i < 12; ++i)
		raw[i] = rand() % INT_MAX;
	// Init second string like first one
	for (size_t i = 12; i < 20; ++i)
		raw[i] = rand() % 26 + 97;

	return raw;
}

Data *deserialize(void *raw)
{
	char *ptr = static_cast<char *>(raw);
	Data *data = new Data;

	for (size_t i = 0; i < 8; ++i)
		data->s1 += ptr[i];
	data->n = *reinterpret_cast<int *>(ptr + 8);
	for (size_t i = 12; i < 20; ++i)
		data->s2 += ptr[i];

	return data;
}

int main(void)
{
	srand(time(NULL));
	void *raw = serialize();
	Data *d = deserialize(raw);

	std::cout << "(\"" << d->s1 << "\", " << d->n << ", \"" << d->s2 << "\")" << std::endl;
	return 0;
}