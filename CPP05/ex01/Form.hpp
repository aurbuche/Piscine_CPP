#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const& Name, unsigned int Grade);
		Form(const Form &rhs);
		~Form(void);
		Form				&operator=(const Form &rhs);

//		GETTER // SETTER
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;
		int					getSigned(void) const;
		void				setSigned();
		std::string			getName(void) const;
		void				beSigned(const Bureaucrat &target);

		class GradeTooLowExceptions : public std::exception{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade to low");
			}
		};
		class GradeTooHighExceptions : public std::exception{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade to high");
			}
		};

	private:
		std::string	const	m_name;
		bool				m_signed;
		const unsigned int	m_signGrade;
		const unsigned int	m_execGrade;
		Form(void);
};

std::ostream&	operator<<(std::ostream& os, Form const& f);

#endif