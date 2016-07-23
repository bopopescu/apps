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

/// @file ID2_Reply_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'id2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ID2_ID2_REPLY_BASE_HPP
#define OBJECTS_ID2_ID2_REPLY_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CID2S_Reply_Get_Chunk;
class CID2S_Reply_Get_Split_Info;
class CID2_Error;
class CID2_Params;
class CID2_Reply_Get_Blob;
class CID2_Reply_Get_Blob_Id;
class CID2_Reply_Get_Blob_Seq_ids;
class CID2_Reply_Get_Package;
class CID2_Reply_Get_Seq_id;
class CID2_Reply_ReGet_Blob;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///*********************************************************************
/// reply types
///*********************************************************************
class NCBI_ID2_EXPORT CID2_Reply_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2_Reply_Base(void);
    // destructor
    virtual ~CID2_Reply_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    /// reply data moved at the end to make it easier to construct
    /// the reply data manually from precalculated data
    class NCBI_ID2_EXPORT C_Reply : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Reply(void);
        // destructor
        ~C_Reply(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,       ///< No variant selected
            e_Init,
            e_Empty,
            e_Get_package,
            e_Get_seq_id,
            e_Get_blob_id,
            e_Get_blob_seq_ids,
            e_Get_blob,
            e_Reget_blob,
            e_Get_split_info,
            e_Get_chunk
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 11 ///< == e_Get_chunk+1
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
        typedef CID2_Reply_Get_Package TGet_package;
        typedef CID2_Reply_Get_Seq_id TGet_seq_id;
        typedef CID2_Reply_Get_Blob_Id TGet_blob_id;
        typedef CID2_Reply_Get_Blob_Seq_ids TGet_blob_seq_ids;
        typedef CID2_Reply_Get_Blob TGet_blob;
        typedef CID2_Reply_ReGet_Blob TReget_blob;
        typedef CID2S_Reply_Get_Split_Info TGet_split_info;
        typedef CID2S_Reply_Get_Chunk TGet_chunk;
    
        // getters
        // setters
    
    
        bool IsInit(void) const;
        void SetInit(void);
    
    
        bool IsEmpty(void) const;
        void SetEmpty(void);
    
        // typedef CID2_Reply_Get_Package TGet_package
        bool IsGet_package(void) const;
        const TGet_package& GetGet_package(void) const;
        TGet_package& SetGet_package(void);
        void SetGet_package(TGet_package& value);
    
        // typedef CID2_Reply_Get_Seq_id TGet_seq_id
        bool IsGet_seq_id(void) const;
        const TGet_seq_id& GetGet_seq_id(void) const;
        TGet_seq_id& SetGet_seq_id(void);
        void SetGet_seq_id(TGet_seq_id& value);
    
        // typedef CID2_Reply_Get_Blob_Id TGet_blob_id
        bool IsGet_blob_id(void) const;
        const TGet_blob_id& GetGet_blob_id(void) const;
        TGet_blob_id& SetGet_blob_id(void);
        void SetGet_blob_id(TGet_blob_id& value);
    
        // typedef CID2_Reply_Get_Blob_Seq_ids TGet_blob_seq_ids
        bool IsGet_blob_seq_ids(void) const;
        const TGet_blob_seq_ids& GetGet_blob_seq_ids(void) const;
        TGet_blob_seq_ids& SetGet_blob_seq_ids(void);
        void SetGet_blob_seq_ids(TGet_blob_seq_ids& value);
    
        // typedef CID2_Reply_Get_Blob TGet_blob
        bool IsGet_blob(void) const;
        const TGet_blob& GetGet_blob(void) const;
        TGet_blob& SetGet_blob(void);
        void SetGet_blob(TGet_blob& value);
    
        // typedef CID2_Reply_ReGet_Blob TReget_blob
        bool IsReget_blob(void) const;
        const TReget_blob& GetReget_blob(void) const;
        TReget_blob& SetReget_blob(void);
        void SetReget_blob(TReget_blob& value);
    
        // typedef CID2S_Reply_Get_Split_Info TGet_split_info
        bool IsGet_split_info(void) const;
        const TGet_split_info& GetGet_split_info(void) const;
        TGet_split_info& SetGet_split_info(void);
        void SetGet_split_info(TGet_split_info& value);
    
        // typedef CID2S_Reply_Get_Chunk TGet_chunk
        bool IsGet_chunk(void) const;
        const TGet_chunk& GetGet_chunk(void) const;
        TGet_chunk& SetGet_chunk(void);
        void SetGet_chunk(TGet_chunk& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Reply(const C_Reply& );
        C_Reply& operator=(const C_Reply& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            NCBI_NS_NCBI::CSerialObject *m_object;
        };
    };
    /// additional error flag if the reply is broken in the middle
    /// of transfer.
    /// 'last-octet-string', and 'nothing' mean that
    /// client may use ReGet request to get the remaining data.
    enum EDiscard {
        eDiscard_reply             = 0,  ///< whole reply should be discarded
        eDiscard_last_octet_string = 1,  ///< all data in embedded ID2-Reply-Data  except last OCTET STRING is correct
        eDiscard_nothing           = 2  ///< all data in embedded ID2-Reply-Data  is correct, but is incomplete
    };
    
    /// Access to EDiscard's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EDiscard)(void);
    
    // types
    typedef int TSerial_number;
    typedef CID2_Params TParams;
    typedef list< CRef< CID2_Error > > TError;
    typedef C_Reply TReply;
    typedef EDiscard TDiscard;

    // getters
    // setters

    /// request's serial number, copy from request
    /// optional
    /// typedef int TSerial_number
    ///  Check whether the Serial_number data member has been assigned a value.
    bool IsSetSerial_number(void) const;
    /// Check whether it is safe or not to call GetSerial_number method.
    bool CanGetSerial_number(void) const;
    void ResetSerial_number(void);
    TSerial_number GetSerial_number(void) const;
    void SetSerial_number(TSerial_number value);
    TSerial_number& SetSerial_number(void);

    /// optional
    /// typedef CID2_Params TParams
    ///  Check whether the Params data member has been assigned a value.
    bool IsSetParams(void) const;
    /// Check whether it is safe or not to call GetParams method.
    bool CanGetParams(void) const;
    void ResetParams(void);
    const TParams& GetParams(void) const;
    void SetParams(TParams& value);
    TParams& SetParams(void);

    /// optional
    /// typedef list< CRef< CID2_Error > > TError
    ///  Check whether the Error data member has been assigned a value.
    bool IsSetError(void) const;
    /// Check whether it is safe or not to call GetError method.
    bool CanGetError(void) const;
    void ResetError(void);
    const TError& GetError(void) const;
    TError& SetError(void);

    /// true if this reply is the last one for the request
    /// false if more replies will follow
    /// optional
    ///  Check whether the End_of_reply data member has been assigned a value.
    bool IsSetEnd_of_reply(void) const;
    /// Check whether it is safe or not to call GetEnd_of_reply method.
    bool CanGetEnd_of_reply(void) const;
    void ResetEnd_of_reply(void);
    void SetEnd_of_reply(void);

    /// mandatory
    /// typedef C_Reply TReply
    ///  Check whether the Reply data member has been assigned a value.
    bool IsSetReply(void) const;
    /// Check whether it is safe or not to call GetReply method.
    bool CanGetReply(void) const;
    void ResetReply(void);
    const TReply& GetReply(void) const;
    void SetReply(TReply& value);
    TReply& SetReply(void);

    /// optional
    /// typedef EDiscard TDiscard
    ///  Check whether the Discard data member has been assigned a value.
    bool IsSetDiscard(void) const;
    /// Check whether it is safe or not to call GetDiscard method.
    bool CanGetDiscard(void) const;
    void ResetDiscard(void);
    TDiscard GetDiscard(void) const;
    void SetDiscard(TDiscard value);
    TDiscard& SetDiscard(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2_Reply_Base(const CID2_Reply_Base&);
    CID2_Reply_Base& operator=(const CID2_Reply_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Serial_number;
    CRef< TParams > m_Params;
    list< CRef< CID2_Error > > m_Error;
    CRef< TReply > m_Reply;
    EDiscard m_Discard;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CID2_Reply_Base::C_Reply::E_Choice CID2_Reply_Base::C_Reply::Which(void) const
{
    return m_choice;
}

inline
void CID2_Reply_Base::C_Reply::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CID2_Reply_Base::C_Reply::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CID2_Reply_Base::C_Reply::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CID2_Reply_Base::C_Reply::IsInit(void) const
{
    return m_choice == e_Init;
}

inline
void CID2_Reply_Base::C_Reply::SetInit(void)
{
    Select(e_Init, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CID2_Reply_Base::C_Reply::IsEmpty(void) const
{
    return m_choice == e_Empty;
}

inline
void CID2_Reply_Base::C_Reply::SetEmpty(void)
{
    Select(e_Empty, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_package(void) const
{
    return m_choice == e_Get_package;
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_seq_id(void) const
{
    return m_choice == e_Get_seq_id;
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_blob_id(void) const
{
    return m_choice == e_Get_blob_id;
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_blob_seq_ids(void) const
{
    return m_choice == e_Get_blob_seq_ids;
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_blob(void) const
{
    return m_choice == e_Get_blob;
}

inline
bool CID2_Reply_Base::C_Reply::IsReget_blob(void) const
{
    return m_choice == e_Reget_blob;
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_split_info(void) const
{
    return m_choice == e_Get_split_info;
}

inline
bool CID2_Reply_Base::C_Reply::IsGet_chunk(void) const
{
    return m_choice == e_Get_chunk;
}

inline
bool CID2_Reply_Base::IsSetSerial_number(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2_Reply_Base::CanGetSerial_number(void) const
{
    return IsSetSerial_number();
}

inline
void CID2_Reply_Base::ResetSerial_number(void)
{
    m_Serial_number = 0;
    m_set_State[0] &= ~0x3;
}

inline
CID2_Reply_Base::TSerial_number CID2_Reply_Base::GetSerial_number(void) const
{
    if (!CanGetSerial_number()) {
        ThrowUnassigned(0);
    }
    return m_Serial_number;
}

inline
void CID2_Reply_Base::SetSerial_number(CID2_Reply_Base::TSerial_number value)
{
    m_Serial_number = value;
    m_set_State[0] |= 0x3;
}

inline
CID2_Reply_Base::TSerial_number& CID2_Reply_Base::SetSerial_number(void)
{
#ifdef _DEBUG
    if (!IsSetSerial_number()) {
        memset(&m_Serial_number,UnassignedByte(),sizeof(m_Serial_number));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Serial_number;
}

inline
bool CID2_Reply_Base::IsSetParams(void) const
{
    return m_Params.NotEmpty();
}

inline
bool CID2_Reply_Base::CanGetParams(void) const
{
    return IsSetParams();
}

inline
const CID2_Reply_Base::TParams& CID2_Reply_Base::GetParams(void) const
{
    if (!CanGetParams()) {
        ThrowUnassigned(1);
    }
    return (*m_Params);
}

inline
bool CID2_Reply_Base::IsSetError(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CID2_Reply_Base::CanGetError(void) const
{
    return true;
}

inline
const CID2_Reply_Base::TError& CID2_Reply_Base::GetError(void) const
{
    return m_Error;
}

inline
CID2_Reply_Base::TError& CID2_Reply_Base::SetError(void)
{
    m_set_State[0] |= 0x10;
    return m_Error;
}

inline
bool CID2_Reply_Base::IsSetEnd_of_reply(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CID2_Reply_Base::CanGetEnd_of_reply(void) const
{
    return false;
}

inline
void CID2_Reply_Base::ResetEnd_of_reply(void)
{
    m_set_State[0] &= ~0xc0;
}

inline
void CID2_Reply_Base::SetEnd_of_reply(void)
{
    m_set_State[0] |= 0xc0;
}

inline
bool CID2_Reply_Base::IsSetReply(void) const
{
    return m_Reply.NotEmpty();
}

inline
bool CID2_Reply_Base::CanGetReply(void) const
{
    return true;
}

inline
const CID2_Reply_Base::TReply& CID2_Reply_Base::GetReply(void) const
{
    if ( !m_Reply ) {
        const_cast<CID2_Reply_Base*>(this)->ResetReply();
    }
    return (*m_Reply);
}

inline
CID2_Reply_Base::TReply& CID2_Reply_Base::SetReply(void)
{
    if ( !m_Reply ) {
        ResetReply();
    }
    return (*m_Reply);
}

inline
bool CID2_Reply_Base::IsSetDiscard(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CID2_Reply_Base::CanGetDiscard(void) const
{
    return IsSetDiscard();
}

inline
void CID2_Reply_Base::ResetDiscard(void)
{
    m_Discard = (EDiscard)(0);
    m_set_State[0] &= ~0xc00;
}

inline
CID2_Reply_Base::TDiscard CID2_Reply_Base::GetDiscard(void) const
{
    if (!CanGetDiscard()) {
        ThrowUnassigned(5);
    }
    return m_Discard;
}

inline
void CID2_Reply_Base::SetDiscard(CID2_Reply_Base::TDiscard value)
{
    m_Discard = value;
    m_set_State[0] |= 0xc00;
}

inline
CID2_Reply_Base::TDiscard& CID2_Reply_Base::SetDiscard(void)
{
#ifdef _DEBUG
    if (!IsSetDiscard()) {
        memset(&m_Discard,UnassignedByte(),sizeof(m_Discard));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Discard;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ID2_ID2_REPLY_BASE_HPP