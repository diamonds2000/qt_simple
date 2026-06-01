#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("Qt Simple");
    app.setApplicationVersion("1.0");

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}