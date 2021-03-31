#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <fstream>

class Victim
{
public:
	Victim(void);
	Victim(std::string const name);
	Victim(const Victim &rhs);
	~Victim(void);
	Victim				&operator=(const Victim &rhs);
	void	getPolymorphed() const;

	std::string			getName(void) const;
	void				setName(std::string const value);

private:
	std::string			m_name;
};
std::ostream &	operator<<(std::ostream & o, Victim const & victim);

#endif