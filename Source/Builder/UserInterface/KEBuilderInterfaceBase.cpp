/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *                                                                           *
 *   contact: djkabala@gmail.com                                             *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU General Public License as published            *
 * by the Free Software Foundation, version 3.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU General Public                 *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class BuilderInterface!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILEBUILDERINTERFACEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "KEBuilderInterfaceBase.h"
#include "KEBuilderInterface.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BuilderInterfaceBase::MenuBarFieldMask = 
    (TypeTraits<BitVector>::One << BuilderInterfaceBase::MenuBarFieldId);

const OSG::BitVector  BuilderInterfaceBase::ToolbarFieldMask = 
    (TypeTraits<BitVector>::One << BuilderInterfaceBase::ToolbarFieldId);

const OSG::BitVector  BuilderInterfaceBase::StatusbarFieldMask = 
    (TypeTraits<BitVector>::One << BuilderInterfaceBase::StatusbarFieldId);

const OSG::BitVector  BuilderInterfaceBase::EditorFieldMask = 
    (TypeTraits<BitVector>::One << BuilderInterfaceBase::EditorFieldId);

const OSG::BitVector  BuilderInterfaceBase::DrawingSurfaceFieldMask = 
    (TypeTraits<BitVector>::One << BuilderInterfaceBase::DrawingSurfaceFieldId);

const OSG::BitVector  BuilderInterfaceBase::MainInternalWindowFieldMask = 
    (TypeTraits<BitVector>::One << BuilderInterfaceBase::MainInternalWindowFieldId);

const OSG::BitVector BuilderInterfaceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var MenuBarPtr      BuilderInterfaceBase::_sfMenuBar
    
*/
/*! \var ToolbarPtr      BuilderInterfaceBase::_sfToolbar
    
*/
/*! \var StatusbarPtr    BuilderInterfaceBase::_sfStatusbar
    
*/
/*! \var EditorInterfacePtr BuilderInterfaceBase::_sfEditor
    
*/
/*! \var UIDrawingSurfacePtr BuilderInterfaceBase::_sfDrawingSurface
    
*/
/*! \var InternalWindowPtr BuilderInterfaceBase::_sfMainInternalWindow
    
*/

//! BuilderInterface description

FieldDescription *BuilderInterfaceBase::_desc[] = 
{
    new FieldDescription(SFMenuBarPtr::getClassType(), 
                     "MenuBar", 
                     MenuBarFieldId, MenuBarFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BuilderInterfaceBase::editSFMenuBar)),
    new FieldDescription(SFToolbarPtr::getClassType(), 
                     "Toolbar", 
                     ToolbarFieldId, ToolbarFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BuilderInterfaceBase::editSFToolbar)),
    new FieldDescription(SFStatusbarPtr::getClassType(), 
                     "Statusbar", 
                     StatusbarFieldId, StatusbarFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BuilderInterfaceBase::editSFStatusbar)),
    new FieldDescription(SFEditorInterfacePtr::getClassType(), 
                     "Editor", 
                     EditorFieldId, EditorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BuilderInterfaceBase::editSFEditor)),
    new FieldDescription(SFUIDrawingSurfacePtr::getClassType(), 
                     "DrawingSurface", 
                     DrawingSurfaceFieldId, DrawingSurfaceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BuilderInterfaceBase::editSFDrawingSurface)),
    new FieldDescription(SFInternalWindowPtr::getClassType(), 
                     "MainInternalWindow", 
                     MainInternalWindowFieldId, MainInternalWindowFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BuilderInterfaceBase::editSFMainInternalWindow))
};


FieldContainerType BuilderInterfaceBase::_type(
    "BuilderInterface",
    "Interface",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&BuilderInterfaceBase::createEmpty),
    BuilderInterface::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BuilderInterfaceBase, BuilderInterfacePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BuilderInterfaceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BuilderInterfaceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BuilderInterfaceBase::shallowCopy(void) const 
{ 
    BuilderInterfacePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BuilderInterface *>(this)); 

    return returnValue; 
}

UInt32 BuilderInterfaceBase::getContainerSize(void) const 
{ 
    return sizeof(BuilderInterface); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BuilderInterfaceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<BuilderInterfaceBase *>(&other),
                          whichField);
}
#else
void BuilderInterfaceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BuilderInterfaceBase *) &other, whichField, sInfo);
}
void BuilderInterfaceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BuilderInterfaceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BuilderInterfaceBase::BuilderInterfaceBase(void) :
    _sfMenuBar                (MenuBarPtr(NullFC)), 
    _sfToolbar                (ToolbarPtr(NullFC)), 
    _sfStatusbar              (StatusbarPtr(NullFC)), 
    _sfEditor                 (EditorInterfacePtr(NullFC)), 
    _sfDrawingSurface         (UIDrawingSurfacePtr(NullFC)), 
    _sfMainInternalWindow     (InternalWindowPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BuilderInterfaceBase::BuilderInterfaceBase(const BuilderInterfaceBase &source) :
    _sfMenuBar                (source._sfMenuBar                ), 
    _sfToolbar                (source._sfToolbar                ), 
    _sfStatusbar              (source._sfStatusbar              ), 
    _sfEditor                 (source._sfEditor                 ), 
    _sfDrawingSurface         (source._sfDrawingSurface         ), 
    _sfMainInternalWindow     (source._sfMainInternalWindow     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BuilderInterfaceBase::~BuilderInterfaceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BuilderInterfaceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        returnValue += _sfMenuBar.getBinSize();
    }

    if(FieldBits::NoField != (ToolbarFieldMask & whichField))
    {
        returnValue += _sfToolbar.getBinSize();
    }

    if(FieldBits::NoField != (StatusbarFieldMask & whichField))
    {
        returnValue += _sfStatusbar.getBinSize();
    }

    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        returnValue += _sfEditor.getBinSize();
    }

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        returnValue += _sfDrawingSurface.getBinSize();
    }

    if(FieldBits::NoField != (MainInternalWindowFieldMask & whichField))
    {
        returnValue += _sfMainInternalWindow.getBinSize();
    }


    return returnValue;
}

void BuilderInterfaceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        _sfMenuBar.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ToolbarFieldMask & whichField))
    {
        _sfToolbar.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StatusbarFieldMask & whichField))
    {
        _sfStatusbar.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        _sfEditor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MainInternalWindowFieldMask & whichField))
    {
        _sfMainInternalWindow.copyToBin(pMem);
    }


}

void BuilderInterfaceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        _sfMenuBar.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ToolbarFieldMask & whichField))
    {
        _sfToolbar.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StatusbarFieldMask & whichField))
    {
        _sfStatusbar.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        _sfEditor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MainInternalWindowFieldMask & whichField))
    {
        _sfMainInternalWindow.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BuilderInterfaceBase::executeSyncImpl(      BuilderInterfaceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
        _sfMenuBar.syncWith(pOther->_sfMenuBar);

    if(FieldBits::NoField != (ToolbarFieldMask & whichField))
        _sfToolbar.syncWith(pOther->_sfToolbar);

    if(FieldBits::NoField != (StatusbarFieldMask & whichField))
        _sfStatusbar.syncWith(pOther->_sfStatusbar);

    if(FieldBits::NoField != (EditorFieldMask & whichField))
        _sfEditor.syncWith(pOther->_sfEditor);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
        _sfDrawingSurface.syncWith(pOther->_sfDrawingSurface);

    if(FieldBits::NoField != (MainInternalWindowFieldMask & whichField))
        _sfMainInternalWindow.syncWith(pOther->_sfMainInternalWindow);


}
#else
void BuilderInterfaceBase::executeSyncImpl(      BuilderInterfaceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
        _sfMenuBar.syncWith(pOther->_sfMenuBar);

    if(FieldBits::NoField != (ToolbarFieldMask & whichField))
        _sfToolbar.syncWith(pOther->_sfToolbar);

    if(FieldBits::NoField != (StatusbarFieldMask & whichField))
        _sfStatusbar.syncWith(pOther->_sfStatusbar);

    if(FieldBits::NoField != (EditorFieldMask & whichField))
        _sfEditor.syncWith(pOther->_sfEditor);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
        _sfDrawingSurface.syncWith(pOther->_sfDrawingSurface);

    if(FieldBits::NoField != (MainInternalWindowFieldMask & whichField))
        _sfMainInternalWindow.syncWith(pOther->_sfMainInternalWindow);



}

void BuilderInterfaceBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BuilderInterfacePtr>::_type("BuilderInterfacePtr", "InterfacePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BuilderInterfacePtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BuilderInterfacePtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE

