#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T>
class Array
{
private:
	unsigned int	m_nElement;
	T	*m_array;

public:
	Array(void)
	{
		m_array = new T();
		m_nElement = 0;
	};

	Array(unsigned int n)
	{
		m_array = new T[n];
		m_nElement = n;
		for (unsigned int i = 0; i < n; i++)
			m_array[i] = T();
	};
	Array<T>(const Array &copy)
	{
		*this = copy;
	};
	~Array(void)
	{
		if (m_nElement == 0)
			delete m_array;
		else
			delete[] m_array;
	};
	Array & operator=(const Array & copy)
	{
		m_nElement = copy.m_nElement;
		delete m_array;
		if (copy.m_nElement == 0)
			m_array = new T;
		else
			m_array = new T[m_nElement];
		for (size_t i = 0; i < m_nElement; i++) {
			m_array[i] = copy.m_array[i];
		}
		return *this;
	}

	/**********************************************************/

	T& operator[](unsigned int i)
	{
		if (i >= m_nElement)
			throw std::exception();
		return m_array[i];
	};

	T	&operator[](const T i) const
	{
		if (i >= m_nElement)
			throw std::exception();
		return m_array[i];
	};

	unsigned int	size()
	{
		return m_nElement;
	}
};

#endif