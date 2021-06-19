#ifndef SECONDFORM_H
#define SECONDFORM_H

#include <QWidget>

namespace Ui {
class secondForm;
}

class secondForm : public QWidget
{
    Q_OBJECT

public:
    explicit secondForm(QWidget *parent = 0);
    ~secondForm();

private:
    Ui::secondForm *ui;
};

#endif // SECONDFORM_H
