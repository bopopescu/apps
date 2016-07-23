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

/// @file MSInFile_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'omssa.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_OMSSA_MSINFILE_BASE_HPP
#define OBJECTS_OMSSA_MSINFILE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <objects/omssa/MSSpectrumFileType.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_OMSSA_EXPORT CMSInFile_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMSInFile_Base(void);
    // destructor
    virtual ~CMSInFile_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TInfile;
    typedef int TInfiletype;

    // getters
    // setters

    /// input file name
    /// mandatory
    /// typedef string TInfile
    ///  Check whether the Infile data member has been assigned a value.
    bool IsSetInfile(void) const;
    /// Check whether it is safe or not to call GetInfile method.
    bool CanGetInfile(void) const;
    void ResetInfile(void);
    const TInfile& GetInfile(void) const;
    void SetInfile(const TInfile& value);
    TInfile& SetInfile(void);

    /// input file type
    /// mandatory
    /// typedef int TInfiletype
    ///  Check whether the Infiletype data member has been assigned a value.
    bool IsSetInfiletype(void) const;
    /// Check whether it is safe or not to call GetInfiletype method.
    bool CanGetInfiletype(void) const;
    void ResetInfiletype(void);
    TInfiletype GetInfiletype(void) const;
    void SetInfiletype(TInfiletype value);
    TInfiletype& SetInfiletype(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMSInFile_Base(const CMSInFile_Base&);
    CMSInFile_Base& operator=(const CMSInFile_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Infile;
    int m_Infiletype;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMSInFile_Base::IsSetInfile(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMSInFile_Base::CanGetInfile(void) const
{
    return IsSetInfile();
}

inline
const CMSInFile_Base::TInfile& CMSInFile_Base::GetInfile(void) const
{
    if (!CanGetInfile()) {
        ThrowUnassigned(0);
    }
    return m_Infile;
}

inline
void CMSInFile_Base::SetInfile(const CMSInFile_Base::TInfile& value)
{
    m_Infile = value;
    m_set_State[0] |= 0x3;
}

inline
CMSInFile_Base::TInfile& CMSInFile_Base::SetInfile(void)
{
#ifdef _DEBUG
    if (!IsSetInfile()) {
        m_Infile = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Infile;
}

inline
bool CMSInFile_Base::IsSetInfiletype(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMSInFile_Base::CanGetInfiletype(void) const
{
    return IsSetInfiletype();
}

inline
void CMSInFile_Base::ResetInfiletype(void)
{
    m_Infiletype = (int)(0);
    m_set_State[0] &= ~0xc;
}

inline
CMSInFile_Base::TInfiletype CMSInFile_Base::GetInfiletype(void) const
{
    if (!CanGetInfiletype()) {
        ThrowUnassigned(1);
    }
    return m_Infiletype;
}

inline
void CMSInFile_Base::SetInfiletype(CMSInFile_Base::TInfiletype value)
{
    m_Infiletype = value;
    m_set_State[0] |= 0xc;
}

inline
CMSInFile_Base::TInfiletype& CMSInFile_Base::SetInfiletype(void)
{
#ifdef _DEBUG
    if (!IsSetInfiletype()) {
        memset(&m_Infiletype,UnassignedByte(),sizeof(m_Infiletype));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Infiletype;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_OMSSA_MSINFILE_BASE_HPP