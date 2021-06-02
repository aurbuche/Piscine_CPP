#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(const ShrubberyCreationForm &rhs);

		//		GETTER // SETTER

		unsigned int		getsignGrade(void) const;
		void				setsignGrade(int value);
		unsigned int		getexecGrade(void) const;
		void				setexecGrade(int value);
		void				createTreeFile();
		virtual void		execute(Bureaucrat const &executor) const;

	private:
		ShrubberyCreationForm(void);
		std::string			m_target;
};

#endif