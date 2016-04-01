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

/// @file Entrez2_db_info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_DB_INFO_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_DB_INFO_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>
#include <objects/entrez2/Entrez2_db_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CEntrez2_docsum_field_info;
class CEntrez2_field_info;
class CEntrez2_link_info;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// info for one database
class NCBI_ENTREZ2_EXPORT CEntrez2_db_info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_db_info_Base(void);
    // destructor
    virtual ~CEntrez2_db_info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CEntrez2_db_id TDb_name;
    typedef string TDb_menu;
    typedef string TDb_descr;
    typedef int TDoc_count;
    typedef int TField_count;
    typedef list< CRef< CEntrez2_field_info > > TFields;
    typedef int TLink_count;
    typedef list< CRef< CEntrez2_link_info > > TLinks;
    typedef int TDocsum_field_count;
    typedef list< CRef< CEntrez2_docsum_field_info > > TDocsum_fields;

    // getters
    // setters

    /// internal name
    /// mandatory
    /// typedef CEntrez2_db_id TDb_name
    ///  Check whether the Db_name data member has been assigned a value.
    bool IsSetDb_name(void) const;
    /// Check whether it is safe or not to call GetDb_name method.
    bool CanGetDb_name(void) const;
    void ResetDb_name(void);
    const TDb_name& GetDb_name(void) const;
    void SetDb_name(const TDb_name& value);
    TDb_name& SetDb_name(void);

    /// short name for menu
    /// mandatory
    /// typedef string TDb_menu
    ///  Check whether the Db_menu data member has been assigned a value.
    bool IsSetDb_menu(void) const;
    /// Check whether it is safe or not to call GetDb_menu method.
    bool CanGetDb_menu(void) const;
    void ResetDb_menu(void);
    const TDb_menu& GetDb_menu(void) const;
    void SetDb_menu(const TDb_menu& value);
    TDb_menu& SetDb_menu(void);

    /// longer explanatory name
    /// mandatory
    /// typedef string TDb_descr
    ///  Check whether the Db_descr data member has been assigned a value.
    bool IsSetDb_descr(void) const;
    /// Check whether it is safe or not to call GetDb_descr method.
    bool CanGetDb_descr(void) const;
    void ResetDb_descr(void);
    const TDb_descr& GetDb_descr(void) const;
    void SetDb_descr(const TDb_descr& value);
    TDb_descr& SetDb_descr(void);

    /// total number of records
    /// mandatory
    /// typedef int TDoc_count
    ///  Check whether the Doc_count data member has been assigned a value.
    bool IsSetDoc_count(void) const;
    /// Check whether it is safe or not to call GetDoc_count method.
    bool CanGetDoc_count(void) const;
    void ResetDoc_count(void);
    TDoc_count GetDoc_count(void) const;
    void SetDoc_count(TDoc_count value);
    TDoc_count& SetDoc_count(void);

    /// number of field types
    /// mandatory
    /// typedef int TField_count
    ///  Check whether the Field_count data member has been assigned a value.
    bool IsSetField_count(void) const;
    /// Check whether it is safe or not to call GetField_count method.
    bool CanGetField_count(void) const;
    void ResetField_count(void);
    TField_count GetField_count(void) const;
    void SetField_count(TField_count value);
    TField_count& SetField_count(void);

    /// mandatory
    /// typedef list< CRef< CEntrez2_field_info > > TFields
    ///  Check whether the Fields data member has been assigned a value.
    bool IsSetFields(void) const;
    /// Check whether it is safe or not to call GetFields method.
    bool CanGetFields(void) const;
    void ResetFields(void);
    const TFields& GetFields(void) const;
    TFields& SetFields(void);

    /// number of link types
    /// mandatory
    /// typedef int TLink_count
    ///  Check whether the Link_count data member has been assigned a value.
    bool IsSetLink_count(void) const;
    /// Check whether it is safe or not to call GetLink_count method.
    bool CanGetLink_count(void) const;
    void ResetLink_count(void);
    TLink_count GetLink_count(void) const;
    void SetLink_count(TLink_count value);
    TLink_count& SetLink_count(void);

    /// mandatory
    /// typedef list< CRef< CEntrez2_link_info > > TLinks
    ///  Check whether the Links data member has been assigned a value.
    bool IsSetLinks(void) const;
    /// Check whether it is safe or not to call GetLinks method.
    bool CanGetLinks(void) const;
    void ResetLinks(void);
    const TLinks& GetLinks(void) const;
    TLinks& SetLinks(void);

    /// mandatory
    /// typedef int TDocsum_field_count
    ///  Check whether the Docsum_field_count data member has been assigned a value.
    bool IsSetDocsum_field_count(void) const;
    /// Check whether it is safe or not to call GetDocsum_field_count method.
    bool CanGetDocsum_field_count(void) const;
    void ResetDocsum_field_count(void);
    TDocsum_field_count GetDocsum_field_count(void) const;
    void SetDocsum_field_count(TDocsum_field_count value);
    TDocsum_field_count& SetDocsum_field_count(void);

    /// mandatory
    /// typedef list< CRef< CEntrez2_docsum_field_info > > TDocsum_fields
    ///  Check whether the Docsum_fields data member has been assigned a value.
    bool IsSetDocsum_fields(void) const;
    /// Check whether it is safe or not to call GetDocsum_fields method.
    bool CanGetDocsum_fields(void) const;
    void ResetDocsum_fields(void);
    const TDocsum_fields& GetDocsum_fields(void) const;
    TDocsum_fields& SetDocsum_fields(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_db_info_Base(const CEntrez2_db_info_Base&);
    CEntrez2_db_info_Base& operator=(const CEntrez2_db_info_Base&);

    // data
    Uint4 m_set_State[1];
    CEntrez2_db_id m_Db_name;
    string m_Db_menu;
    string m_Db_descr;
    int m_Doc_count;
    int m_Field_count;
    list< CRef< CEntrez2_field_info > > m_Fields;
    int m_Link_count;
    list< CRef< CEntrez2_link_info > > m_Links;
    int m_Docsum_field_count;
    list< CRef< CEntrez2_docsum_field_info > > m_Docsum_fields;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_db_info_Base::IsSetDb_name(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetDb_name(void) const
{
    return IsSetDb_name();
}

inline
const CEntrez2_db_info_Base::TDb_name& CEntrez2_db_info_Base::GetDb_name(void) const
{
    if (!CanGetDb_name()) {
        ThrowUnassigned(0);
    }
    return m_Db_name;
}

inline
void CEntrez2_db_info_Base::SetDb_name(const CEntrez2_db_info_Base::TDb_name& value)
{
    m_Db_name = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez2_db_info_Base::TDb_name& CEntrez2_db_info_Base::SetDb_name(void)
{
    m_set_State[0] |= 0x1;
    return m_Db_name;
}

inline
bool CEntrez2_db_info_Base::IsSetDb_menu(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetDb_menu(void) const
{
    return IsSetDb_menu();
}

inline
const CEntrez2_db_info_Base::TDb_menu& CEntrez2_db_info_Base::GetDb_menu(void) const
{
    if (!CanGetDb_menu()) {
        ThrowUnassigned(1);
    }
    return m_Db_menu;
}

inline
void CEntrez2_db_info_Base::SetDb_menu(const CEntrez2_db_info_Base::TDb_menu& value)
{
    m_Db_menu = value;
    m_set_State[0] |= 0xc;
}

inline
CEntrez2_db_info_Base::TDb_menu& CEntrez2_db_info_Base::SetDb_menu(void)
{
#ifdef _DEBUG
    if (!IsSetDb_menu()) {
        m_Db_menu = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Db_menu;
}

inline
bool CEntrez2_db_info_Base::IsSetDb_descr(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetDb_descr(void) const
{
    return IsSetDb_descr();
}

inline
const CEntrez2_db_info_Base::TDb_descr& CEntrez2_db_info_Base::GetDb_descr(void) const
{
    if (!CanGetDb_descr()) {
        ThrowUnassigned(2);
    }
    return m_Db_descr;
}

inline
void CEntrez2_db_info_Base::SetDb_descr(const CEntrez2_db_info_Base::TDb_descr& value)
{
    m_Db_descr = value;
    m_set_State[0] |= 0x30;
}

inline
CEntrez2_db_info_Base::TDb_descr& CEntrez2_db_info_Base::SetDb_descr(void)
{
#ifdef _DEBUG
    if (!IsSetDb_descr()) {
        m_Db_descr = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Db_descr;
}

inline
bool CEntrez2_db_info_Base::IsSetDoc_count(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetDoc_count(void) const
{
    return IsSetDoc_count();
}

inline
void CEntrez2_db_info_Base::ResetDoc_count(void)
{
    m_Doc_count = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CEntrez2_db_info_Base::TDoc_count CEntrez2_db_info_Base::GetDoc_count(void) const
{
    if (!CanGetDoc_count()) {
        ThrowUnassigned(3);
    }
    return m_Doc_count;
}

inline
void CEntrez2_db_info_Base::SetDoc_count(CEntrez2_db_info_Base::TDoc_count value)
{
    m_Doc_count = value;
    m_set_State[0] |= 0xc0;
}

inline
CEntrez2_db_info_Base::TDoc_count& CEntrez2_db_info_Base::SetDoc_count(void)
{
#ifdef _DEBUG
    if (!IsSetDoc_count()) {
        memset(&m_Doc_count,UnassignedByte(),sizeof(m_Doc_count));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Doc_count;
}

inline
bool CEntrez2_db_info_Base::IsSetField_count(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetField_count(void) const
{
    return IsSetField_count();
}

inline
void CEntrez2_db_info_Base::ResetField_count(void)
{
    m_Field_count = 0;
    m_set_State[0] &= ~0x300;
}

inline
CEntrez2_db_info_Base::TField_count CEntrez2_db_info_Base::GetField_count(void) const
{
    if (!CanGetField_count()) {
        ThrowUnassigned(4);
    }
    return m_Field_count;
}

inline
void CEntrez2_db_info_Base::SetField_count(CEntrez2_db_info_Base::TField_count value)
{
    m_Field_count = value;
    m_set_State[0] |= 0x300;
}

inline
CEntrez2_db_info_Base::TField_count& CEntrez2_db_info_Base::SetField_count(void)
{
#ifdef _DEBUG
    if (!IsSetField_count()) {
        memset(&m_Field_count,UnassignedByte(),sizeof(m_Field_count));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Field_count;
}

inline
bool CEntrez2_db_info_Base::IsSetFields(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetFields(void) const
{
    return true;
}

inline
const CEntrez2_db_info_Base::TFields& CEntrez2_db_info_Base::GetFields(void) const
{
    return m_Fields;
}

inline
CEntrez2_db_info_Base::TFields& CEntrez2_db_info_Base::SetFields(void)
{
    m_set_State[0] |= 0x400;
    return m_Fields;
}

inline
bool CEntrez2_db_info_Base::IsSetLink_count(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetLink_count(void) const
{
    return IsSetLink_count();
}

inline
void CEntrez2_db_info_Base::ResetLink_count(void)
{
    m_Link_count = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CEntrez2_db_info_Base::TLink_count CEntrez2_db_info_Base::GetLink_count(void) const
{
    if (!CanGetLink_count()) {
        ThrowUnassigned(6);
    }
    return m_Link_count;
}

inline
void CEntrez2_db_info_Base::SetLink_count(CEntrez2_db_info_Base::TLink_count value)
{
    m_Link_count = value;
    m_set_State[0] |= 0x3000;
}

inline
CEntrez2_db_info_Base::TLink_count& CEntrez2_db_info_Base::SetLink_count(void)
{
#ifdef _DEBUG
    if (!IsSetLink_count()) {
        memset(&m_Link_count,UnassignedByte(),sizeof(m_Link_count));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Link_count;
}

inline
bool CEntrez2_db_info_Base::IsSetLinks(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetLinks(void) const
{
    return true;
}

inline
const CEntrez2_db_info_Base::TLinks& CEntrez2_db_info_Base::GetLinks(void) const
{
    return m_Links;
}

inline
CEntrez2_db_info_Base::TLinks& CEntrez2_db_info_Base::SetLinks(void)
{
    m_set_State[0] |= 0x4000;
    return m_Links;
}

inline
bool CEntrez2_db_info_Base::IsSetDocsum_field_count(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetDocsum_field_count(void) const
{
    return IsSetDocsum_field_count();
}

inline
void CEntrez2_db_info_Base::ResetDocsum_field_count(void)
{
    m_Docsum_field_count = 0;
    m_set_State[0] &= ~0x30000;
}

inline
CEntrez2_db_info_Base::TDocsum_field_count CEntrez2_db_info_Base::GetDocsum_field_count(void) const
{
    if (!CanGetDocsum_field_count()) {
        ThrowUnassigned(8);
    }
    return m_Docsum_field_count;
}

inline
void CEntrez2_db_info_Base::SetDocsum_field_count(CEntrez2_db_info_Base::TDocsum_field_count value)
{
    m_Docsum_field_count = value;
    m_set_State[0] |= 0x30000;
}

inline
CEntrez2_db_info_Base::TDocsum_field_count& CEntrez2_db_info_Base::SetDocsum_field_count(void)
{
#ifdef _DEBUG
    if (!IsSetDocsum_field_count()) {
        memset(&m_Docsum_field_count,UnassignedByte(),sizeof(m_Docsum_field_count));
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Docsum_field_count;
}

inline
bool CEntrez2_db_info_Base::IsSetDocsum_fields(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CEntrez2_db_info_Base::CanGetDocsum_fields(void) const
{
    return true;
}

inline
const CEntrez2_db_info_Base::TDocsum_fields& CEntrez2_db_info_Base::GetDocsum_fields(void) const
{
    return m_Docsum_fields;
}

inline
CEntrez2_db_info_Base::TDocsum_fields& CEntrez2_db_info_Base::SetDocsum_fields(void)
{
    m_set_State[0] |= 0x40000;
    return m_Docsum_fields;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_DB_INFO_BASE_HPP