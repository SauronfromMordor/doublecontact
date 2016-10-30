# Core (GUI-independent) part of DoubleContact

QT += core xml

INCLUDEPATH += $$PWD

HEADERS	+= \
    $$PWD/contactlist.h \
    $$PWD/contactmodel.h \
    $$PWD/contactsorterfilter.h \
    $$PWD/globals.h \
    $$PWD/languagemanager.h \
    $$PWD/formats/iformat.h \
    $$PWD/formats/formatfactory.h \
    $$PWD/formats/common/vcarddata.h \
    $$PWD/formats/files/fileformat.h \
    $$PWD/formats/files/mpbfile.h \
    $$PWD/formats/files/udxfile.h \
    $$PWD/formats/files/vcfdirectory.h \
    $$PWD/formats/files/vcffile.h

SOURCES	+= \
    $$PWD/contactlist.cpp \
    $$PWD/contactmodel.cpp \
    $$PWD/contactsorterfilter.cpp \
    $$PWD/globals.cpp \
    $$PWD/languagemanager.cpp \
    $$PWD/formats/formatfactory.cpp \
    $$PWD/formats/common/vcarddata.cpp \
    $$PWD/formats/files/fileformat.cpp \
    $$PWD/formats/files/mpbfile.cpp \
    $$PWD/formats/files/udxfile.cpp \
    $$PWD/formats/files/vcfdirectory.cpp \
    $$PWD/formats/files/vcffile.cpp

