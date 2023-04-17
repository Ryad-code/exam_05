#pragma once

#include <iostream>
#include <iomanip>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string			name;
		std::string			title;
		std::vector<ASpell*>		spells;
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

		void		learnSpell(ASpell* obj);
		void		forgetSpell(std::string spell);
		void		launchSpell(std::string spell, ATarget& obj);
};
