#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "languagetranslator.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    //Создаём объект для работы с переводами
    LanguageTranslator langTranslator;

    QQmlApplicationEngine engine;
    //и регистрируем его в качестве контекста в Qml слое
    engine.rootContext()->setContextProperty("langTranslator", &langTranslator);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
