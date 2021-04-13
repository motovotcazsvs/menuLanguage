TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    languagetranslator.cpp
#Для того, чтобы создать файл переводов со строками из ресурсов qml
#понадобится включить файл qml в качестве обычных исходников в pro файле
#но только для использования утилиты lupdate, чтобы она могла узнать,
#какие строки нуждаются в переводе
lupdate_only {
    SOURCES += main.qml
}

lupdate_only {
    SOURCES += main.qml
}

RESOURCES += qml.qrc \
    translations.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

#Добавляем файлы переводов
TRANSLATIONS += QmlLanguage_en.ts \
                QmlLanguage_ua.ts

HEADERS += \
    languagetranslator.h
