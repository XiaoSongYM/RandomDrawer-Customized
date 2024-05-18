#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QTimer>
#include <QRandomGenerator>
#include <QTime>
#include <QDebug>
#include <QFont>

#define DIS_FONT_SIZE 54       // {fs->Z|fs->[10,99]}
#define CHECK_IF_BANING false
#define BANEDNUM 3
#define BANEDLIST {0,17,26}


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QString DisplayDetail(QString info);
    bool isbaned(int num);


private slots:
    void change();

    void on_c1_clicked();

    void on_c2_clicked();

    void on_c3_clicked();

    void on_c4_clicked();

    void on_call_clicked();

    void on_fast_clicked();

    void on_slow_clicked();

    void on_c5_clicked();

    void on_redo_clicked();

private:
    Ui::Widget *ui;
    QTimer *timer;
    QRandomGenerator *ra;
    QString fs = QString::number(DIS_FONT_SIZE);
    QString prefix;
    int ws;
    int turns;
    int radarr[10002];
    bool showed[6][3];
    bool isfast;

    int baned[BANEDNUM+1]=BANEDLIST;

};
#endif // WIDGET_H
