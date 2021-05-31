#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(const ShrubberyCreationForm &rhs);

//		GETTER // SETTER

		int					getsignGrade(void) const;
		void				setsignGrade(int const value);
		int					getexecGrade(void) const;
		void				setexecGrade(int const value);

	private:
		std::string			target;
};

#endif