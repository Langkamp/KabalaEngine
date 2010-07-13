/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  David Kabala (djkabala@gmail.com), Eric Langkamp              *
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
 **     class LuaBehavior!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OpenSG/OSGConfig.h>




#include "KELuaBehaviorBase.h"
#include "KELuaBehavior.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LuaBehavior
    The Lua Behavior.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<LuaBehavior *>::_type("LuaBehaviorPtr", "BehaviorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(LuaBehavior *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           LuaBehavior *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           LuaBehavior *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LuaBehaviorBase::classDescInserter(TypeObject &oType)
{
}


LuaBehaviorBase::TypeObject LuaBehaviorBase::_type(
    LuaBehaviorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&LuaBehaviorBase::createEmptyLocal),
    LuaBehavior::initMethod,
    LuaBehavior::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&LuaBehavior::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"LuaBehavior\"\n"
    "\tparent=\"Behavior\"\n"
    "\tlibrary=\"KabalaEngine\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "\tlibnamespace=\"KE\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), Eric Langkamp              \"\n"
    ">\n"
    "The Lua Behavior.\n"
    "   \n"
    "</FieldContainer>\n",
    "The Lua Behavior.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LuaBehaviorBase::getType(void)
{
    return _type;
}

const FieldContainerType &LuaBehaviorBase::getType(void) const
{
    return _type;
}

UInt32 LuaBehaviorBase::getContainerSize(void) const
{
    return sizeof(LuaBehavior);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 LuaBehaviorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void LuaBehaviorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void LuaBehaviorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
LuaBehaviorTransitPtr LuaBehaviorBase::createLocal(BitVector bFlags)
{
    LuaBehaviorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LuaBehavior>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
LuaBehaviorTransitPtr LuaBehaviorBase::createDependent(BitVector bFlags)
{
    LuaBehaviorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<LuaBehavior>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LuaBehaviorTransitPtr LuaBehaviorBase::create(void)
{
    LuaBehaviorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LuaBehavior>(tmpPtr);
    }

    return fc;
}

LuaBehavior *LuaBehaviorBase::createEmptyLocal(BitVector bFlags)
{
    LuaBehavior *returnValue;

    newPtr<LuaBehavior>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
LuaBehavior *LuaBehaviorBase::createEmpty(void)
{
    LuaBehavior *returnValue;

    newPtr<LuaBehavior>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr LuaBehaviorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LuaBehavior *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LuaBehavior *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LuaBehaviorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    LuaBehavior *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LuaBehavior *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr LuaBehaviorBase::shallowCopy(void) const
{
    LuaBehavior *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const LuaBehavior *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

LuaBehaviorBase::LuaBehaviorBase(void) :
    Inherited()
{
}

LuaBehaviorBase::LuaBehaviorBase(const LuaBehaviorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

LuaBehaviorBase::~LuaBehaviorBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void LuaBehaviorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    LuaBehavior *pThis = static_cast<LuaBehavior *>(this);

    pThis->execSync(static_cast<LuaBehavior *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *LuaBehaviorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    LuaBehavior *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LuaBehavior *>(pRefAspect),
                  dynamic_cast<const LuaBehavior *>(this));

    return returnValue;
}
#endif

void LuaBehaviorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
