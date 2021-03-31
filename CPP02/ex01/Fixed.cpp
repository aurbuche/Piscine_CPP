#include "Fixed.hpp"

Fixed::Fixed(void) : m_rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : m_rawbits(value)
{
	std::cout << "Int constructor called" << std::endl;
	m_rawbits = value << Fixed::m_nfractbits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	m_rawbits = (value * (1 << Fixed::m_nfractbits));
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructior called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(const Fixed &assigned)
{
	std::cout << "Assignation operator called" << std::endl;
	m_rawbits = assigned.m_rawbits;
	return (*this);
}

int Fixed::getRawBits(void) const {
	return m_rawbits;
}

void Fixed::setRawBits(const int raw) {
	m_rawbits = raw;
}

int	Fixed::toInt(void) const {
	return roundf(toFloat());
}

float Fixed::toFloat(void) const {
	return ((float)m_rawbits / (1 << m_nfractbits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}
