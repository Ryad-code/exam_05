#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(const ASpell& obj)
{
	*this = obj;
}

ASpell::ASpell(std::string _name, std::string _effects)
{
	name = _name;
	effects = _effects;
}

ASpell			&ASpell::operator=(const ASpell& obj)
{
	name = obj.name;
	effects = obj.effects;
	return *this;
}

ASpell::~ASpell(void) {}

const std::string&	ASpell::getName(void) const
{
	return name;
}

const std::string&	ASpell::getEffects(void) const
{
	return effects;
}

void			ASpell::launch(const ATarget& obj) const
{
	obj.getHitBySpell(*this);
}
