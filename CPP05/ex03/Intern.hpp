#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &rhs);
		~Intern(void);
		Intern				&operator=(const Intern &rhs);

		Form	*makeForm(std::string nameForm, std::string targetForm);

		class FormDontExistException : public std::exception{
		public:
			virtual const char * what() const throw()
			{
				return ("The requested form dont exist\n");
			}
		};

	private:
};

#endif