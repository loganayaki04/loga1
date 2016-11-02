#include <QApplication>
#include<QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    window.setFixedSize(300,200);
    QPushButton *welcomeButton = new QPushButton("Welcome to QT",&window);
    welcomeButton->setToolTip("Tool tip to welcome Button");
    welcomeButton->setGeometry(10,10,100,30);
    window.show();
    return a.exec();
}
