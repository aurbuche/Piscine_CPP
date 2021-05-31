#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat			&operator=(const Bureaucrat &rhs);

//		GETTER // SETTER

		void 					signForm(Form &form);
		std::string	const		getName(void) const;
		void					setName(std::string const value);
		unsigned int			getGrade(void) const;
		void					setGrade(int const value);
		void					incrementation();
		void					decrementation();

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
		Bureaucrat(void);
		std::string const	m_Name;
		unsigned int		m_Grade;
};

std::ostream&      operator<<(std::ostream& os, Bureaucrat const& f);

#endif