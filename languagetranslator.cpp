#include "languagetranslator.h"
#include <QGuiApplication>

LanguageTranslator::LanguageTranslator(QObject *parent) : QObject(parent)
{

}

QString LanguageTranslator::getEmptyString()
{
    return QString();
}

void LanguageTranslator::setTranslation(QString translation)
{
    m_translator.load(":/QmlLanguage_" + translation, "."); //Загружаем перевод
    qApp->installTranslator(&m_translator);                 //Устанавливаем его в приложение
    emit languageChanged();                                 //Сигнализируем об изменении текущего перевода
}
