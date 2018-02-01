#ifndef HEADER_H
#define HEADER_H

#include <QtCore/qbytearray.h>

/**
 * @brief       复合文件的文件头
 */
class CHeader
{
public:
   explicit CHeader();
    ~CHeader();

public:
    static const int SIZE_OF_SIGNATURE = 8;
    static const int SIZE_OF_CLSID = 16;
    static const int SIZE_OF_MINOR_VERSION = 2;
    static const int SIZE_OF_MAJOR_VERSION = 2;
    static const int SIZE_OF_SECTOR_SHIFT = 2;
    static const int SIZE_OF_MINI_SECTOR_SHIFT = 2;
    static const int SIZE_OF_RESERVED = 6;
    static const int SIZE_OF_NUMBER_OF_DIRECTORY_SECTORS = 4;
    static const int SIZE_OF_NUMBER_OF_FAT_SECTORS = 4;
    static const int SIZE_OF_FIRST_DIRECTORY_SECTOR_LOCATION = 4;
    static const int SIZE_OF_TRANSACTION_SIGNATURE_NUMBER = 4;
    static const int SIZE_OF_MINI_STREAM_CUTOFF_SIZE = 4;
    static const int SIZE_OF_FIRST_MINI_FAST_SECTOR_LOCATION = 4;
    static const int SIZE_OF_NUMBER_OF_MINI_FAT_SECTORS = 4;
    static const int SIZE_OF_FIRST_DIFAT_SECTOR_LOCATION = 4;
    static const int SIZE_OF_DIFAT = 436;

private:
    QByteArray              m_baHeader;
    QByteArray              m_baSignature;
    QByteArray              m_baClsId;
    quint16                 m_ui16MinorVersion;
    quint16                 m_ui16MajorVersion;
    quint16                 m_ui16ByteOrder;
    quint16                 m_ui16SectorShift;
    quint16                 m_ui16SectorSize;
    quint16                 m_ui16MiniSectorShift;
    QByteArray              m_baReserved;
    quint32                 m_ui32NumberOfDirctorySectors;
    quint32                 m_ui32NumberOfFatSectors;
    quint32                 m_ui32FirstDirctorySectorLocation;
    quint32                 m_ui32TransactionSignautreNumber;
    quint32                 m_ui32MiniStreamCutoffSize;
    quint32                 m_ui32NumberOfMiniFatSectors;
    quint32                 m_ui32FirstDifatSectorLocation;
    quint32                 m_ui32NumberOfDifatSectors;
    QByteArray              m_daDifat;



private:
//    Byte offset Field name Field value
//    0x0000 Header Signature 0xE11AB1A1E011CFD0
//    0x0008 Header CLSID 0x00000000000000000000000000000000 (null)
//    0x0018 Minor Version 0x003E
//    0x001A Major Version 0x0003
//    0x001C Byte Order 0xFFFE
//    0x001E Sector Size 0x0009 (512 bytes per sector)
//    0x0020 Mini Stream Sector Size 0x0006 (64 bytes per Mini Stream sector)
//    0x0022 Reserved 0x0000 0x00000000
//    0x0028 Number of directory Sector 0x00000000 (not used for version 3)
//    0x002C Number of FAT sectors 0x00000001 (1 FAT sector)
//    0x0030 Directory Starting Sector Location 0x00000001 (sector #1 for Directory)
//    0x0034 Transaction Signature 0x00000000 (not used)
//    0x0038 Mini Stream Size Cutoff 0x00001000 (4,096 bytes)
//    0x003C Mini FAT Starting Sector Location 0x00000002 (sector #2 for Mini FAT)
//    0x0040 Number of Mini FAT sectors 0x00000001 (1 Mini FAT sector)
//    0x0044 DIFAT Start Sector Location 0xFFFFFFFE (ENDOFCHAIN)
//    0x0048 Number of DIFAT Sectors 0x00000000 (no DIFAT, less than 7 MB)
//    0x004C DIFAT[0] 0x00000000 (sector #0 for FAT)
//    0x0050 DIFAT[1] through DIFAT[108] 0xFFFFFFFF (FREESECT) (free FAT sectors)
};

#endif // HEADER_H
