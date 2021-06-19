#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QTranslator>

#include "secondform.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void changeLang(int index);

private:
    void createScreenLocal();
    void changeTr(const QString& langCode);
    void refreshLabel();
private:
    Ui::Widget *ui;
    QComboBox* combo;
    static QTranslator * m_translator;
    secondForm* m_secFormFo;
};

#endif // WIDGET_H
