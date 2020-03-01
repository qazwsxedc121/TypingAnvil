#include "mainwindow.h"
#include "keypress.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    KeyPress *keyPress = new KeyPress();
    QVBoxLayout* vbox = new QVBoxLayout;
    vbox->addWidget(keyPress);
    w.centralWidget()->setLayout(vbox);
    keyPress->setFocus();
    w.show();
    return a.exec();
}
