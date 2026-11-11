#include "lab7.h"
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <QStringList>


lab7::lab7(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.btnGuardar, &QPushButton::clicked,
        this, &lab7::guardarContacto);

}

lab7::~lab7()
{}

void lab7::guardarContacto() {
}
