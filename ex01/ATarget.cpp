#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(const ATarget& obj)
{
	*this = obj;
}

ATarget::ATarget(std::string _type)
{
	type = _type;
}

ATarget &ATarget::operator=(const ATarget& obj)
{
	type = obj.type;
	return *this;
}

ATarget::~ATarget(void) {}

const std::string&	ATarget::getType(void) const
{
	return type;
}

void			ATarget::getHitBySpell(const ASpell& obj) const
{
	std::cout << type << " has been " << obj.getEffects() << "!\n";
}
