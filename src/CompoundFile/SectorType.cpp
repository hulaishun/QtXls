#include "stdafx.h"
#include "SectorType.h"

CSectorType::CSectorType()
{

}

//static
bool CSectorType::IsSector(int iSectorNumber)
{
    if(SECT_MIN <= iSectorNumber && SECT_MAX >= iSectorNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//static
bool CSectorType::IsRegSector(int iSectorNumber)
{
    if(iSectorNumber >= REG_SECT_MIN && iSectorNumber <= REG_SECT_MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//static
bool CSectorType::IsDifSector(int iSectorNumber)
{
    if(DIF_SECT == iSectorNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//static
bool CSectorType::IsFastSector(int iSectorNumber)
{
    if(FAST_SECT == iSectorNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//static
bool CSectorType::IsEndOfChain(int iSectorNumber)
{
    if(END_OF_CHAIN == iSectorNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//static
bool CSectorType::IsFreeSector(int iSectorNumber)
{
    if(FREE_SECT == iSectorNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}
