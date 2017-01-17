/***************************************************************************
						filter.cpp  -  description
							-------------------
	begin                : july 2nd, 2006
	copyright            : (C) 2006 by Frédéric RODRIGO
	email                : f.rodrigo free.fr
	
	$Id: filter.cpp 167 2007-02-10 15:58:22Z frodrigo $
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   any later version.                                                    *
 *                                                                         *
 ***************************************************************************/

#include "filter.h"

namespace MapGen
{

   /*=====================================================================*/
Filter::Filter()
{
	MAP_DEBUG( "ctor" );
}


   /*=====================================================================*/
Filter::~Filter()
{
	MAP_DEBUG( "dtor" );
}


   /*=====================================================================*/
void Filter::_getMinMax(
	const Map* map,
	float& min,
	float& max )
{
	float val = 0;

	min = max = map->getAt( 0, 0 );

	uint w = map->getW();
	uint h = map->getL();

	for( uint x = 0; x < w; ++x )
		for( uint y = 0; y < h; ++y ) {
			val = map->getAt( x, y );
			if( val < min )
				min = val;
			if( val > max )
				max = val;
		}
}

}
