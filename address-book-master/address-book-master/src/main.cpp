#include "addressbookcontroller.h"
#include "sqlitedatasource.h"
#include <QtGui>
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SQLiteDataSource dSrc("contacts.db", true);
    AddressBookController myBook(dSrc);
    myBook.start();
    app.setStyleSheet("QMainWindow{background-image:url(C:/Users/Administrator/Downloads/address-book-master/address-book-master/Chrysanthemum.jpg)}");
    return app.exec();
   }

