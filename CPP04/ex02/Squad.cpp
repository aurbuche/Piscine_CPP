#include "Squad.hpp"

Squad::Squad(void) : _unit(NULL), _count(0)
{
}

Squad::Squad(const ISquad &copy) : _unit(NULL), _count(0)
{
	int i = 0;
	while (i < _count)
	{
		push(copy.getUnit(i)->clone());
		i++;
	}
}

Squad::~Squad(void)
{
	int i = 0;
	while (i < _count)
	{
		delete _unit[i];
		i++;
	}
	delete [] _unit;
}

Squad		& Squad::operator=(const ISquad &rhs)
{
	int i = 0;
	while (i < _count)
	{
		delete _unit[i];
		i++;
	}
	delete [] _unit;
	_count = 0;
	i = 0;
	while (i < rhs.getCount())
	{
		push(rhs.getUnit(i)->clone());
		i++;
	}
	return (*this);
}

int			Squad::getCount(void) const {
	return _count;
}

ISpaceMarine*	Squad::getUnit(int N) const {
	if (N < 0 || N >= _count)
		return NULL;
	return _unit[N];
}

int			Squad::push(ISpaceMarine* pushUnit) {
	int i = 0;
	if (pushUnit)
	{
		while (i < _count)
		{
			if (_unit[i] == pushUnit)
				return _count;
			i++;
		}
		ISpaceMarine** tmp = new ISpaceMarine*[_count + 1];
		i = 0;
		while (i < _count)
		{
			tmp[i] = _unit[i];
			i++;
		}
		tmp[_count] = pushUnit;
		delete [] _unit;
		_unit = tmp;
		_count++;
	}
	return (_count);
}
