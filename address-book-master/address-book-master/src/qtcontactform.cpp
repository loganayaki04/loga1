#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow( "First name <font color='red'>*</font>", firstNameField);
    addRow(" Last Name <font color='red'>*</font>", lastNameField);
    addRow(" Address", addressField);
    addRow(" Phone Number <font color='red'>*</font>", phoneNumberField);
    addRow("  Email", emailField);
  // palette.setBrush(QPalette::Background,QBrush(QImage("C:/Users/Administrator/Downloads/address-book-master/address-book-master/Chrysanthemum.jpg")));
 // lineEdit.setPalette(palette);
 //lineEdit.setFixedSize(100,100);
 //lineEdit.show();
    }

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
