#pragma once

#include <iostream>
#include <iomanip>

class ATarget;

class ASpell
{
	protected:
		std::string	name;
		std::string	effects;

	public:
		ASpell(void);
		ASpell(const ASpell& obj);
		ASpell(std::string _name, std::string _effects);
		ASpell &operator=(const ASpell& obj);
		~ASpell(void);

		//Getters
		const std::string&	getName(void) const;
		const std::string&	getEffects(void) const;

		//Clone
		virtual ASpell*		clone(void) const = 0;

		void			launch(const ATarget& obj) const;
};

#include "ATarget.hpp"
