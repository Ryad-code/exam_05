#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void)
{
	name = "Fwoosh";
	effects = "fwooshed";
}

Fwoosh::~Fwoosh(void) {}

ASpell*		Fwoosh::clone(void) const
{
	return(new Fwoosh());
}
