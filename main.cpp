#include "IPEdit.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IPEdit* ipEdit = new IPEdit();
    ipEdit->show();

    ipEdit->setText("255.255.255.0");
    QString text = ipEdit->text();
    return a.exec();
}
