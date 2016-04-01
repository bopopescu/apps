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

/// @file PC_AssayTargetInfo_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pcassay.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PCASSAY_PC_ASSAYTARGETINFO_BASE_HPP
#define OBJECTS_PCASSAY_PC_ASSAYTARGETINFO_BASE_HPP

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
class CBioSource;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Molecular target information provides by organization describes the functionality of the target, 
/// facilitates the linking between PubChem bioassays, and the linking between target molecule to other NCBI resources
class NCBI_PCASSAY_EXPORT CPC_AssayTargetInfo_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPC_AssayTargetInfo_Base(void);
    // destructor
    virtual ~CPC_AssayTargetInfo_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// Assay Target Type
    enum EMolecule_type {
        eMolecule_type_protein   =   1,  ///< mol-id: NCBI Protein GI 
        eMolecule_type_dna       =   2,  ///< mol-id: NCBI Nucleotide GI
        eMolecule_type_rna       =   3,  ///< mol-id: NCBI Nucleotide GI
        eMolecule_type_gene      =   4,  ///< mol-id: NCBI Gene ID
        eMolecule_type_biosystem =   5,  ///< mol-id: NCBI BioSystems ID
        eMolecule_type_other     = 255
    };
    
    /// Access to EMolecule_type's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EMolecule_type)(void);
    
    // types
    typedef string TName;
    typedef int TMol_id;
    typedef int TMolecule_type;
    typedef CBioSource TOrganism;
    typedef string TDescr;
    typedef list< string > TComment;

    // getters
    // setters

    /// Molecular name of target
    /// mandatory
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// NCBI database identifier of the target molecule
    /// mandatory
    /// typedef int TMol_id
    ///  Check whether the Mol_id data member has been assigned a value.
    bool IsSetMol_id(void) const;
    /// Check whether it is safe or not to call GetMol_id method.
    bool CanGetMol_id(void) const;
    void ResetMol_id(void);
    TMol_id GetMol_id(void) const;
    void SetMol_id(TMol_id value);
    TMol_id& SetMol_id(void);

    /// optional with default eMolecule_type_protein
    /// typedef int TMolecule_type
    ///  Check whether the Molecule_type data member has been assigned a value.
    bool IsSetMolecule_type(void) const;
    /// Check whether it is safe or not to call GetMolecule_type method.
    bool CanGetMolecule_type(void) const;
    void ResetMolecule_type(void);
    void SetDefaultMolecule_type(void);
    TMolecule_type GetMolecule_type(void) const;
    void SetMolecule_type(TMolecule_type value);
    TMolecule_type& SetMolecule_type(void);

    /// Target Organism
    /// optional
    /// typedef CBioSource TOrganism
    ///  Check whether the Organism data member has been assigned a value.
    bool IsSetOrganism(void) const;
    /// Check whether it is safe or not to call GetOrganism method.
    bool CanGetOrganism(void) const;
    void ResetOrganism(void);
    const TOrganism& GetOrganism(void) const;
    void SetOrganism(TOrganism& value);
    TOrganism& SetOrganism(void);

    /// Target Description  (e.g., cellular functionality and location)
    /// optional
    /// typedef string TDescr
    ///  Check whether the Descr data member has been assigned a value.
    bool IsSetDescr(void) const;
    /// Check whether it is safe or not to call GetDescr method.
    bool CanGetDescr(void) const;
    void ResetDescr(void);
    const TDescr& GetDescr(void) const;
    void SetDescr(const TDescr& value);
    TDescr& SetDescr(void);

    /// Comments or Additional Information
    /// optional
    /// typedef list< string > TComment
    ///  Check whether the Comment data member has been assigned a value.
    bool IsSetComment(void) const;
    /// Check whether it is safe or not to call GetComment method.
    bool CanGetComment(void) const;
    void ResetComment(void);
    const TComment& GetComment(void) const;
    TComment& SetComment(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPC_AssayTargetInfo_Base(const CPC_AssayTargetInfo_Base&);
    CPC_AssayTargetInfo_Base& operator=(const CPC_AssayTargetInfo_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    int m_Mol_id;
    int m_Molecule_type;
    CRef< TOrganism > m_Organism;
    string m_Descr;
    list< string > m_Comment;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPC_AssayTargetInfo_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPC_AssayTargetInfo_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CPC_AssayTargetInfo_Base::TName& CPC_AssayTargetInfo_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CPC_AssayTargetInfo_Base::SetName(const CPC_AssayTargetInfo_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CPC_AssayTargetInfo_Base::TName& CPC_AssayTargetInfo_Base::SetName(void)
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
bool CPC_AssayTargetInfo_Base::IsSetMol_id(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPC_AssayTargetInfo_Base::CanGetMol_id(void) const
{
    return IsSetMol_id();
}

inline
void CPC_AssayTargetInfo_Base::ResetMol_id(void)
{
    m_Mol_id = 0;
    m_set_State[0] &= ~0xc;
}

inline
CPC_AssayTargetInfo_Base::TMol_id CPC_AssayTargetInfo_Base::GetMol_id(void) const
{
    if (!CanGetMol_id()) {
        ThrowUnassigned(1);
    }
    return m_Mol_id;
}

inline
void CPC_AssayTargetInfo_Base::SetMol_id(CPC_AssayTargetInfo_Base::TMol_id value)
{
    m_Mol_id = value;
    m_set_State[0] |= 0xc;
}

inline
CPC_AssayTargetInfo_Base::TMol_id& CPC_AssayTargetInfo_Base::SetMol_id(void)
{
#ifdef _DEBUG
    if (!IsSetMol_id()) {
        memset(&m_Mol_id,UnassignedByte(),sizeof(m_Mol_id));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Mol_id;
}

inline
bool CPC_AssayTargetInfo_Base::IsSetMolecule_type(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPC_AssayTargetInfo_Base::CanGetMolecule_type(void) const
{
    return true;
}

inline
void CPC_AssayTargetInfo_Base::ResetMolecule_type(void)
{
    m_Molecule_type = eMolecule_type_protein;
    m_set_State[0] &= ~0x30;
}

inline
void CPC_AssayTargetInfo_Base::SetDefaultMolecule_type(void)
{
    ResetMolecule_type();
}

inline
CPC_AssayTargetInfo_Base::TMolecule_type CPC_AssayTargetInfo_Base::GetMolecule_type(void) const
{
    return m_Molecule_type;
}

inline
void CPC_AssayTargetInfo_Base::SetMolecule_type(CPC_AssayTargetInfo_Base::TMolecule_type value)
{
    m_Molecule_type = value;
    m_set_State[0] |= 0x30;
}

inline
CPC_AssayTargetInfo_Base::TMolecule_type& CPC_AssayTargetInfo_Base::SetMolecule_type(void)
{
#ifdef _DEBUG
    if (!IsSetMolecule_type()) {
        memset(&m_Molecule_type,UnassignedByte(),sizeof(m_Molecule_type));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Molecule_type;
}

inline
bool CPC_AssayTargetInfo_Base::IsSetOrganism(void) const
{
    return m_Organism.NotEmpty();
}

inline
bool CPC_AssayTargetInfo_Base::CanGetOrganism(void) const
{
    return IsSetOrganism();
}

inline
const CPC_AssayTargetInfo_Base::TOrganism& CPC_AssayTargetInfo_Base::GetOrganism(void) const
{
    if (!CanGetOrganism()) {
        ThrowUnassigned(3);
    }
    return (*m_Organism);
}

inline
bool CPC_AssayTargetInfo_Base::IsSetDescr(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CPC_AssayTargetInfo_Base::CanGetDescr(void) const
{
    return IsSetDescr();
}

inline
const CPC_AssayTargetInfo_Base::TDescr& CPC_AssayTargetInfo_Base::GetDescr(void) const
{
    if (!CanGetDescr()) {
        ThrowUnassigned(4);
    }
    return m_Descr;
}

inline
void CPC_AssayTargetInfo_Base::SetDescr(const CPC_AssayTargetInfo_Base::TDescr& value)
{
    m_Descr = value;
    m_set_State[0] |= 0x300;
}

inline
CPC_AssayTargetInfo_Base::TDescr& CPC_AssayTargetInfo_Base::SetDescr(void)
{
#ifdef _DEBUG
    if (!IsSetDescr()) {
        m_Descr = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Descr;
}

inline
bool CPC_AssayTargetInfo_Base::IsSetComment(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CPC_AssayTargetInfo_Base::CanGetComment(void) const
{
    return true;
}

inline
const CPC_AssayTargetInfo_Base::TComment& CPC_AssayTargetInfo_Base::GetComment(void) const
{
    return m_Comment;
}

inline
CPC_AssayTargetInfo_Base::TComment& CPC_AssayTargetInfo_Base::SetComment(void)
{
    m_set_State[0] |= 0x400;
    return m_Comment;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCASSAY_PC_ASSAYTARGETINFO_BASE_HPP