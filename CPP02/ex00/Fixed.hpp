#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();
	Fixed &operator=(const Fixed &assigned);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int m_rawbits;
	static const int m_nfractbits = 8;
};

#endif
