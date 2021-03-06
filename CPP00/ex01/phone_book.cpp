#include "phone_book.hpp"

void	Infos::add()
{
	std::cout << "Enter your first name: " << std::endl;
	std::getline (std::cin, first_name);
	std::cout << "Enter your last name: " << std::endl;
	std::getline (std::cin, last_name);
	std::cout << "Enter your nickname: " << std::endl;
	std::getline (std::cin, nickname);
	std::cout << "Enter your login: " << std::endl;
	std::getline (std::cin, login);
	std::cout << "Enter your postal address: " << std::endl;
	std::getline (std::cin, postal_address);
	std::cout << "Enter your email address: " << std::endl;
	std::getline (std::cin, email_address);
	std::cout << "Enter your phone number: " << std::endl;
	std::getline (std::cin, phone_number);
	std::cout << "Enter your birthday date: " << std::endl;
	std::getline (std::cin, birthday_date);
	std::cout << "Enter your favorite meal: " << std::endl;
	std::getline (std::cin, favorite_meal);
	std::cout << "Enter your underwear color: " << std::endl;
	std::getline (std::cin, underwear_color);
	std::cout << "Enter your darkest secret: " << std::endl;
	std::getline (std::cin, darkest_secret);
}

std::string		disp(std::string s)
{
	std::string space = "          ";
	int		len = s.length();

	if (len == 10)
		return (s);
	else if (len <= 10)
	{
		std::string tmp = s;
		s = "";
		s.append(space, len);
		s.append(tmp);
	}
	else
	{
		s.resize(9);
		s.append(".");
	}
	return (s);
}

void	Infos::display(int i) {
	std::cout << "|";
	std::cout << "         " << i + 1;
	std::cout << "|";
	std::cout << disp(first_name);
	std::cout << "|";
	std::cout << disp(last_name);
	std::cout << "|";
	std::cout << disp(nickname);
	std::cout << "|" << std::endl;
}

void	Infos::infos(){
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal_address << std::endl;
	std::cout << "Email address: " << email_address << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Birthday date: " << birthday_date << std::endl;
	std::cout << "Favortie meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

int		main(void)
{
	Infos Contact[MAX_CONTACT];

	int	n;
	int	index;
	std::string mode;

	n = 0;
	index = 0;
	std::cout << "Select the mode: ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, mode))
	{
		if (!mode.compare("EXIT"))
		{
			std::cout << "Good bye!" << std::endl;
			exit(0);
		}
		else if (!mode.compare("ADD"))
		{
			if (n < MAX_CONTACT)
			{
				Contact[n].add();
				n++;
			}
			else
				std::cout << "No space left on device!" << std::endl;
		}
		else if (!mode.compare("SEARCH"))
		{
			if (n > 0)
			{
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				for (int i = 0; i < n; i++)
					Contact[i].display(i);
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "Select the contact that you want to see the information:" << std::endl;
				std::cin >> index;
				std::cin.ignore();
				if (index - 1 > n)
					std::cout << "The contact doesn't exist!" << std::endl;
				else
					Contact[index - 1].infos();
			}
			else
				std::cout << "No contacts to display!" << std::endl;
		}
		else
			std::cout << "Unknown mode!" << std::endl << std::endl;
		std::cout << std::endl << "Select the mode: ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "Good bye!" << std::endl;
	return 0;
}
