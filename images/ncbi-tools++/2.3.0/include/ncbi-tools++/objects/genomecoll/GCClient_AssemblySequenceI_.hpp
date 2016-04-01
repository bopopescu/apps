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

/// @file GCClient_AssemblySequenceI_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'gencoll_client.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENOMECOLL_GCCLIENT_ASSEMBLYSEQUENCEI_BASE_HPP
#define OBJECTS_GENOMECOLL_GCCLIENT_ASSEMBLYSEQUENCEI_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CGCClient_AssemblyInfo;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CGCClient_AssemblySequenceInfo_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGCClient_AssemblySequenceInfo_Base(void);
    // destructor
    virtual ~CGCClient_AssemblySequenceInfo_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CGCClient_AssemblyInfo TAssembly;
    typedef list< string > TSequences_in_assembly;
    typedef list< string > TSequences_not_in_assembly;

    // getters
    // setters

    /// mandatory
    /// typedef CGCClient_AssemblyInfo TAssembly
    ///  Check whether the Assembly data member has been assigned a value.
    bool IsSetAssembly(void) const;
    /// Check whether it is safe or not to call GetAssembly method.
    bool CanGetAssembly(void) const;
    void ResetAssembly(void);
    const TAssembly& GetAssembly(void) const;
    void SetAssembly(TAssembly& value);
    TAssembly& SetAssembly(void);

    /// mandatory
    /// typedef list< string > TSequences_in_assembly
    ///  Check whether the Sequences_in_assembly data member has been assigned a value.
    bool IsSetSequences_in_assembly(void) const;
    /// Check whether it is safe or not to call GetSequences_in_assembly method.
    bool CanGetSequences_in_assembly(void) const;
    void ResetSequences_in_assembly(void);
    const TSequences_in_assembly& GetSequences_in_assembly(void) const;
    TSequences_in_assembly& SetSequences_in_assembly(void);

    /// optional
    /// typedef list< string > TSequences_not_in_assembly
    ///  Check whether the Sequences_not_in_assembly data member has been assigned a value.
    bool IsSetSequences_not_in_assembly(void) const;
    /// Check whether it is safe or not to call GetSequences_not_in_assembly method.
    bool CanGetSequences_not_in_assembly(void) const;
    void ResetSequences_not_in_assembly(void);
    const TSequences_not_in_assembly& GetSequences_not_in_assembly(void) const;
    TSequences_not_in_assembly& SetSequences_not_in_assembly(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGCClient_AssemblySequenceInfo_Base(const CGCClient_AssemblySequenceInfo_Base&);
    CGCClient_AssemblySequenceInfo_Base& operator=(const CGCClient_AssemblySequenceInfo_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAssembly > m_Assembly;
    list< string > m_Sequences_in_assembly;
    list< string > m_Sequences_not_in_assembly;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGCClient_AssemblySequenceInfo_Base::IsSetAssembly(void) const
{
    return m_Assembly.NotEmpty();
}

inline
bool CGCClient_AssemblySequenceInfo_Base::CanGetAssembly(void) const
{
    return true;
}

inline
const CGCClient_AssemblySequenceInfo_Base::TAssembly& CGCClient_AssemblySequenceInfo_Base::GetAssembly(void) const
{
    if ( !m_Assembly ) {
        const_cast<CGCClient_AssemblySequenceInfo_Base*>(this)->ResetAssembly();
    }
    return (*m_Assembly);
}

inline
CGCClient_AssemblySequenceInfo_Base::TAssembly& CGCClient_AssemblySequenceInfo_Base::SetAssembly(void)
{
    if ( !m_Assembly ) {
        ResetAssembly();
    }
    return (*m_Assembly);
}

inline
bool CGCClient_AssemblySequenceInfo_Base::IsSetSequences_in_assembly(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGCClient_AssemblySequenceInfo_Base::CanGetSequences_in_assembly(void) const
{
    return true;
}

inline
const CGCClient_AssemblySequenceInfo_Base::TSequences_in_assembly& CGCClient_AssemblySequenceInfo_Base::GetSequences_in_assembly(void) const
{
    return m_Sequences_in_assembly;
}

inline
CGCClient_AssemblySequenceInfo_Base::TSequences_in_assembly& CGCClient_AssemblySequenceInfo_Base::SetSequences_in_assembly(void)
{
    m_set_State[0] |= 0x4;
    return m_Sequences_in_assembly;
}

inline
bool CGCClient_AssemblySequenceInfo_Base::IsSetSequences_not_in_assembly(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CGCClient_AssemblySequenceInfo_Base::CanGetSequences_not_in_assembly(void) const
{
    return true;
}

inline
const CGCClient_AssemblySequenceInfo_Base::TSequences_not_in_assembly& CGCClient_AssemblySequenceInfo_Base::GetSequences_not_in_assembly(void) const
{
    return m_Sequences_not_in_assembly;
}

inline
CGCClient_AssemblySequenceInfo_Base::TSequences_not_in_assembly& CGCClient_AssemblySequenceInfo_Base::SetSequences_not_in_assembly(void)
{
    m_set_State[0] |= 0x10;
    return m_Sequences_not_in_assembly;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GCCLIENT_ASSEMBLYSEQUENCEI_BASE_HPP