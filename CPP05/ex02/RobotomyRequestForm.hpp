#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostrea,>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm			&operator=(const RobotomyRequestForm &rhs);

//		GETTER // SETTER

		virtual void   execute(Bureaucrat const & exec) const;

	private:
		std::string			target;
};

#endif