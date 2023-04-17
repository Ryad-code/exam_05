#pragma once

#include <iostream>
#include <iomanip>

class Warlock
{
	private:
		std::string	name;
		std::string	title;
		Warlock(void);
		Warlock(const Warlock &obj);
		Warlock &operator=(const Warlock &obj);

	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);

		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;

		void		setTitle(const std::string &_title);
		void		introduce(void) const;
};
