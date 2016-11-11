#include <QtGui>
#include <QtSql>
#include<QTableView>
#include <QtWidgets/QApplication>
#include<QTableWidget>
#include<QMessageBox>
#include <QString>
int main(int argc, char *argv[])
{
        QApplication app(argc,argv);
        QTableWidget* table = new QTableWidget();
           table->setWindowTitle("Connect to Mysql Database Example");
       QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("localhost");
       db.setDatabaseName("address");
       db.setUserName("root");
       db.setPassword("root");
       if (!db.open())
       {
       QMessageBox::critical(0, QObject::tr("Database Error"),
       db.lastError().text());
       }
       QSqlQuery query("SELECT * FROM contact");
       table->setColumnCount(query.record().count());
       table->setRowCount(query.size());
       int index=0;
       while (query.next())
       {
       table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
       table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
       table->setItem(index,2,new QTableWidgetItem(query.value(2).toString()));
       table->setItem(index,3,new QTableWidgetItem(query.value(3).toString()));
       table->setItem(index,4,new QTableWidgetItem(query.value(4).toString()));

       table->item(0,0)->setBackgroundColor(Qt::red);
       table->item(0,1)->setBackgroundColor(Qt::green);
       table->item(0,2)->setBackgroundColor(Qt::blue);
       table->resizeColumnsToContents();
       table->item(0,0)->setTextAlignment(Qt::AlignCenter);
       table->item(0,1)->setTextAlignment(Qt::AlignCenter);
       table->item(0,2)->setTextAlignment(Qt::AlignCenter);

       QTableWidgetItem *item=new QTableWidgetItem();
       item->setIcon(*new QIcon("D:/gitintro/images.png"));
       table->setRowCount(1);
       table->setColumnCount(3);
       table->setHorizontalHeaderItem(0,item);
       table->setHorizontalHeaderItem(1,item);
       table->setHorizontalHeaderItem(2,item);
       table->setHorizontalHeaderLabels(QString("HEADER 1;HEADER 2;HEADER 3").split(";"));
       table->setEditTriggers(QAbstractItemView::NoEditTriggers);
       /*QPalette* palette = new QPalette();
       palette->setBrush(QPalette::Base,*(new QBrush(*(new QPixmap("D:/gitintro/1.jpeg")))));
       table->setPalette(*palette);*/
       index++;
       table->item(0,0)->setFont(QFont("Times", 13, QFont::Bold));
           table->item(0,1)->setFont(QFont("Times", 15, QFont::Bold,true));
           table->item(0,2)->setFont(QFont("Helvetica [Cronyx]", 18, QFont::Bold));
       table->item(0,1)->setBackground(QBrush(QPixmap("D:/gitintro/1.jpeg")));



       }

         table->show();
       return app.exec();
}
