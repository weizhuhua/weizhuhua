#include "secondform.h"
#include "ui_secondform.h"

secondForm::secondForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::secondForm)
{
    ui->setupUi(this);
}

secondForm::~secondForm()
{
    delete ui;
}
