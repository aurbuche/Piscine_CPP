#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm &rhs);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm			&operator=(const RobotomyRequestForm &rhs);

//		GETTER // SETTER
		unsigned int		getsignGrade(void) const;
		void				setsignGrade(unsigned int value);
		unsigned int		getexecGrade(void) const;
		void				setexecGrade(unsigned int value);
		virtual void   execute(Bureaucrat const & exec) const;

	private:
		std::string			m_target;
};

#endif