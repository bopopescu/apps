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

/// @file Entrez_general_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'ncbimime.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_NCBIMIME_ENTREZ_GENERAL_BASE_HPP
#define OBJECTS_NCBIMIME_ENTREZ_GENERAL_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <objects/ncbimime/Entrez_style.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBiostruc;
class CBiostruc_annot_set;
class CMedline_entry;
class CSeq_entry;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_NCBIMIME_EXPORT CEntrez_general_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez_general_Base(void);
    // destructor
    virtual ~CEntrez_general_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_NCBIMIME_EXPORT C_Data : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Data(void);
        // destructor
        ~C_Data(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Ml,
            e_Prot,
            e_Nuc,
            e_Genome,
            e_Structure,
            e_StrucAnnot
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 7 ///< == e_StrucAnnot+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
        /// Which variant is currently selected.
        E_Choice Which(void) const;
    
        /// Verify selection, throw exception if it differs from the expected.
        void CheckSelected(E_Choice index) const;
    
        /// Throw 'InvalidSelection' exception.
        NCBI_NORETURN void ThrowInvalidSelection(E_Choice index) const;
    
        /// Retrieve selection name (for diagnostic purposes).
        static string SelectionName(E_Choice index);
    
        /// Select the requested variant if needed.
        void Select(E_Choice index, EResetVariant reset = eDoResetVariant);
        /// Select the requested variant if needed,
        /// allocating CObject variants from memory pool.
        void Select(E_Choice index,
                    EResetVariant reset,
                    CObjectMemoryPool* pool);
    
        // types
        typedef CMedline_entry TMl;
        typedef CSeq_entry TProt;
        typedef CSeq_entry TNuc;
        typedef CSeq_entry TGenome;
        typedef CBiostruc TStructure;
        typedef CBiostruc_annot_set TStrucAnnot;
    
        // getters
        // setters
    
        // typedef CMedline_entry TMl
        bool IsMl(void) const;
        const TMl& GetMl(void) const;
        TMl& SetMl(void);
        void SetMl(TMl& value);
    
        // typedef CSeq_entry TProt
        bool IsProt(void) const;
        const TProt& GetProt(void) const;
        TProt& SetProt(void);
        void SetProt(TProt& value);
    
        // typedef CSeq_entry TNuc
        bool IsNuc(void) const;
        const TNuc& GetNuc(void) const;
        TNuc& SetNuc(void);
        void SetNuc(TNuc& value);
    
        // typedef CSeq_entry TGenome
        bool IsGenome(void) const;
        const TGenome& GetGenome(void) const;
        TGenome& SetGenome(void);
        void SetGenome(TGenome& value);
    
        // typedef CBiostruc TStructure
        bool IsStructure(void) const;
        const TStructure& GetStructure(void) const;
        TStructure& SetStructure(void);
        void SetStructure(TStructure& value);
    
        // typedef CBiostruc_annot_set TStrucAnnot
        bool IsStrucAnnot(void) const;
        const TStrucAnnot& GetStrucAnnot(void) const;
        TStrucAnnot& SetStrucAnnot(void);
        void SetStrucAnnot(TStrucAnnot& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Data(const C_Data& );
        C_Data& operator=(const C_Data& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
    // types
    typedef string TTitle;
    typedef C_Data TData;
    typedef EEntrez_style TStyle;
    typedef string TLocation;

    // getters
    // setters

    /// optional
    /// typedef string TTitle
    ///  Check whether the Title data member has been assigned a value.
    bool IsSetTitle(void) const;
    /// Check whether it is safe or not to call GetTitle method.
    bool CanGetTitle(void) const;
    void ResetTitle(void);
    const TTitle& GetTitle(void) const;
    void SetTitle(const TTitle& value);
    TTitle& SetTitle(void);

    /// mandatory
    /// typedef C_Data TData
    ///  Check whether the Data data member has been assigned a value.
    bool IsSetData(void) const;
    /// Check whether it is safe or not to call GetData method.
    bool CanGetData(void) const;
    void ResetData(void);
    const TData& GetData(void) const;
    void SetData(TData& value);
    TData& SetData(void);

    /// mandatory
    /// typedef EEntrez_style TStyle
    ///  Check whether the Style data member has been assigned a value.
    bool IsSetStyle(void) const;
    /// Check whether it is safe or not to call GetStyle method.
    bool CanGetStyle(void) const;
    void ResetStyle(void);
    TStyle GetStyle(void) const;
    void SetStyle(TStyle value);
    TStyle& SetStyle(void);

    /// optional
    /// typedef string TLocation
    ///  Check whether the Location data member has been assigned a value.
    bool IsSetLocation(void) const;
    /// Check whether it is safe or not to call GetLocation method.
    bool CanGetLocation(void) const;
    void ResetLocation(void);
    const TLocation& GetLocation(void) const;
    void SetLocation(const TLocation& value);
    TLocation& SetLocation(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez_general_Base(const CEntrez_general_Base&);
    CEntrez_general_Base& operator=(const CEntrez_general_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Title;
    CRef< TData > m_Data;
    EEntrez_style m_Style;
    string m_Location;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CEntrez_general_Base::C_Data::E_Choice CEntrez_general_Base::C_Data::Which(void) const
{
    return m_choice;
}

inline
void CEntrez_general_Base::C_Data::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CEntrez_general_Base::C_Data::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CEntrez_general_Base::C_Data::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CEntrez_general_Base::C_Data::IsMl(void) const
{
    return m_choice == e_Ml;
}

inline
bool CEntrez_general_Base::C_Data::IsProt(void) const
{
    return m_choice == e_Prot;
}

inline
bool CEntrez_general_Base::C_Data::IsNuc(void) const
{
    return m_choice == e_Nuc;
}

inline
bool CEntrez_general_Base::C_Data::IsGenome(void) const
{
    return m_choice == e_Genome;
}

inline
bool CEntrez_general_Base::C_Data::IsStructure(void) const
{
    return m_choice == e_Structure;
}

inline
bool CEntrez_general_Base::C_Data::IsStrucAnnot(void) const
{
    return m_choice == e_StrucAnnot;
}

inline
bool CEntrez_general_Base::IsSetTitle(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez_general_Base::CanGetTitle(void) const
{
    return IsSetTitle();
}

inline
const CEntrez_general_Base::TTitle& CEntrez_general_Base::GetTitle(void) const
{
    if (!CanGetTitle()) {
        ThrowUnassigned(0);
    }
    return m_Title;
}

inline
void CEntrez_general_Base::SetTitle(const CEntrez_general_Base::TTitle& value)
{
    m_Title = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez_general_Base::TTitle& CEntrez_general_Base::SetTitle(void)
{
#ifdef _DEBUG
    if (!IsSetTitle()) {
        m_Title = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Title;
}

inline
bool CEntrez_general_Base::IsSetData(void) const
{
    return m_Data.NotEmpty();
}

inline
bool CEntrez_general_Base::CanGetData(void) const
{
    return true;
}

inline
const CEntrez_general_Base::TData& CEntrez_general_Base::GetData(void) const
{
    if ( !m_Data ) {
        const_cast<CEntrez_general_Base*>(this)->ResetData();
    }
    return (*m_Data);
}

inline
CEntrez_general_Base::TData& CEntrez_general_Base::SetData(void)
{
    if ( !m_Data ) {
        ResetData();
    }
    return (*m_Data);
}

inline
bool CEntrez_general_Base::IsSetStyle(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CEntrez_general_Base::CanGetStyle(void) const
{
    return IsSetStyle();
}

inline
void CEntrez_general_Base::ResetStyle(void)
{
    m_Style = (ncbi::objects::EEntrez_style)(0);
    m_set_State[0] &= ~0x30;
}

inline
CEntrez_general_Base::TStyle CEntrez_general_Base::GetStyle(void) const
{
    if (!CanGetStyle()) {
        ThrowUnassigned(2);
    }
    return m_Style;
}

inline
void CEntrez_general_Base::SetStyle(CEntrez_general_Base::TStyle value)
{
    m_Style = value;
    m_set_State[0] |= 0x30;
}

inline
CEntrez_general_Base::TStyle& CEntrez_general_Base::SetStyle(void)
{
#ifdef _DEBUG
    if (!IsSetStyle()) {
        memset(&m_Style,UnassignedByte(),sizeof(m_Style));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Style;
}

inline
bool CEntrez_general_Base::IsSetLocation(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CEntrez_general_Base::CanGetLocation(void) const
{
    return IsSetLocation();
}

inline
const CEntrez_general_Base::TLocation& CEntrez_general_Base::GetLocation(void) const
{
    if (!CanGetLocation()) {
        ThrowUnassigned(3);
    }
    return m_Location;
}

inline
void CEntrez_general_Base::SetLocation(const CEntrez_general_Base::TLocation& value)
{
    m_Location = value;
    m_set_State[0] |= 0xc0;
}

inline
CEntrez_general_Base::TLocation& CEntrez_general_Base::SetLocation(void)
{
#ifdef _DEBUG
    if (!IsSetLocation()) {
        m_Location = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Location;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_NCBIMIME_ENTREZ_GENERAL_BASE_HPP