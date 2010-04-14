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
 **     class BehaviorFactory!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILEBEHAVIORFACTORYINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "KEBehaviorFactoryBase.h"
#include "KEBehaviorFactory.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BehaviorFactoryBase::BehaviorTypesFieldMask = 
    (TypeTraits<BitVector>::One << BehaviorFactoryBase::BehaviorTypesFieldId);

const OSG::BitVector BehaviorFactoryBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var BehaviorTypePtr BehaviorFactoryBase::_mfBehaviorTypes
    
*/

//! BehaviorFactory description

FieldDescription *BehaviorFactoryBase::_desc[] = 
{
    new FieldDescription(MFBehaviorTypePtr::getClassType(), 
                     "BehaviorTypes", 
                     BehaviorTypesFieldId, BehaviorTypesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&BehaviorFactoryBase::editMFBehaviorTypes))
};


FieldContainerType BehaviorFactoryBase::_type(
    "BehaviorFactory",
    "AttachmentContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&BehaviorFactoryBase::createEmpty),
    BehaviorFactory::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BehaviorFactoryBase, BehaviorFactoryPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BehaviorFactoryBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BehaviorFactoryBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BehaviorFactoryBase::shallowCopy(void) const 
{ 
    BehaviorFactoryPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BehaviorFactory *>(this)); 

    return returnValue; 
}

UInt32 BehaviorFactoryBase::getContainerSize(void) const 
{ 
    return sizeof(BehaviorFactory); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BehaviorFactoryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<BehaviorFactoryBase *>(&other),
                          whichField);
}
#else
void BehaviorFactoryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BehaviorFactoryBase *) &other, whichField, sInfo);
}
void BehaviorFactoryBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BehaviorFactoryBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfBehaviorTypes.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BehaviorFactoryBase::BehaviorFactoryBase(void) :
    _mfBehaviorTypes          (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BehaviorFactoryBase::BehaviorFactoryBase(const BehaviorFactoryBase &source) :
    _mfBehaviorTypes          (source._mfBehaviorTypes          ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BehaviorFactoryBase::~BehaviorFactoryBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BehaviorFactoryBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BehaviorTypesFieldMask & whichField))
    {
        returnValue += _mfBehaviorTypes.getBinSize();
    }


    return returnValue;
}

void BehaviorFactoryBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BehaviorTypesFieldMask & whichField))
    {
        _mfBehaviorTypes.copyToBin(pMem);
    }


}

void BehaviorFactoryBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BehaviorTypesFieldMask & whichField))
    {
        _mfBehaviorTypes.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BehaviorFactoryBase::executeSyncImpl(      BehaviorFactoryBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (BehaviorTypesFieldMask & whichField))
        _mfBehaviorTypes.syncWith(pOther->_mfBehaviorTypes);


}
#else
void BehaviorFactoryBase::executeSyncImpl(      BehaviorFactoryBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (BehaviorTypesFieldMask & whichField))
        _mfBehaviorTypes.syncWith(pOther->_mfBehaviorTypes, sInfo);


}

void BehaviorFactoryBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (BehaviorTypesFieldMask & whichField))
        _mfBehaviorTypes.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BehaviorFactoryPtr>::_type("BehaviorFactoryPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BehaviorFactoryPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BehaviorFactoryPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
