#include "stdafx.h"
#include "ByteOrder.h"

CByteOrder::CByteOrder()
{

}

//static
bool CByteOrder::IsLittleEndian(const QByteArray& baData)
{
    if(GetLittleEndian() == baData)
    {
        return true;
    }
    else
    {
        return false;
    }

}

//static
bool CByteOrder::IsBigEndian(const QByteArray& baData)
{
    if(GetBigEndian() == baData)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//static
QByteArray CByteOrder::GetLittleEndian()
{
    static QByteArray data;
    data.resize(2);
    data[0] = 0xFE;
    data[1] = 0xFF;

    return data;
}

//static
QByteArray CByteOrder::GetBigEndian()
{
    static QByteArray data;
    data.resize(2);
    data[0] = 0xFF;
    data[1] = 0xFE;

    return data;
}
