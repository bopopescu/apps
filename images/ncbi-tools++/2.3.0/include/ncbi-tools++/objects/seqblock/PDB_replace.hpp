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

/// @file PDB_replace.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqblock.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: PDB_replace_.hpp


#ifndef OBJECTS_SEQBLOCK_PDB_REPLACE_HPP
#define OBJECTS_SEQBLOCK_PDB_REPLACE_HPP


// generated includes
#include <objects/seqblock/PDB_replace_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQBLOCK_EXPORT CPDB_replace : public CPDB_replace_Base
{
    typedef CPDB_replace_Base Tparent;
public:
    // constructor
    CPDB_replace(void);
    // destructor
    ~CPDB_replace(void);

private:
    // Prohibit copy constructor and assignment operator
    CPDB_replace(const CPDB_replace& value);
    CPDB_replace& operator=(const CPDB_replace& value);

};

/////////////////// CPDB_replace inline methods

// constructor
inline
CPDB_replace::CPDB_replace(void)
{
}


/////////////////// end of CPDB_replace inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQBLOCK_PDB_REPLACE_HPP
/* Original file checksum: lines: 86, chars: 2460, CRC32: d1c292d7 */