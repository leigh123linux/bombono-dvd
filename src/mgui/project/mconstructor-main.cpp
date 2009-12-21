//
// mgui/project/mconstructor-main.cpp
// This file is part of Bombono DVD project.
//
// Copyright (c) 2008-2009 Ilya Murav'jov
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

#include <mgui/_pc_.h>

#include "mconstructor.h"
#include <mgui/win_utils.h>

// 
// Приложение Bombono DVD - создание меню для DVD-дисков и не только
// Использование:
//  $ bombono-dvd [project-file]
// 

int main(int argc, char *argv[])
{
    //Gtk::Main main_instance(argc, argv);
    InitGtkmm(argc, argv);
    Project::RunConstructor( argc>1 ? argv[1] : "" );
    return 0;
}

