#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(const ShrubberyCreationForm &rhs);

		//		GETTER // SETTER

		unsigned int		getsignGrade(void) const;
		void				setsignGrade(unsigned int value);
		unsigned int		getexecGrade(void) const;
		void				setexecGrade(unsigned int value);
		virtual void		execute(Bureaucrat const &executor) const;

	private:
		std::string			m_target;
};

#endif