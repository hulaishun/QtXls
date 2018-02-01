#ifndef SECTOR_TYPE_H
#define SECTOR_TYPE_H

/**
 * @brief       复合文件的分部类型
 */
class CSectorType
{
private:
    CSectorType();

public:
    //类型
    static const int SECTOR_TYPE_REG_SECT = 0;
    static const int SECTOR_TYPE_DIF_SECT = 1;
    static const int SECTOR_TYPE_FAST_SECT = 2;
    static const int SECTOR_TYPE_END_OF_CHAIN = 3;
    static const int SECTOR_TYPE_FREE_SECT = 4;

public:
    //类型值
    static const int REG_SECT_MIN = 0x00000000;
    static const int REG_SECT_MAX = 0xFFFFFFF9;
    static const int MAX_REG_SECT = 0xFFFFFFFA;
    static const int NOT_APPLICABLE = 0xFFFFFFFB;
    static const int DIF_SECT = 0xFFFFFFFC;
    static const int FAST_SECT = 0xFFFFFFFD;
    static const int END_OF_CHAIN = 0xFFFFFFFE;
    static const int FREE_SECT = 0xFFFFFFFF;
    static const int SECT_MIN = 0x00000000;
    static const int SECT_MAX = 0xFFFFFFFF;

public:
    //类型数组实体长度
    static const int BYTES_OF_FAT = 4;
    static const int BYTES_OF_DIFAT = 4;
    static const int BYTES_OF_MINI_FAT = 4;
    static const int BYTES_OF_DIRECTORY = 128;

public:
    static bool IsSector(int iSectorNumber);
    static bool IsRegSector(int iSectorNumber);
    static bool IsDifSector(int iSectorNumber);
    static bool IsFastSector(int iSectorNumber);
    static bool IsEndOfChain(int iSectorNumber);
    static bool IsFreeSector(int iSectorNumber);



private:
//    Sector name Integer value Description
//    REGSECT 0x00000000 - 0xFFFFFFF9 Regular sector number.
//    MAXREGSECT 0xFFFFFFFA Maximum regular sector number.
//    Not applicable 0xFFFFFFFB Reserved for future use.
//    DIFSECT 0xFFFFFFFC Specifies a DIFAT sector in the FAT.
//    FATSECT 0xFFFFFFFD Specifies a FAT sector in the FAT.
//    ENDOFCHAIN 0xFFFFFFFE End of a linked chain of sectors.
//    FREESECT 0xFFFFFFFF Specifies an unallocated sector in the FAT, Mini FAT, or DIFAT
};

#endif // SECTOR_TYPE_H
