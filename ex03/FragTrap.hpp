#pragma once

#include "ClapTrap.hpp"
#include <iostream>

typedef std::string str;

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap(void);
		FragTrap(str name);
		FragTrap(const FragTrap &FragTrap);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap &FragTrap);
		int getHitPoints(void);
		int getAttackDamage(void);
		void highFivesGuys(void);
};