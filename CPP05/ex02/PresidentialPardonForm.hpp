#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm(void);
		PresidentialPardonForm			&operator=(const PresidentialPardonForm &rhs);

//		GETTER // SETTER

		int					getsignGrade(void) const;
		void				setsignGrade(int const value);
		int					getexecGrade(void) const;
		void				setexecGrade(int const value);

	private:
		std::string			target;
};

#endif