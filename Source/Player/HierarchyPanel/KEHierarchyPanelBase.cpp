/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  David Kabala (djkabala@gmail.com)                             *
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
 **     class HierarchyPanel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OpenSG/OSGConfig.h>




#include "KEHierarchyPanelBase.h"
#include "KEHierarchyPanel.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::HierarchyPanel
    The HierarchyPanel. Stores the tree structure for the lua files and the scenegraph.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<HierarchyPanel *>::_type("HierarchyPanelPtr", "PanelPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(HierarchyPanel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           HierarchyPanel *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           HierarchyPanel *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void HierarchyPanelBase::classDescInserter(TypeObject &oType)
{
}


HierarchyPanelBase::TypeObject HierarchyPanelBase::_type(
    HierarchyPanelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&HierarchyPanelBase::createEmptyLocal),
    HierarchyPanel::initMethod,
    HierarchyPanel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&HierarchyPanel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"HierarchyPanel\"\n"
    "\tparent=\"Panel\"\n"
    "\tlibrary=\"KabalaEngine\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "\tlibnamespace=\"KE\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "The HierarchyPanel. Stores the tree structure for the lua files and the scenegraph.\n"
    "\n"
    "</FieldContainer>\n",
    "The HierarchyPanel. Stores the tree structure for the lua files and the scenegraph.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &HierarchyPanelBase::getType(void)
{
    return _type;
}

const FieldContainerType &HierarchyPanelBase::getType(void) const
{
    return _type;
}

UInt32 HierarchyPanelBase::getContainerSize(void) const
{
    return sizeof(HierarchyPanel);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 HierarchyPanelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void HierarchyPanelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void HierarchyPanelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
HierarchyPanelTransitPtr HierarchyPanelBase::createLocal(BitVector bFlags)
{
    HierarchyPanelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<HierarchyPanel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
HierarchyPanelTransitPtr HierarchyPanelBase::createDependent(BitVector bFlags)
{
    HierarchyPanelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<HierarchyPanel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
HierarchyPanelTransitPtr HierarchyPanelBase::create(void)
{
    HierarchyPanelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<HierarchyPanel>(tmpPtr);
    }

    return fc;
}

HierarchyPanel *HierarchyPanelBase::createEmptyLocal(BitVector bFlags)
{
    HierarchyPanel *returnValue;

    newPtr<HierarchyPanel>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
HierarchyPanel *HierarchyPanelBase::createEmpty(void)
{
    HierarchyPanel *returnValue;

    newPtr<HierarchyPanel>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr HierarchyPanelBase::shallowCopyLocal(
    BitVector bFlags) const
{
    HierarchyPanel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const HierarchyPanel *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr HierarchyPanelBase::shallowCopyDependent(
    BitVector bFlags) const
{
    HierarchyPanel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const HierarchyPanel *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr HierarchyPanelBase::shallowCopy(void) const
{
    HierarchyPanel *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const HierarchyPanel *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

HierarchyPanelBase::HierarchyPanelBase(void) :
    Inherited()
{
}

HierarchyPanelBase::HierarchyPanelBase(const HierarchyPanelBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

HierarchyPanelBase::~HierarchyPanelBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void HierarchyPanelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    HierarchyPanel *pThis = static_cast<HierarchyPanel *>(this);

    pThis->execSync(static_cast<HierarchyPanel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *HierarchyPanelBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    HierarchyPanel *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const HierarchyPanel *>(pRefAspect),
                  dynamic_cast<const HierarchyPanel *>(this));

    return returnValue;
}
#endif

void HierarchyPanelBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
