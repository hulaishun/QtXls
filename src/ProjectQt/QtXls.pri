SOURCES += \
        QtXls.cpp \
    $$PWD/CompoundFile/CompoundFile.cpp \
    $$PWD/CompoundFile/Header.cpp \
    $$PWD/CompoundFile/FatSector.cpp \
    $$PWD/CompoundFile/MiniFatSector.cpp \
    $$PWD/CompoundFile/DiFatSector.cpp \
    $$PWD/CompoundFile/DirectorySector.cpp \
    $$PWD/CompoundFile/UserDefinedDataSector.cpp \
    $$PWD/CompoundFile/RangeLockSector.cpp

HEADERS += \
        QtXls.h \
        qtxls_global.h \ 
    $$PWD/CompoundFile/CompoundFile.h \
    $$PWD/CompoundFile/Header.h \
    $$PWD/CompoundFile/FatSector.h \
    $$PWD/CompoundFile/MiniFatSector.h \
    $$PWD/CompoundFile/DiFatSector.h \
    $$PWD/CompoundFile/DirectorySector.h \
    $$PWD/CompoundFile/UserDefinedDataSector.h \
    $$PWD/CompoundFile/RangeLockSector.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
