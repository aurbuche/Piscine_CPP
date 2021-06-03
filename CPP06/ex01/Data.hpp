#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data(void);
		Data(const Data &rhs);
		~Data(void);
		Data				&operator=(const Data &rhs);

//		GETTER // SETTER


	private:
		std::string			m_s1;
		std::string			m_s2;
		int					m_n;
};

#endif