#ifndef PERSON_HPP
#   define PERSON_HPP
#   include "Victim.hpp"

class Person : virtual public Victim {

public:

	Person(std::string name);
	Person(Person const & copy);
	virtual ~Person();
	Person	&operator=(const Person & rhs);

	virtual void	getPolymorph() const ;

private:

	Person();

};

#endif
