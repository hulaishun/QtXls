#ifndef QTXLS_GLOBAL_H
#define QTXLS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTXLS_LIBRARY)
#  define QTXLSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTXLSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTXLS_GLOBAL_H
