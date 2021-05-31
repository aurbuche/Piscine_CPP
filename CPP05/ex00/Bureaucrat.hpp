#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat			&operator=(const Bureaucrat &rhs);

//		GETTER // SETTER

		std::string	const		getName(void) const;
		void					setName(std::string const value);
		int						getGrade(void) const;
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