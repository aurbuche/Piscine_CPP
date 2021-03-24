#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed&);
	~Fixed();
	Fixed &operator=(const Fixed &assigned);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;

private:
	int m_rawbits;
	static const int m_nfractbits = 8;
};
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
