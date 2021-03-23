#include "Fixed.hpp"

const int Fixed::m_nfractbits = 0;

Fixed::Fixed(void) : m_rawbits(8)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return m_rawbits;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	m_rawbits = raw;
}
