#include "widget.h"
#include "ui_widget.h"
#include <QApplication>

#include <QDebug>
#include <QVBoxLayout>


QTranslator * Widget::m_translator = nullptr;

//总共两个问题
//1.加载的qm文件必须放在你翻译的某个界面前面。
//2.假如你没放在前面，在本界面中载入，需要在载入文件之后加入刷新界面的语句。
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_translator = new QTranslator();
    createScreenLocal();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeLang(int index)
{
    QString langCode = QString("D:/project/Qt/translator1/");
    if(index == 0)
    {
        langCode +="lang_en.qm";
    }
    else if(index == 1)
    {
        langCode +="lang_zh.qm";
    }
    else
    {
        langCode +="lang_la.qm";
    }
    changeTr(langCode);
    //重点。
    refreshLabel();

    m_secFormFo = new secondForm();
    m_secFormFo->show();
}

void Widget::createScreenLocal()
{
    combo = new QComboBox();
    combo->addItem(tr("English"));
    combo->addItem(tr("Chinese"));
    combo->addItem(tr("Latin"));
    QVBoxLayout*  layout = new QVBoxLayout();
    layout->addWidget(combo,1);
    refreshLabel();
    setLayout(layout);
    connect(combo,SIGNAL(currentIndexChanged(int)),this,SLOT(changeLang(int)));
}

void Widget::changeTr(const QString &langCode)
{
    if(m_translator != nullptr)
    {
        qApp->removeTranslator(m_translator);
    }

    bool flag = m_translator->load(langCode);
    if(flag)
    {
        qDebug() << "load successful";
        qDebug() << langCode;
        qApp->installTranslator(m_translator);
    }
    else
    {
        qDebug() << "load failed" ;
    }
}

void Widget::refreshLabel()
{
    ui->label->setText(tr("Hello World"));
    ui->label_2->setText(tr("we"));

    combo->setItemText(0, tr("English"));
    combo->setItemText(1, tr("Chinese"));
    combo->setItemText(2, tr("Latin"));
}
