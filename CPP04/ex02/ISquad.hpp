#ifndef ISQUAD_HPP
# define ISQUAD_HPP

class ISquad
{
	public:
		ISquad(void);
		ISquad(const ISquad &rhs);
		~ISquad(void);
		ISquad				&operator=(const ISquad &rhs);

//		GETTER // SETTER

		int					getcount(void) const;
		void				setcount(int const value);
		int					getunit(void) const;
		void				setunit(int const value);
		ISpaceMarine*			getunit(void) const;
		void				setunit(ISpaceMarine* const value);

	private:
		int					m_count;
		int					m_unit;
		ISpaceMarine*			m_unit;
};

#endif