#ifndef	PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include <cstdio>

# define MAX_CONTACT 8

class	Infos {
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

		void add();
		void display(int i);
};

#endif


//std::string astring(" Test Test Test ");
//std::remove(astring.begin(), astring.end(), ' ');
//std::cout << astring << std::endl;

