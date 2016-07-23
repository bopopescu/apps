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

/// @file ID2S_Seq_annot_place_Info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqsplit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQSPLIT_ID2S_SEQ_ANNOT_PLACE_INFO_BASE_HPP
#define OBJECTS_SEQSPLIT_ID2S_SEQ_ANNOT_PLACE_INFO_BASE_HPP

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


// forward declarations
class CID2S_Bioseq_Ids;
class CID2S_Bioseq_set_Ids;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_ID2_EXPORT CID2S_Seq_annot_place_Info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2S_Seq_annot_place_Info_Base(void);
    // destructor
    virtual ~CID2S_Seq_annot_place_Info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TName;
    typedef CID2S_Bioseq_Ids TBioseqs;
    typedef CID2S_Bioseq_set_Ids TBioseq_sets;

    // getters
    // setters

    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// optional
    /// typedef CID2S_Bioseq_Ids TBioseqs
    ///  Check whether the Bioseqs data member has been assigned a value.
    bool IsSetBioseqs(void) const;
    /// Check whether it is safe or not to call GetBioseqs method.
    bool CanGetBioseqs(void) const;
    void ResetBioseqs(void);
    const TBioseqs& GetBioseqs(void) const;
    void SetBioseqs(TBioseqs& value);
    TBioseqs& SetBioseqs(void);

    /// optional
    /// typedef CID2S_Bioseq_set_Ids TBioseq_sets
    ///  Check whether the Bioseq_sets data member has been assigned a value.
    bool IsSetBioseq_sets(void) const;
    /// Check whether it is safe or not to call GetBioseq_sets method.
    bool CanGetBioseq_sets(void) const;
    void ResetBioseq_sets(void);
    const TBioseq_sets& GetBioseq_sets(void) const;
    void SetBioseq_sets(TBioseq_sets& value);
    TBioseq_sets& SetBioseq_sets(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2S_Seq_annot_place_Info_Base(const CID2S_Seq_annot_place_Info_Base&);
    CID2S_Seq_annot_place_Info_Base& operator=(const CID2S_Seq_annot_place_Info_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    CRef< TBioseqs > m_Bioseqs;
    CRef< TBioseq_sets > m_Bioseq_sets;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2S_Seq_annot_place_Info_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2S_Seq_annot_place_Info_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CID2S_Seq_annot_place_Info_Base::TName& CID2S_Seq_annot_place_Info_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CID2S_Seq_annot_place_Info_Base::SetName(const CID2S_Seq_annot_place_Info_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CID2S_Seq_annot_place_Info_Base::TName& CID2S_Seq_annot_place_Info_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CID2S_Seq_annot_place_Info_Base::IsSetBioseqs(void) const
{
    return m_Bioseqs.NotEmpty();
}

inline
bool CID2S_Seq_annot_place_Info_Base::CanGetBioseqs(void) const
{
    return IsSetBioseqs();
}

inline
const CID2S_Seq_annot_place_Info_Base::TBioseqs& CID2S_Seq_annot_place_Info_Base::GetBioseqs(void) const
{
    if (!CanGetBioseqs()) {
        ThrowUnassigned(1);
    }
    return (*m_Bioseqs);
}

inline
bool CID2S_Seq_annot_place_Info_Base::IsSetBioseq_sets(void) const
{
    return m_Bioseq_sets.NotEmpty();
}

inline
bool CID2S_Seq_annot_place_Info_Base::CanGetBioseq_sets(void) const
{
    return IsSetBioseq_sets();
}

inline
const CID2S_Seq_annot_place_Info_Base::TBioseq_sets& CID2S_Seq_annot_place_Info_Base::GetBioseq_sets(void) const
{
    if (!CanGetBioseq_sets()) {
        ThrowUnassigned(2);
    }
    return (*m_Bioseq_sets);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQSPLIT_ID2S_SEQ_ANNOT_PLACE_INFO_BASE_HPP