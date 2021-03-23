#include "Fixed.hpp"

Fixed::Fixed(void) : m_rawbits(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : m_rawbits(value)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : m_rawbits(value)
{
	std::cout << "Float constructor called" << std::endl;
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
	this->m_rawbits = assigned.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return m_rawbits;
}

void Fixed::setRawBits(const int raw) {
	m_rawbits = raw;
}

int	Fixed::toInt(void) const {
	return getRawBits();
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.getRawBits();
	return o;
}
