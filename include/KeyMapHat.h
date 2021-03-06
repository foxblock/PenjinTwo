/*
	PenjinTwo is Copyright (c)2005, 2006, 2007, 2008, 2009, 2010 Kevin Winfield-Pantoja

	This file is part of PenjinTwo.

	PenjinTwo is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	PenjinTwo is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with PenjinTwo.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAPHAT_H
#define KEYMAPHAT_H

#include "KeyMap.h"
using Penjin::KeyMap;
using namespace Penjin::KeyMappings;

class KeyMapHat : public KeyMap
{
    public:
        KeyMapHat();
        KeyMapHat(CRstring dir, CRstring SJ, CRuchar devID, CRuint player = 1);
        KeyMapHat(const Uint8& dir,CRstring SJ, CRuchar devID, CRuint player = 1);
        virtual ~KeyMapHat();

        void setBind(const Uint8& dir,CRstring SJ, CRuchar devID);
        Uint8 getDirection()const{return direction;}

        virtual bool isMapValid();

    private:
        void setDirection(CRstring direction);
        Uint8 direction;
};

#endif // KEYMAPHAT_H
