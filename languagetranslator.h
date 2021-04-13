#ifndef LANGUAGETRANSLATOR_H
#define LANGUAGETRANSLATOR_H

#include <QObject>
#include <QTranslator>

class LanguageTranslator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString emptyString READ getEmptyString NOTIFY languageChanged)

public:
    explicit LanguageTranslator(QObject *parent = 0);
    QString getEmptyString();

signals:
    //Сигнал об изменении текущего языка для изменения перевода интерфейса
    void languageChanged();

public slots:

public:
    // Метод установки перевода, который будет доступен в QML
    Q_INVOKABLE void setTranslation(QString translation);

private:
    QTranslator m_translator;

};

#endif // LANGUAGETRANSLATOR_H
