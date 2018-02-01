#ifndef BYTE_ORDER_H
#define BYTE_ORDER_H

#include <QtCore/qbytearray.h>

/**
 * @brief       ×Ö½ÚÐò
 */
class CByteOrder
{
private:
    CByteOrder();

public:
    static const int BIG_ENDIAN = 0;
    static const int LITTLE_ENDIAN = 1;

public:
   static bool IsLittleEndian(const QByteArray& baData);
   static bool IsBigEndian(const QByteArray& baData);

   static QByteArray GetLittleEndian();
   static QByteArray GetBigEndian();
};

#endif // BYTE_ORDER_H
