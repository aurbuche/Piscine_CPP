#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <fstream>

class Victim
{
	public:
		Victim(std::string const name);
		Victim(const Victim &rhs);
		virtual ~Victim(void);
		Victim				&operator=(const Victim &rhs);
		virtual void		getPolymorphed() const;

		std::string			getName(void) const;
		void				setName(std::string const value);

	protected:
		std::string			m_name;
	private:
		Victim(void);
};
std::ostream &	operator<<(std::ostream & o, Victim const & victim);

#endif