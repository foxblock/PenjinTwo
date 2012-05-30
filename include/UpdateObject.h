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
*/#ifndef UPDATEOBJECT_H
#define UPDATEOBJECT_H

#include "Object.h"

namespace Penjin
{
    class UpdateObject : public Object
    {
        public:
            /** Default constructor */
            UpdateObject();
            /** Default destructor */
            virtual ~UpdateObject();

            virtual void update()=0;

        protected:
        private:
    };
}
#endif // UPDATEOBJECT_H