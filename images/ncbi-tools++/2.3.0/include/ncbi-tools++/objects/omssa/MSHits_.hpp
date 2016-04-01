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

/// @file MSHits_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'omssa.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_OMSSA_MSHITS_BASE_HPP
#define OBJECTS_OMSSA_MSHITS_BASE_HPP

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
class CMSMZHit;
class CMSModHit;
class CMSPepHit;
class CMSScoreSet;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// hits to a given spectrum
class NCBI_OMSSA_EXPORT CMSHits_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMSHits_Base(void);
    // destructor
    virtual ~CMSHits_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef double TEvalue;
    typedef double TPvalue;
    typedef int TCharge;
    typedef list< CRef< CMSPepHit > > TPephits;
    typedef list< CRef< CMSMZHit > > TMzhits;
    typedef string TPepstring;
    typedef int TMass;
    typedef list< CRef< CMSModHit > > TMods;
    typedef string TPepstart;
    typedef string TPepstop;
    typedef int TProtlength;
    typedef int TTheomass;
    typedef int TOid;
    typedef list< CRef< CMSScoreSet > > TScores;
    typedef string TLibaccession;

    // getters
    // setters

    /// E-value (expect value)
    /// mandatory
    /// typedef double TEvalue
    ///  Check whether the Evalue data member has been assigned a value.
    bool IsSetEvalue(void) const;
    /// Check whether it is safe or not to call GetEvalue method.
    bool CanGetEvalue(void) const;
    void ResetEvalue(void);
    TEvalue GetEvalue(void) const;
    void SetEvalue(TEvalue value);
    TEvalue& SetEvalue(void);

    /// P-value (probability value)
    /// mandatory
    /// typedef double TPvalue
    ///  Check whether the Pvalue data member has been assigned a value.
    bool IsSetPvalue(void) const;
    /// Check whether it is safe or not to call GetPvalue method.
    bool CanGetPvalue(void) const;
    void ResetPvalue(void);
    TPvalue GetPvalue(void) const;
    void SetPvalue(TPvalue value);
    TPvalue& SetPvalue(void);

    /// the charge state used in search.  -1 == not +1
    /// mandatory
    /// typedef int TCharge
    ///  Check whether the Charge data member has been assigned a value.
    bool IsSetCharge(void) const;
    /// Check whether it is safe or not to call GetCharge method.
    bool CanGetCharge(void) const;
    void ResetCharge(void);
    TCharge GetCharge(void) const;
    void SetCharge(TCharge value);
    TCharge& SetCharge(void);

    /// peptides that match this hit
    /// mandatory
    /// typedef list< CRef< CMSPepHit > > TPephits
    ///  Check whether the Pephits data member has been assigned a value.
    bool IsSetPephits(void) const;
    /// Check whether it is safe or not to call GetPephits method.
    bool CanGetPephits(void) const;
    void ResetPephits(void);
    const TPephits& GetPephits(void) const;
    TPephits& SetPephits(void);

    /// ions hit
    /// optional
    /// typedef list< CRef< CMSMZHit > > TMzhits
    ///  Check whether the Mzhits data member has been assigned a value.
    bool IsSetMzhits(void) const;
    /// Check whether it is safe or not to call GetMzhits method.
    bool CanGetMzhits(void) const;
    void ResetMzhits(void);
    const TMzhits& GetMzhits(void) const;
    TMzhits& SetMzhits(void);

    /// the peptide sequence
    /// optional
    /// typedef string TPepstring
    ///  Check whether the Pepstring data member has been assigned a value.
    bool IsSetPepstring(void) const;
    /// Check whether it is safe or not to call GetPepstring method.
    bool CanGetPepstring(void) const;
    void ResetPepstring(void);
    const TPepstring& GetPepstring(void) const;
    void SetPepstring(const TPepstring& value);
    TPepstring& SetPepstring(void);

    /// scaled experimental mass of peptide in Da
    /// optional
    /// typedef int TMass
    ///  Check whether the Mass data member has been assigned a value.
    bool IsSetMass(void) const;
    /// Check whether it is safe or not to call GetMass method.
    bool CanGetMass(void) const;
    void ResetMass(void);
    TMass GetMass(void) const;
    void SetMass(TMass value);
    TMass& SetMass(void);

    /// modifications to sequence
    /// optional
    /// typedef list< CRef< CMSModHit > > TMods
    ///  Check whether the Mods data member has been assigned a value.
    bool IsSetMods(void) const;
    /// Check whether it is safe or not to call GetMods method.
    bool CanGetMods(void) const;
    void ResetMods(void);
    const TMods& GetMods(void) const;
    TMods& SetMods(void);

    /// AA before the peptide (depricated)
    /// optional
    /// typedef string TPepstart
    ///  Check whether the Pepstart data member has been assigned a value.
    bool IsSetPepstart(void) const;
    /// Check whether it is safe or not to call GetPepstart method.
    bool CanGetPepstart(void) const;
    void ResetPepstart(void);
    const TPepstart& GetPepstart(void) const;
    void SetPepstart(const TPepstart& value);
    TPepstart& SetPepstart(void);

    /// AA after the peptide (depricated)
    /// optional
    /// typedef string TPepstop
    ///  Check whether the Pepstop data member has been assigned a value.
    bool IsSetPepstop(void) const;
    /// Check whether it is safe or not to call GetPepstop method.
    bool CanGetPepstop(void) const;
    void ResetPepstop(void);
    const TPepstop& GetPepstop(void) const;
    void SetPepstop(const TPepstop& value);
    TPepstop& SetPepstop(void);

    /// length of protein hit (depricated)
    /// optional
    /// typedef int TProtlength
    ///  Check whether the Protlength data member has been assigned a value.
    bool IsSetProtlength(void) const;
    /// Check whether it is safe or not to call GetProtlength method.
    bool CanGetProtlength(void) const;
    void ResetProtlength(void);
    TProtlength GetProtlength(void) const;
    void SetProtlength(TProtlength value);
    TProtlength& SetProtlength(void);

    /// scaled theoretical mass of peptide hit
    /// optional
    /// typedef int TTheomass
    ///  Check whether the Theomass data member has been assigned a value.
    bool IsSetTheomass(void) const;
    /// Check whether it is safe or not to call GetTheomass method.
    bool CanGetTheomass(void) const;
    void ResetTheomass(void);
    TTheomass GetTheomass(void) const;
    void SetTheomass(TTheomass value);
    TTheomass& SetTheomass(void);

    /// blast library oid (depricated) 
    /// optional
    /// typedef int TOid
    ///  Check whether the Oid data member has been assigned a value.
    bool IsSetOid(void) const;
    /// Check whether it is safe or not to call GetOid method.
    bool CanGetOid(void) const;
    void ResetOid(void);
    TOid GetOid(void) const;
    void SetOid(TOid value);
    TOid& SetOid(void);

    /// optional scores (for library search)
    /// optional
    /// typedef list< CRef< CMSScoreSet > > TScores
    ///  Check whether the Scores data member has been assigned a value.
    bool IsSetScores(void) const;
    /// Check whether it is safe or not to call GetScores method.
    bool CanGetScores(void) const;
    void ResetScores(void);
    const TScores& GetScores(void) const;
    TScores& SetScores(void);

    /// library search accesssion
    /// optional
    /// typedef string TLibaccession
    ///  Check whether the Libaccession data member has been assigned a value.
    bool IsSetLibaccession(void) const;
    /// Check whether it is safe or not to call GetLibaccession method.
    bool CanGetLibaccession(void) const;
    void ResetLibaccession(void);
    const TLibaccession& GetLibaccession(void) const;
    void SetLibaccession(const TLibaccession& value);
    TLibaccession& SetLibaccession(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMSHits_Base(const CMSHits_Base&);
    CMSHits_Base& operator=(const CMSHits_Base&);

    // data
    Uint4 m_set_State[1];
    double m_Evalue;
    double m_Pvalue;
    int m_Charge;
    list< CRef< CMSPepHit > > m_Pephits;
    list< CRef< CMSMZHit > > m_Mzhits;
    string m_Pepstring;
    int m_Mass;
    list< CRef< CMSModHit > > m_Mods;
    string m_Pepstart;
    string m_Pepstop;
    int m_Protlength;
    int m_Theomass;
    int m_Oid;
    list< CRef< CMSScoreSet > > m_Scores;
    string m_Libaccession;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMSHits_Base::IsSetEvalue(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMSHits_Base::CanGetEvalue(void) const
{
    return IsSetEvalue();
}

inline
void CMSHits_Base::ResetEvalue(void)
{
    m_Evalue = 0;
    m_set_State[0] &= ~0x3;
}

inline
CMSHits_Base::TEvalue CMSHits_Base::GetEvalue(void) const
{
    if (!CanGetEvalue()) {
        ThrowUnassigned(0);
    }
    return m_Evalue;
}

inline
void CMSHits_Base::SetEvalue(CMSHits_Base::TEvalue value)
{
    m_Evalue = value;
    m_set_State[0] |= 0x3;
}

inline
CMSHits_Base::TEvalue& CMSHits_Base::SetEvalue(void)
{
#ifdef _DEBUG
    if (!IsSetEvalue()) {
        memset(&m_Evalue,UnassignedByte(),sizeof(m_Evalue));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Evalue;
}

inline
bool CMSHits_Base::IsSetPvalue(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMSHits_Base::CanGetPvalue(void) const
{
    return IsSetPvalue();
}

inline
void CMSHits_Base::ResetPvalue(void)
{
    m_Pvalue = 0;
    m_set_State[0] &= ~0xc;
}

inline
CMSHits_Base::TPvalue CMSHits_Base::GetPvalue(void) const
{
    if (!CanGetPvalue()) {
        ThrowUnassigned(1);
    }
    return m_Pvalue;
}

inline
void CMSHits_Base::SetPvalue(CMSHits_Base::TPvalue value)
{
    m_Pvalue = value;
    m_set_State[0] |= 0xc;
}

inline
CMSHits_Base::TPvalue& CMSHits_Base::SetPvalue(void)
{
#ifdef _DEBUG
    if (!IsSetPvalue()) {
        memset(&m_Pvalue,UnassignedByte(),sizeof(m_Pvalue));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Pvalue;
}

inline
bool CMSHits_Base::IsSetCharge(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMSHits_Base::CanGetCharge(void) const
{
    return IsSetCharge();
}

inline
void CMSHits_Base::ResetCharge(void)
{
    m_Charge = 0;
    m_set_State[0] &= ~0x30;
}

inline
CMSHits_Base::TCharge CMSHits_Base::GetCharge(void) const
{
    if (!CanGetCharge()) {
        ThrowUnassigned(2);
    }
    return m_Charge;
}

inline
void CMSHits_Base::SetCharge(CMSHits_Base::TCharge value)
{
    m_Charge = value;
    m_set_State[0] |= 0x30;
}

inline
CMSHits_Base::TCharge& CMSHits_Base::SetCharge(void)
{
#ifdef _DEBUG
    if (!IsSetCharge()) {
        memset(&m_Charge,UnassignedByte(),sizeof(m_Charge));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Charge;
}

inline
bool CMSHits_Base::IsSetPephits(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CMSHits_Base::CanGetPephits(void) const
{
    return true;
}

inline
const CMSHits_Base::TPephits& CMSHits_Base::GetPephits(void) const
{
    return m_Pephits;
}

inline
CMSHits_Base::TPephits& CMSHits_Base::SetPephits(void)
{
    m_set_State[0] |= 0x40;
    return m_Pephits;
}

inline
bool CMSHits_Base::IsSetMzhits(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CMSHits_Base::CanGetMzhits(void) const
{
    return true;
}

inline
const CMSHits_Base::TMzhits& CMSHits_Base::GetMzhits(void) const
{
    return m_Mzhits;
}

inline
CMSHits_Base::TMzhits& CMSHits_Base::SetMzhits(void)
{
    m_set_State[0] |= 0x100;
    return m_Mzhits;
}

inline
bool CMSHits_Base::IsSetPepstring(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CMSHits_Base::CanGetPepstring(void) const
{
    return IsSetPepstring();
}

inline
const CMSHits_Base::TPepstring& CMSHits_Base::GetPepstring(void) const
{
    if (!CanGetPepstring()) {
        ThrowUnassigned(5);
    }
    return m_Pepstring;
}

inline
void CMSHits_Base::SetPepstring(const CMSHits_Base::TPepstring& value)
{
    m_Pepstring = value;
    m_set_State[0] |= 0xc00;
}

inline
CMSHits_Base::TPepstring& CMSHits_Base::SetPepstring(void)
{
#ifdef _DEBUG
    if (!IsSetPepstring()) {
        m_Pepstring = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Pepstring;
}

inline
bool CMSHits_Base::IsSetMass(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CMSHits_Base::CanGetMass(void) const
{
    return IsSetMass();
}

inline
void CMSHits_Base::ResetMass(void)
{
    m_Mass = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CMSHits_Base::TMass CMSHits_Base::GetMass(void) const
{
    if (!CanGetMass()) {
        ThrowUnassigned(6);
    }
    return m_Mass;
}

inline
void CMSHits_Base::SetMass(CMSHits_Base::TMass value)
{
    m_Mass = value;
    m_set_State[0] |= 0x3000;
}

inline
CMSHits_Base::TMass& CMSHits_Base::SetMass(void)
{
#ifdef _DEBUG
    if (!IsSetMass()) {
        memset(&m_Mass,UnassignedByte(),sizeof(m_Mass));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Mass;
}

inline
bool CMSHits_Base::IsSetMods(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CMSHits_Base::CanGetMods(void) const
{
    return true;
}

inline
const CMSHits_Base::TMods& CMSHits_Base::GetMods(void) const
{
    return m_Mods;
}

inline
CMSHits_Base::TMods& CMSHits_Base::SetMods(void)
{
    m_set_State[0] |= 0x4000;
    return m_Mods;
}

inline
bool CMSHits_Base::IsSetPepstart(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CMSHits_Base::CanGetPepstart(void) const
{
    return IsSetPepstart();
}

inline
const CMSHits_Base::TPepstart& CMSHits_Base::GetPepstart(void) const
{
    if (!CanGetPepstart()) {
        ThrowUnassigned(8);
    }
    return m_Pepstart;
}

inline
void CMSHits_Base::SetPepstart(const CMSHits_Base::TPepstart& value)
{
    m_Pepstart = value;
    m_set_State[0] |= 0x30000;
}

inline
CMSHits_Base::TPepstart& CMSHits_Base::SetPepstart(void)
{
#ifdef _DEBUG
    if (!IsSetPepstart()) {
        m_Pepstart = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Pepstart;
}

inline
bool CMSHits_Base::IsSetPepstop(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CMSHits_Base::CanGetPepstop(void) const
{
    return IsSetPepstop();
}

inline
const CMSHits_Base::TPepstop& CMSHits_Base::GetPepstop(void) const
{
    if (!CanGetPepstop()) {
        ThrowUnassigned(9);
    }
    return m_Pepstop;
}

inline
void CMSHits_Base::SetPepstop(const CMSHits_Base::TPepstop& value)
{
    m_Pepstop = value;
    m_set_State[0] |= 0xc0000;
}

inline
CMSHits_Base::TPepstop& CMSHits_Base::SetPepstop(void)
{
#ifdef _DEBUG
    if (!IsSetPepstop()) {
        m_Pepstop = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_Pepstop;
}

inline
bool CMSHits_Base::IsSetProtlength(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CMSHits_Base::CanGetProtlength(void) const
{
    return IsSetProtlength();
}

inline
void CMSHits_Base::ResetProtlength(void)
{
    m_Protlength = 0;
    m_set_State[0] &= ~0x300000;
}

inline
CMSHits_Base::TProtlength CMSHits_Base::GetProtlength(void) const
{
    if (!CanGetProtlength()) {
        ThrowUnassigned(10);
    }
    return m_Protlength;
}

inline
void CMSHits_Base::SetProtlength(CMSHits_Base::TProtlength value)
{
    m_Protlength = value;
    m_set_State[0] |= 0x300000;
}

inline
CMSHits_Base::TProtlength& CMSHits_Base::SetProtlength(void)
{
#ifdef _DEBUG
    if (!IsSetProtlength()) {
        memset(&m_Protlength,UnassignedByte(),sizeof(m_Protlength));
    }
#endif
    m_set_State[0] |= 0x100000;
    return m_Protlength;
}

inline
bool CMSHits_Base::IsSetTheomass(void) const
{
    return ((m_set_State[0] & 0xc00000) != 0);
}

inline
bool CMSHits_Base::CanGetTheomass(void) const
{
    return IsSetTheomass();
}

inline
void CMSHits_Base::ResetTheomass(void)
{
    m_Theomass = 0;
    m_set_State[0] &= ~0xc00000;
}

inline
CMSHits_Base::TTheomass CMSHits_Base::GetTheomass(void) const
{
    if (!CanGetTheomass()) {
        ThrowUnassigned(11);
    }
    return m_Theomass;
}

inline
void CMSHits_Base::SetTheomass(CMSHits_Base::TTheomass value)
{
    m_Theomass = value;
    m_set_State[0] |= 0xc00000;
}

inline
CMSHits_Base::TTheomass& CMSHits_Base::SetTheomass(void)
{
#ifdef _DEBUG
    if (!IsSetTheomass()) {
        memset(&m_Theomass,UnassignedByte(),sizeof(m_Theomass));
    }
#endif
    m_set_State[0] |= 0x400000;
    return m_Theomass;
}

inline
bool CMSHits_Base::IsSetOid(void) const
{
    return ((m_set_State[0] & 0x3000000) != 0);
}

inline
bool CMSHits_Base::CanGetOid(void) const
{
    return IsSetOid();
}

inline
void CMSHits_Base::ResetOid(void)
{
    m_Oid = 0;
    m_set_State[0] &= ~0x3000000;
}

inline
CMSHits_Base::TOid CMSHits_Base::GetOid(void) const
{
    if (!CanGetOid()) {
        ThrowUnassigned(12);
    }
    return m_Oid;
}

inline
void CMSHits_Base::SetOid(CMSHits_Base::TOid value)
{
    m_Oid = value;
    m_set_State[0] |= 0x3000000;
}

inline
CMSHits_Base::TOid& CMSHits_Base::SetOid(void)
{
#ifdef _DEBUG
    if (!IsSetOid()) {
        memset(&m_Oid,UnassignedByte(),sizeof(m_Oid));
    }
#endif
    m_set_State[0] |= 0x1000000;
    return m_Oid;
}

inline
bool CMSHits_Base::IsSetScores(void) const
{
    return ((m_set_State[0] & 0xc000000) != 0);
}

inline
bool CMSHits_Base::CanGetScores(void) const
{
    return true;
}

inline
const CMSHits_Base::TScores& CMSHits_Base::GetScores(void) const
{
    return m_Scores;
}

inline
CMSHits_Base::TScores& CMSHits_Base::SetScores(void)
{
    m_set_State[0] |= 0x4000000;
    return m_Scores;
}

inline
bool CMSHits_Base::IsSetLibaccession(void) const
{
    return ((m_set_State[0] & 0x30000000) != 0);
}

inline
bool CMSHits_Base::CanGetLibaccession(void) const
{
    return IsSetLibaccession();
}

inline
const CMSHits_Base::TLibaccession& CMSHits_Base::GetLibaccession(void) const
{
    if (!CanGetLibaccession()) {
        ThrowUnassigned(14);
    }
    return m_Libaccession;
}

inline
void CMSHits_Base::SetLibaccession(const CMSHits_Base::TLibaccession& value)
{
    m_Libaccession = value;
    m_set_State[0] |= 0x30000000;
}

inline
CMSHits_Base::TLibaccession& CMSHits_Base::SetLibaccession(void)
{
#ifdef _DEBUG
    if (!IsSetLibaccession()) {
        m_Libaccession = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10000000;
    return m_Libaccession;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_OMSSA_MSHITS_BASE_HPP