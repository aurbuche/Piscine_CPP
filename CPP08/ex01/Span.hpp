#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>

class Span
{
	public:
		Span(void);
		Span(const Span &rhs);
		~Span(void);
		Span				&operator=(const Span &rhs);

//		GETTER // SETTER

		int					getN(void) const;
		void				setN(int const value);

	private:
		int					m_N;
};

#endif