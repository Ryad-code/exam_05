#pragma once

#include <iostream>
#include <iomanip>

class ASpell;

class ATarget
{
	protected:
		std::string	type;

	public:
		ATarget(void);
		ATarget(const ATarget& obj);
		ATarget(std::string _type);
		ATarget &operator=(const ATarget& obj);
		~ATarget(void);

		//Getter
		const std::string&	getType(void) const;

		//Clone
		virtual ATarget*	clone(void) const = 0;

		//Get Hit
		void			getHitBySpell(const ASpell& obj) const;

};

#include "ASpell.hpp"
