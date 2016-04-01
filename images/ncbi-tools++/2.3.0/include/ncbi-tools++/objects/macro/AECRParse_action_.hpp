/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */

/// @file AECRParse_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_AECRPARSE_ACTION_BASE_HPP
#define OBJECTS_MACRO_AECRPARSE_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/ExistingTextOption.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CField_pair_type;
class CText_portion;
class CText_transform_set;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CAECRParse_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CAECRParse_action_Base(void);
    // destructor
    virtual ~CAECRParse_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CText_portion TPortion;
    typedef CField_pair_type TFields;
    typedef bool TRemove_from_parsed;
    typedef bool TRemove_left;
    typedef bool TRemove_right;
    typedef CText_transform_set TTransform;
    typedef EExistingTextOption TExisting_text;

    // getters
    // setters

    /// mandatory
    /// typedef CText_portion TPortion
    ///  Check whether the Portion data member has been assigned a value.
    bool IsSetPortion(void) const;
    /// Check whether it is safe or not to call GetPortion method.
    bool CanGetPortion(void) const;
    void ResetPortion(void);
    const TPortion& GetPortion(void) const;
    void SetPortion(TPortion& value);
    TPortion& SetPortion(void);

    /// mandatory
    /// typedef CField_pair_type TFields
    ///  Check whether the Fields data member has been assigned a value.
    bool IsSetFields(void) const;
    /// Check whether it is safe or not to call GetFields method.
    bool CanGetFields(void) const;
    void ResetFields(void);
    const TFields& GetFields(void) const;
    void SetFields(TFields& value);
    TFields& SetFields(void);

    /// optional with default false
    /// typedef bool TRemove_from_parsed
    ///  Check whether the Remove_from_parsed data member has been assigned a value.
    bool IsSetRemove_from_parsed(void) const;
    /// Check whether it is safe or not to call GetRemove_from_parsed method.
    bool CanGetRemove_from_parsed(void) const;
    void ResetRemove_from_parsed(void);
    void SetDefaultRemove_from_parsed(void);
    TRemove_from_parsed GetRemove_from_parsed(void) const;
    void SetRemove_from_parsed(TRemove_from_parsed value);
    TRemove_from_parsed& SetRemove_from_parsed(void);

    /// optional with default false
    /// typedef bool TRemove_left
    ///  Check whether the Remove_left data member has been assigned a value.
    bool IsSetRemove_left(void) const;
    /// Check whether it is safe or not to call GetRemove_left method.
    bool CanGetRemove_left(void) const;
    void ResetRemove_left(void);
    void SetDefaultRemove_left(void);
    TRemove_left GetRemove_left(void) const;
    void SetRemove_left(TRemove_left value);
    TRemove_left& SetRemove_left(void);

    /// optional with default false
    /// typedef bool TRemove_right
    ///  Check whether the Remove_right data member has been assigned a value.
    bool IsSetRemove_right(void) const;
    /// Check whether it is safe or not to call GetRemove_right method.
    bool CanGetRemove_right(void) const;
    void ResetRemove_right(void);
    void SetDefaultRemove_right(void);
    TRemove_right GetRemove_right(void) const;
    void SetRemove_right(TRemove_right value);
    TRemove_right& SetRemove_right(void);

    /// optional
    /// typedef CText_transform_set TTransform
    ///  Check whether the Transform data member has been assigned a value.
    bool IsSetTransform(void) const;
    /// Check whether it is safe or not to call GetTransform method.
    bool CanGetTransform(void) const;
    void ResetTransform(void);
    const TTransform& GetTransform(void) const;
    void SetTransform(TTransform& value);
    TTransform& SetTransform(void);

    /// mandatory
    /// typedef EExistingTextOption TExisting_text
    ///  Check whether the Existing_text data member has been assigned a value.
    bool IsSetExisting_text(void) const;
    /// Check whether it is safe or not to call GetExisting_text method.
    bool CanGetExisting_text(void) const;
    void ResetExisting_text(void);
    TExisting_text GetExisting_text(void) const;
    void SetExisting_text(TExisting_text value);
    TExisting_text& SetExisting_text(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CAECRParse_action_Base(const CAECRParse_action_Base&);
    CAECRParse_action_Base& operator=(const CAECRParse_action_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TPortion > m_Portion;
    CRef< TFields > m_Fields;
    bool m_Remove_from_parsed;
    bool m_Remove_left;
    bool m_Remove_right;
    CRef< TTransform > m_Transform;
    EExistingTextOption m_Existing_text;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CAECRParse_action_Base::IsSetPortion(void) const
{
    return m_Portion.NotEmpty();
}

inline
bool CAECRParse_action_Base::CanGetPortion(void) const
{
    return true;
}

inline
const CAECRParse_action_Base::TPortion& CAECRParse_action_Base::GetPortion(void) const
{
    if ( !m_Portion ) {
        const_cast<CAECRParse_action_Base*>(this)->ResetPortion();
    }
    return (*m_Portion);
}

inline
CAECRParse_action_Base::TPortion& CAECRParse_action_Base::SetPortion(void)
{
    if ( !m_Portion ) {
        ResetPortion();
    }
    return (*m_Portion);
}

inline
bool CAECRParse_action_Base::IsSetFields(void) const
{
    return m_Fields.NotEmpty();
}

inline
bool CAECRParse_action_Base::CanGetFields(void) const
{
    return true;
}

inline
const CAECRParse_action_Base::TFields& CAECRParse_action_Base::GetFields(void) const
{
    if ( !m_Fields ) {
        const_cast<CAECRParse_action_Base*>(this)->ResetFields();
    }
    return (*m_Fields);
}

inline
CAECRParse_action_Base::TFields& CAECRParse_action_Base::SetFields(void)
{
    if ( !m_Fields ) {
        ResetFields();
    }
    return (*m_Fields);
}

inline
bool CAECRParse_action_Base::IsSetRemove_from_parsed(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CAECRParse_action_Base::CanGetRemove_from_parsed(void) const
{
    return true;
}

inline
void CAECRParse_action_Base::ResetRemove_from_parsed(void)
{
    m_Remove_from_parsed = false;
    m_set_State[0] &= ~0x30;
}

inline
void CAECRParse_action_Base::SetDefaultRemove_from_parsed(void)
{
    ResetRemove_from_parsed();
}

inline
CAECRParse_action_Base::TRemove_from_parsed CAECRParse_action_Base::GetRemove_from_parsed(void) const
{
    return m_Remove_from_parsed;
}

inline
void CAECRParse_action_Base::SetRemove_from_parsed(CAECRParse_action_Base::TRemove_from_parsed value)
{
    m_Remove_from_parsed = value;
    m_set_State[0] |= 0x30;
}

inline
CAECRParse_action_Base::TRemove_from_parsed& CAECRParse_action_Base::SetRemove_from_parsed(void)
{
#ifdef _DEBUG
    if (!IsSetRemove_from_parsed()) {
        memset(&m_Remove_from_parsed,UnassignedByte(),sizeof(m_Remove_from_parsed));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Remove_from_parsed;
}

inline
bool CAECRParse_action_Base::IsSetRemove_left(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CAECRParse_action_Base::CanGetRemove_left(void) const
{
    return true;
}

inline
void CAECRParse_action_Base::ResetRemove_left(void)
{
    m_Remove_left = false;
    m_set_State[0] &= ~0xc0;
}

inline
void CAECRParse_action_Base::SetDefaultRemove_left(void)
{
    ResetRemove_left();
}

inline
CAECRParse_action_Base::TRemove_left CAECRParse_action_Base::GetRemove_left(void) const
{
    return m_Remove_left;
}

inline
void CAECRParse_action_Base::SetRemove_left(CAECRParse_action_Base::TRemove_left value)
{
    m_Remove_left = value;
    m_set_State[0] |= 0xc0;
}

inline
CAECRParse_action_Base::TRemove_left& CAECRParse_action_Base::SetRemove_left(void)
{
#ifdef _DEBUG
    if (!IsSetRemove_left()) {
        memset(&m_Remove_left,UnassignedByte(),sizeof(m_Remove_left));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Remove_left;
}

inline
bool CAECRParse_action_Base::IsSetRemove_right(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CAECRParse_action_Base::CanGetRemove_right(void) const
{
    return true;
}

inline
void CAECRParse_action_Base::ResetRemove_right(void)
{
    m_Remove_right = false;
    m_set_State[0] &= ~0x300;
}

inline
void CAECRParse_action_Base::SetDefaultRemove_right(void)
{
    ResetRemove_right();
}

inline
CAECRParse_action_Base::TRemove_right CAECRParse_action_Base::GetRemove_right(void) const
{
    return m_Remove_right;
}

inline
void CAECRParse_action_Base::SetRemove_right(CAECRParse_action_Base::TRemove_right value)
{
    m_Remove_right = value;
    m_set_State[0] |= 0x300;
}

inline
CAECRParse_action_Base::TRemove_right& CAECRParse_action_Base::SetRemove_right(void)
{
#ifdef _DEBUG
    if (!IsSetRemove_right()) {
        memset(&m_Remove_right,UnassignedByte(),sizeof(m_Remove_right));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Remove_right;
}

inline
bool CAECRParse_action_Base::IsSetTransform(void) const
{
    return m_Transform.NotEmpty();
}

inline
bool CAECRParse_action_Base::CanGetTransform(void) const
{
    return IsSetTransform();
}

inline
const CAECRParse_action_Base::TTransform& CAECRParse_action_Base::GetTransform(void) const
{
    if (!CanGetTransform()) {
        ThrowUnassigned(5);
    }
    return (*m_Transform);
}

inline
bool CAECRParse_action_Base::IsSetExisting_text(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CAECRParse_action_Base::CanGetExisting_text(void) const
{
    return IsSetExisting_text();
}

inline
void CAECRParse_action_Base::ResetExisting_text(void)
{
    m_Existing_text = (ncbi::objects::EExistingTextOption)(0);
    m_set_State[0] &= ~0x3000;
}

inline
CAECRParse_action_Base::TExisting_text CAECRParse_action_Base::GetExisting_text(void) const
{
    if (!CanGetExisting_text()) {
        ThrowUnassigned(6);
    }
    return m_Existing_text;
}

inline
void CAECRParse_action_Base::SetExisting_text(CAECRParse_action_Base::TExisting_text value)
{
    m_Existing_text = value;
    m_set_State[0] |= 0x3000;
}

inline
CAECRParse_action_Base::TExisting_text& CAECRParse_action_Base::SetExisting_text(void)
{
#ifdef _DEBUG
    if (!IsSetExisting_text()) {
        memset(&m_Existing_text,UnassignedByte(),sizeof(m_Existing_text));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Existing_text;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_AECRPARSE_ACTION_BASE_HPP