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

/// @file EMBL_dbname.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqblock.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: EMBL_dbname_.hpp


#ifndef OBJECTS_SEQBLOCK_EMBL_DBNAME_HPP
#define OBJECTS_SEQBLOCK_EMBL_DBNAME_HPP


// generated includes
#include <objects/seqblock/EMBL_dbname_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQBLOCK_EXPORT CEMBL_dbname : public CEMBL_dbname_Base
{
    typedef CEMBL_dbname_Base Tparent;
public:
    // constructor
    CEMBL_dbname(void);
    // destructor
    ~CEMBL_dbname(void);

private:
    // Prohibit copy constructor and assignment operator
    CEMBL_dbname(const CEMBL_dbname& value);
    CEMBL_dbname& operator=(const CEMBL_dbname& value);

};

/////////////////// CEMBL_dbname inline methods

// constructor
inline
CEMBL_dbname::CEMBL_dbname(void)
{
}


/////////////////// end of CEMBL_dbname inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQBLOCK_EMBL_DBNAME_HPP
/* Original file checksum: lines: 86, chars: 2460, CRC32: df15d7b5 */