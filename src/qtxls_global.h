#ifndef QTXLS_GLOBAL_H
#define QTXLS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTXLS_LIB)
#  define QTXLS_EXPORT Q_DECL_EXPORT
#else
#  define QTXLS_EXPORT Q_DECL_IMPORT
#endif

//#ifndef BUILD_STATIC
//# if defined(QTXLS_LIB)
//#  define QTXLS_EXPORT Q_DECL_EXPORT
//# else
//#  define QTXLS_EXPORT Q_DECL_IMPORT
//# endif
//#else
//# define QTXLS_EXPORT
//#endif

#endif // QTXLS_GLOBAL_H
