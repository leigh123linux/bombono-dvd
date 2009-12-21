//
// mbase/project/_extlibs_.h
// This file is part of Bombono DVD project.
//
// Copyright (c) 2008 Ilya Murav'jov
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
// 

#ifndef __MBASE_PROJECT__EXTLIBS__H__
#define __MBASE_PROJECT__EXTLIBS__H__

//
// _extlibs_.h - внешние библиотеки mbase/project
// 

#include "tech.h"

#include <boost/function.hpp>

#ifndef EXT_BOOST
#include <mlib/lambda.h>
#endif // EXT_BOOST

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>

//#include <boost/smart_ptr.hpp>
#include <boost/intrusive_ptr.hpp>

//#include <glibmm.h>
#include <glibmm/convert.h>

#include <libxml++/libxml++.h>


#endif // __MBASE_PROJECT__EXTLIBS__H__

