SOURCES += \
        QtXls.cpp

HEADERS += \
        QtXls.h \
        qtxls_global.h 

unix {
    target.path = /usr/lib
    INSTALLS += target
}
