/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *n11;
    QLabel *n12;
    QLabel *n22;
    QLabel *n21;
    QLabel *n32;
    QLabel *n31;
    QLabel *n42;
    QLabel *n41;
    QLabel *n52;
    QLabel *n51;
    QPushButton *c1;
    QPushButton *c2;
    QPushButton *c3;
    QPushButton *c4;
    QPushButton *c5;
    QRadioButton *slow;
    QRadioButton *fast;
    QPushButton *call;
    QLabel *label;
    QSpinBox *left;
    QSpinBox *right;
    QLabel *label_2;
    QPushButton *redo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(734, 237);
        Widget->setMinimumSize(QSize(734, 237));
        Widget->setMaximumSize(QSize(734, 237));
        QIcon icon;
        icon.addFile(QString::fromUtf8("inside.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        n11 = new QLabel(Widget);
        n11->setObjectName("n11");
        n11->setGeometry(QRect(50, 10, 54, 111));
        n11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        n12 = new QLabel(Widget);
        n12->setObjectName("n12");
        n12->setGeometry(QRect(100, 10, 54, 111));
        n22 = new QLabel(Widget);
        n22->setObjectName("n22");
        n22->setGeometry(QRect(230, 10, 54, 111));
        n21 = new QLabel(Widget);
        n21->setObjectName("n21");
        n21->setGeometry(QRect(180, 10, 54, 111));
        n32 = new QLabel(Widget);
        n32->setObjectName("n32");
        n32->setGeometry(QRect(360, 10, 54, 111));
        n31 = new QLabel(Widget);
        n31->setObjectName("n31");
        n31->setGeometry(QRect(310, 10, 54, 111));
        n42 = new QLabel(Widget);
        n42->setObjectName("n42");
        n42->setGeometry(QRect(490, 10, 54, 111));
        n41 = new QLabel(Widget);
        n41->setObjectName("n41");
        n41->setGeometry(QRect(440, 10, 54, 111));
        n52 = new QLabel(Widget);
        n52->setObjectName("n52");
        n52->setGeometry(QRect(620, 10, 54, 111));
        n51 = new QLabel(Widget);
        n51->setObjectName("n51");
        n51->setGeometry(QRect(570, 10, 54, 111));
        c1 = new QPushButton(Widget);
        c1->setObjectName("c1");
        c1->setGeometry(QRect(60, 120, 80, 24));
        c2 = new QPushButton(Widget);
        c2->setObjectName("c2");
        c2->setGeometry(QRect(190, 120, 80, 24));
        c3 = new QPushButton(Widget);
        c3->setObjectName("c3");
        c3->setGeometry(QRect(320, 120, 80, 24));
        c4 = new QPushButton(Widget);
        c4->setObjectName("c4");
        c4->setGeometry(QRect(450, 120, 80, 24));
        c5 = new QPushButton(Widget);
        c5->setObjectName("c5");
        c5->setGeometry(QRect(580, 120, 80, 24));
        slow = new QRadioButton(Widget);
        slow->setObjectName("slow");
        slow->setGeometry(QRect(490, 170, 97, 22));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        slow->setFont(font);
        slow->setChecked(true);
        fast = new QRadioButton(Widget);
        fast->setObjectName("fast");
        fast->setGeometry(QRect(360, 170, 97, 22));
        fast->setChecked(false);
        call = new QPushButton(Widget);
        call->setObjectName("call");
        call->setGeometry(QRect(230, 170, 80, 24));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 200, 241, 31));
        left = new QSpinBox(Widget);
        left->setObjectName("left");
        left->setGeometry(QRect(40, 190, 42, 22));
        left->setValue(1);
        right = new QSpinBox(Widget);
        right->setObjectName("right");
        right->setGeometry(QRect(110, 190, 42, 22));
        right->setMaximum(99);
        right->setValue(30);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 190, 40, 12));
        redo = new QPushButton(Widget);
        redo->setObjectName("redo");
        redo->setGeometry(QRect(180, 207, 80, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\351\232\217\346\234\272\346\212\275\345\217\267\345\231\250(\345\256\232\345\210\266\347\211\210)", nullptr));
        n11->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n12->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n22->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n21->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n32->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n31->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n42->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n41->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n52->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        n51->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:54pt; font-weight:700;\">?</span></p></body></html>", nullptr));
        c1->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213", nullptr));
        c2->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213", nullptr));
        c3->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213", nullptr));
        c4->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213", nullptr));
        c5->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213", nullptr));
        slow->setText(QCoreApplication::translate("Widget", "\344\273\252\345\274\217\346\204\237", nullptr));
        fast->setText(QCoreApplication::translate("Widget", "\346\236\201\351\200\237\347\211\210", nullptr));
        call->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213\346\211\200\346\234\211", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; color:#bdbdbd;\">Designed By MingJame in 2024</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\210\260", nullptr));
        redo->setText(QCoreApplication::translate("Widget", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
