#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "languagetranslator.h"
#include "bye.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);


    LanguageTranslator langTranslator; //Создаём объект для работы с переводами

    Bye goodbye; //
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("langTranslator", &langTranslator); //и регистрируем его в качестве контекста в Qml слое
    engine.rootContext()->setContextProperty("goodbye", &goodbye);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
