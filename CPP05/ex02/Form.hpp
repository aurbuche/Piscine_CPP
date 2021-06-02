#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const& Name, unsigned int Grade, unsigned int execGrade);
		Form(const Form &rhs);
		virtual ~Form(void);
		Form				&operator=(const Form &rhs);

//		GETTER // SETTER
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;
		bool				getSigned(void) const;
		void				setSigned();
		std::string			getName(void) const;
		void				beSigned(const Bureaucrat &target);
		virtual void    	execute(Bureaucrat const & executor) const = 0;

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
		Form(void);
		std::string	const	m_name;
		bool				m_signed;
		const unsigned int	m_signGrade;
		const unsigned int	m_execGrade;
};

std::ostream&	operator<<(std::ostream& os, Form const& f);

#endif