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

/// @file Location_constraint_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_LOCATION_CONSTRAINT_BASE_HPP
#define OBJECTS_MACRO_LOCATION_CONSTRAINT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Location_type_constraint.hpp>
#include <objects/macro/Partial_constraint.hpp>
#include <objects/macro/Seqtype_constraint.hpp>
#include <objects/macro/Strand_constraint.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CLocation_pos_constraint;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CLocation_constraint_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CLocation_constraint_Base(void);
    // destructor
    virtual ~CLocation_constraint_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef EStrand_constraint TStrand;
    typedef ESeqtype_constraint TSeq_type;
    typedef EPartial_constraint TPartial5;
    typedef EPartial_constraint TPartial3;
    typedef ELocation_type_constraint TLocation_type;
    typedef CLocation_pos_constraint TEnd5;
    typedef CLocation_pos_constraint TEnd3;

    // getters
    // setters

    /// optional with default eStrand_constraint_any
    /// typedef EStrand_constraint TStrand
    ///  Check whether the Strand data member has been assigned a value.
    bool IsSetStrand(void) const;
    /// Check whether it is safe or not to call GetStrand method.
    bool CanGetStrand(void) const;
    void ResetStrand(void);
    void SetDefaultStrand(void);
    TStrand GetStrand(void) const;
    void SetStrand(TStrand value);
    TStrand& SetStrand(void);

    /// optional with default eSeqtype_constraint_any
    /// typedef ESeqtype_constraint TSeq_type
    ///  Check whether the Seq_type data member has been assigned a value.
    bool IsSetSeq_type(void) const;
    /// Check whether it is safe or not to call GetSeq_type method.
    bool CanGetSeq_type(void) const;
    void ResetSeq_type(void);
    void SetDefaultSeq_type(void);
    TSeq_type GetSeq_type(void) const;
    void SetSeq_type(TSeq_type value);
    TSeq_type& SetSeq_type(void);

    /// optional with default ePartial_constraint_either
    /// typedef EPartial_constraint TPartial5
    ///  Check whether the Partial5 data member has been assigned a value.
    bool IsSetPartial5(void) const;
    /// Check whether it is safe or not to call GetPartial5 method.
    bool CanGetPartial5(void) const;
    void ResetPartial5(void);
    void SetDefaultPartial5(void);
    TPartial5 GetPartial5(void) const;
    void SetPartial5(TPartial5 value);
    TPartial5& SetPartial5(void);

    /// optional with default ePartial_constraint_either
    /// typedef EPartial_constraint TPartial3
    ///  Check whether the Partial3 data member has been assigned a value.
    bool IsSetPartial3(void) const;
    /// Check whether it is safe or not to call GetPartial3 method.
    bool CanGetPartial3(void) const;
    void ResetPartial3(void);
    void SetDefaultPartial3(void);
    TPartial3 GetPartial3(void) const;
    void SetPartial3(TPartial3 value);
    TPartial3& SetPartial3(void);

    /// optional with default eLocation_type_constraint_any
    /// typedef ELocation_type_constraint TLocation_type
    ///  Check whether the Location_type data member has been assigned a value.
    bool IsSetLocation_type(void) const;
    /// Check whether it is safe or not to call GetLocation_type method.
    bool CanGetLocation_type(void) const;
    void ResetLocation_type(void);
    void SetDefaultLocation_type(void);
    TLocation_type GetLocation_type(void) const;
    void SetLocation_type(TLocation_type value);
    TLocation_type& SetLocation_type(void);

    /// optional
    /// typedef CLocation_pos_constraint TEnd5
    ///  Check whether the End5 data member has been assigned a value.
    bool IsSetEnd5(void) const;
    /// Check whether it is safe or not to call GetEnd5 method.
    bool CanGetEnd5(void) const;
    void ResetEnd5(void);
    const TEnd5& GetEnd5(void) const;
    void SetEnd5(TEnd5& value);
    TEnd5& SetEnd5(void);

    /// optional
    /// typedef CLocation_pos_constraint TEnd3
    ///  Check whether the End3 data member has been assigned a value.
    bool IsSetEnd3(void) const;
    /// Check whether it is safe or not to call GetEnd3 method.
    bool CanGetEnd3(void) const;
    void ResetEnd3(void);
    const TEnd3& GetEnd3(void) const;
    void SetEnd3(TEnd3& value);
    TEnd3& SetEnd3(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CLocation_constraint_Base(const CLocation_constraint_Base&);
    CLocation_constraint_Base& operator=(const CLocation_constraint_Base&);

    // data
    Uint4 m_set_State[1];
    EStrand_constraint m_Strand;
    ESeqtype_constraint m_Seq_type;
    EPartial_constraint m_Partial5;
    EPartial_constraint m_Partial3;
    ELocation_type_constraint m_Location_type;
    CRef< TEnd5 > m_End5;
    CRef< TEnd3 > m_End3;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CLocation_constraint_Base::IsSetStrand(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CLocation_constraint_Base::CanGetStrand(void) const
{
    return true;
}

inline
void CLocation_constraint_Base::ResetStrand(void)
{
    m_Strand = eStrand_constraint_any;
    m_set_State[0] &= ~0x3;
}

inline
void CLocation_constraint_Base::SetDefaultStrand(void)
{
    ResetStrand();
}

inline
CLocation_constraint_Base::TStrand CLocation_constraint_Base::GetStrand(void) const
{
    return m_Strand;
}

inline
void CLocation_constraint_Base::SetStrand(CLocation_constraint_Base::TStrand value)
{
    m_Strand = value;
    m_set_State[0] |= 0x3;
}

inline
CLocation_constraint_Base::TStrand& CLocation_constraint_Base::SetStrand(void)
{
#ifdef _DEBUG
    if (!IsSetStrand()) {
        memset(&m_Strand,UnassignedByte(),sizeof(m_Strand));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Strand;
}

inline
bool CLocation_constraint_Base::IsSetSeq_type(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CLocation_constraint_Base::CanGetSeq_type(void) const
{
    return true;
}

inline
void CLocation_constraint_Base::ResetSeq_type(void)
{
    m_Seq_type = eSeqtype_constraint_any;
    m_set_State[0] &= ~0xc;
}

inline
void CLocation_constraint_Base::SetDefaultSeq_type(void)
{
    ResetSeq_type();
}

inline
CLocation_constraint_Base::TSeq_type CLocation_constraint_Base::GetSeq_type(void) const
{
    return m_Seq_type;
}

inline
void CLocation_constraint_Base::SetSeq_type(CLocation_constraint_Base::TSeq_type value)
{
    m_Seq_type = value;
    m_set_State[0] |= 0xc;
}

inline
CLocation_constraint_Base::TSeq_type& CLocation_constraint_Base::SetSeq_type(void)
{
#ifdef _DEBUG
    if (!IsSetSeq_type()) {
        memset(&m_Seq_type,UnassignedByte(),sizeof(m_Seq_type));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Seq_type;
}

inline
bool CLocation_constraint_Base::IsSetPartial5(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CLocation_constraint_Base::CanGetPartial5(void) const
{
    return true;
}

inline
void CLocation_constraint_Base::ResetPartial5(void)
{
    m_Partial5 = ePartial_constraint_either;
    m_set_State[0] &= ~0x30;
}

inline
void CLocation_constraint_Base::SetDefaultPartial5(void)
{
    ResetPartial5();
}

inline
CLocation_constraint_Base::TPartial5 CLocation_constraint_Base::GetPartial5(void) const
{
    return m_Partial5;
}

inline
void CLocation_constraint_Base::SetPartial5(CLocation_constraint_Base::TPartial5 value)
{
    m_Partial5 = value;
    m_set_State[0] |= 0x30;
}

inline
CLocation_constraint_Base::TPartial5& CLocation_constraint_Base::SetPartial5(void)
{
#ifdef _DEBUG
    if (!IsSetPartial5()) {
        memset(&m_Partial5,UnassignedByte(),sizeof(m_Partial5));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Partial5;
}

inline
bool CLocation_constraint_Base::IsSetPartial3(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CLocation_constraint_Base::CanGetPartial3(void) const
{
    return true;
}

inline
void CLocation_constraint_Base::ResetPartial3(void)
{
    m_Partial3 = ePartial_constraint_either;
    m_set_State[0] &= ~0xc0;
}

inline
void CLocation_constraint_Base::SetDefaultPartial3(void)
{
    ResetPartial3();
}

inline
CLocation_constraint_Base::TPartial3 CLocation_constraint_Base::GetPartial3(void) const
{
    return m_Partial3;
}

inline
void CLocation_constraint_Base::SetPartial3(CLocation_constraint_Base::TPartial3 value)
{
    m_Partial3 = value;
    m_set_State[0] |= 0xc0;
}

inline
CLocation_constraint_Base::TPartial3& CLocation_constraint_Base::SetPartial3(void)
{
#ifdef _DEBUG
    if (!IsSetPartial3()) {
        memset(&m_Partial3,UnassignedByte(),sizeof(m_Partial3));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Partial3;
}

inline
bool CLocation_constraint_Base::IsSetLocation_type(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CLocation_constraint_Base::CanGetLocation_type(void) const
{
    return true;
}

inline
void CLocation_constraint_Base::ResetLocation_type(void)
{
    m_Location_type = eLocation_type_constraint_any;
    m_set_State[0] &= ~0x300;
}

inline
void CLocation_constraint_Base::SetDefaultLocation_type(void)
{
    ResetLocation_type();
}

inline
CLocation_constraint_Base::TLocation_type CLocation_constraint_Base::GetLocation_type(void) const
{
    return m_Location_type;
}

inline
void CLocation_constraint_Base::SetLocation_type(CLocation_constraint_Base::TLocation_type value)
{
    m_Location_type = value;
    m_set_State[0] |= 0x300;
}

inline
CLocation_constraint_Base::TLocation_type& CLocation_constraint_Base::SetLocation_type(void)
{
#ifdef _DEBUG
    if (!IsSetLocation_type()) {
        memset(&m_Location_type,UnassignedByte(),sizeof(m_Location_type));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Location_type;
}

inline
bool CLocation_constraint_Base::IsSetEnd5(void) const
{
    return m_End5.NotEmpty();
}

inline
bool CLocation_constraint_Base::CanGetEnd5(void) const
{
    return IsSetEnd5();
}

inline
const CLocation_constraint_Base::TEnd5& CLocation_constraint_Base::GetEnd5(void) const
{
    if (!CanGetEnd5()) {
        ThrowUnassigned(5);
    }
    return (*m_End5);
}

inline
bool CLocation_constraint_Base::IsSetEnd3(void) const
{
    return m_End3.NotEmpty();
}

inline
bool CLocation_constraint_Base::CanGetEnd3(void) const
{
    return IsSetEnd3();
}

inline
const CLocation_constraint_Base::TEnd3& CLocation_constraint_Base::GetEnd3(void) const
{
    if (!CanGetEnd3()) {
        ThrowUnassigned(6);
    }
    return (*m_End3);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_LOCATION_CONSTRAINT_BASE_HPP