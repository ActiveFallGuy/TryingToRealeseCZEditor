######################################################################
# Automatically generated by qmake (3.1) Wed Dec 13 21:33:55 2023
######################################################################

TEMPLATE = app
TARGET = CZEditor
INCLUDEPATH += . ~/Qt/6.6.1/gcc_64/include
QT += gui widgets

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_UP_TO=0x060000 # disables all APIs deprecated in Qt 6.0.0 and earlier

# Input
HEADERS += CzeButton.hpp CZEditor.hpp CzeViewport.hpp CzeWindow.hpp global.hpp

SOURCES += CzeButton.cpp \
           CZEditor.cpp \
           CzeViewport.cpp \
           CzeWindow.cpp \
           global.cpp \
           main.cpp
RESOURCES += CZEditor.qrc
