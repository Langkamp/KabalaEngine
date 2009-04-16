/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   contact: dkabala@vrac.iastate.edu                                       *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _KEABOUTKEWINDOW_H_
#define _KEABOUTKEWINDOW_H_
#ifdef __sgi
#pragma once
#endif

#include "KEConfig.h"
#include "KEKabalaEngineDef.h"

#include <OpenSG/UserInterface/OSGInternalWindowFields.h>
#include <OpenSG/UserInterface/OSGUIDrawingSurfaceFields.h>

OSG_USING_NAMESPACE
KE_BEGIN_NAMESPACE

InternalWindowPtr KE_KABALAENGINELIB_DLLMAPPING createAboutKabalaEngineWindow(void);

InternalWindowPtr KE_KABALAENGINELIB_DLLMAPPING openAboutKabalaEngineWindow(UIDrawingSurfacePtr TheDrawingSurface);

KE_END_NAMESPACE

#endif /* _KEABOUTKEWINDOW_H_ */
