#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &rhs);
		~Span(void);
		Span				&operator=(const Span &rhs);

		void		addNumber(int n);
		void		addMoreNumber();
		int			shortestSpan();
		int			longestSpan();

		class NotEnoughNbException : public std::exception{
		public:
			virtual const char * what() const throw() {
				return ("Not enough number in span !");
			}
		};
		class CapacityException : public std::exception{
		public:
			virtual const char * what() const throw() {
				return ("Span capacity fulfilled !");
			}
		};

	private:
		Span(void);
		std::vector<int>	m_tab;
		unsigned int		m_n;
};

#endif
