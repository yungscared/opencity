/***************************************************************************
						contextOnlyPositive.h  -  description
							-------------------
	begin                : jun 19th, 2007
	copyright            : (C) 2007 by Fr�d�ric RODRIGO
	email                : f.rodrigo free.fr
	
	$Id: shape.h 124 2007-01-13 17:28:49Z neoneurone $
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   any later version.                                                    *
 *                                                                         *
 ***************************************************************************/

#ifndef _OPENCITY_CONTEXTONLYPOSITIVE_H_
#define _OPENCITY_CONTEXTONLYPOSITIVE_H_ 1

#include "context.h"

namespace MapGen
{


//========================================================================
/** Keep value only when context is positive
*/
class ContextOnlyPositive: public Context {
public:
	ContextOnlyPositive();
	virtual ~ContextOnlyPositive();

	float contextualize( const float height, const float context ) const;

private:

};


}

#endif
