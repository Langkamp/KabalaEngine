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
 **     class LogEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OpenSG/OSGConfig.h>




#include "KELogEventDetailsBase.h"
#include "KELogEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LogEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     LogEventDetailsBase::_sfValue
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<LogEventDetails *>::_type("LogEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(LogEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           LogEventDetails *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LogEventDetailsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "Value",
        "",
        ValueFieldId, ValueFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LogEventDetails::editHandleValue),
        static_cast<FieldGetMethodSig >(&LogEventDetails::getHandleValue));

    oType.addInitialDesc(pDesc);
}


LogEventDetailsBase::TypeObject LogEventDetailsBase::_type(
    LogEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&LogEventDetailsBase::createEmptyLocal),
    LogEventDetails::initMethod,
    LogEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&LogEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"LogEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "\tlibrary=\"KabalaEngine\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "\tlibnamespace=\"KE\"\n"
    "\tsupportUnregisteredCreate=\"true\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Value\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LogEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &LogEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 LogEventDetailsBase::getContainerSize(void) const
{
    return sizeof(LogEventDetails);
}

/*------------------------- decorator get ------------------------------*/


SFString *LogEventDetailsBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFString *LogEventDetailsBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 LogEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void LogEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void LogEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LogEventDetailsTransitPtr LogEventDetailsBase::createLocal(BitVector bFlags)
{
    LogEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LogEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
LogEventDetailsTransitPtr LogEventDetailsBase::createDependent(BitVector bFlags)
{
    LogEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<LogEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LogEventDetailsTransitPtr LogEventDetailsBase::create(void)
{
    LogEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LogEventDetails>(tmpPtr);
    }

    return fc;
}

LogEventDetails *LogEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    LogEventDetails *returnValue;

    newPtr<LogEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
LogEventDetails *LogEventDetailsBase::createEmpty(void)
{
    LogEventDetails *returnValue;

    newPtr<LogEventDetails>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

LogEventDetails *LogEventDetailsBase::createUnregistered(void)
{
    LogEventDetails *returnValue = new LogEventDetails;

#ifdef OSG_MT_CPTR_ASPECT
    returnValue->setupAspectStore();
#endif
    //Do not register with the FieldContainer Factory

    returnValue->onCreate      (      );
    returnValue->onCreateAspect(returnValue);
    
    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();
    
    return returnValue;
}


FieldContainerTransitPtr LogEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LogEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LogEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LogEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    LogEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LogEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr LogEventDetailsBase::shallowCopy(void) const
{
    LogEventDetails *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const LogEventDetails *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

LogEventDetailsBase::LogEventDetailsBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

LogEventDetailsBase::LogEventDetailsBase(const LogEventDetailsBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

LogEventDetailsBase::~LogEventDetailsBase(void)
{
}


GetFieldHandlePtr LogEventDetailsBase::getHandleValue           (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<LogEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LogEventDetailsBase::editHandleValue          (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void LogEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    LogEventDetails *pThis = static_cast<LogEventDetails *>(this);

    pThis->execSync(static_cast<LogEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *LogEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    LogEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LogEventDetails *>(pRefAspect),
                  dynamic_cast<const LogEventDetails *>(this));

    return returnValue;
}
#endif

void LogEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
