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

/// @file GCClient_Error_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'gencoll_client.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENOMECOLL_GCCLIENT_ERROR_BASE_HPP
#define OBJECTS_GENOMECOLL_GCCLIENT_ERROR_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CGCClient_Error_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGCClient_Error_Base(void);
    // destructor
    virtual ~CGCClient_Error_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EError_id {
        eError_id_assembly_not_found =   0,
        eError_id_other              = 255
    };
    
    /// Access to EError_id's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EError_id)(void);
    
    // types
    typedef int TError_id;
    typedef string TDescription;

    // getters
    // setters

    /// mandatory
    /// typedef int TError_id
    ///  Check whether the Error_id data member has been assigned a value.
    bool IsSetError_id(void) const;
    /// Check whether it is safe or not to call GetError_id method.
    bool CanGetError_id(void) const;
    void ResetError_id(void);
    TError_id GetError_id(void) const;
    void SetError_id(TError_id value);
    TError_id& SetError_id(void);

    /// optional
    /// typedef string TDescription
    ///  Check whether the Description data member has been assigned a value.
    bool IsSetDescription(void) const;
    /// Check whether it is safe or not to call GetDescription method.
    bool CanGetDescription(void) const;
    void ResetDescription(void);
    const TDescription& GetDescription(void) const;
    void SetDescription(const TDescription& value);
    TDescription& SetDescription(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGCClient_Error_Base(const CGCClient_Error_Base&);
    CGCClient_Error_Base& operator=(const CGCClient_Error_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Error_id;
    string m_Description;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGCClient_Error_Base::IsSetError_id(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGCClient_Error_Base::CanGetError_id(void) const
{
    return IsSetError_id();
}

inline
void CGCClient_Error_Base::ResetError_id(void)
{
    m_Error_id = (EError_id)(0);
    m_set_State[0] &= ~0x3;
}

inline
CGCClient_Error_Base::TError_id CGCClient_Error_Base::GetError_id(void) const
{
    if (!CanGetError_id()) {
        ThrowUnassigned(0);
    }
    return m_Error_id;
}

inline
void CGCClient_Error_Base::SetError_id(CGCClient_Error_Base::TError_id value)
{
    m_Error_id = value;
    m_set_State[0] |= 0x3;
}

inline
CGCClient_Error_Base::TError_id& CGCClient_Error_Base::SetError_id(void)
{
#ifdef _DEBUG
    if (!IsSetError_id()) {
        memset(&m_Error_id,UnassignedByte(),sizeof(m_Error_id));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Error_id;
}

inline
bool CGCClient_Error_Base::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGCClient_Error_Base::CanGetDescription(void) const
{
    return IsSetDescription();
}

inline
const CGCClient_Error_Base::TDescription& CGCClient_Error_Base::GetDescription(void) const
{
    if (!CanGetDescription()) {
        ThrowUnassigned(1);
    }
    return m_Description;
}

inline
void CGCClient_Error_Base::SetDescription(const CGCClient_Error_Base::TDescription& value)
{
    m_Description = value;
    m_set_State[0] |= 0xc;
}

inline
CGCClient_Error_Base::TDescription& CGCClient_Error_Base::SetDescription(void)
{
#ifdef _DEBUG
    if (!IsSetDescription()) {
        m_Description = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Description;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GCCLIENT_ERROR_BASE_HPP