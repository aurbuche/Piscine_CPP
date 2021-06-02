#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm &rhs);
		~PresidentialPardonForm(void);
		PresidentialPardonForm			&operator=(const PresidentialPardonForm &rhs);

//		GETTER // SETTER

		unsigned int		getsignGrade(void) const;
		void				setsignGrade(unsigned int value);
		unsigned int		getexecGrade(void) const;
		void				setexecGrade(unsigned int value);
		virtual void		execute(Bureaucrat const & executor) const;

private:
		std::string			m_target;
};

#endif