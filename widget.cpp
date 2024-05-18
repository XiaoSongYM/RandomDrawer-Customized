#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(change()));
    timer->start(8);
    turns=0;
    isfast=false;
    //  <html><head/><body><p align="center"><span style=" font-size:54pt; font-weight:700;">               </span></p></body></html>
    prefix="<html><head/><body><p align=\"center\"><span style=\" font-size:"+fs+"pt; font-weight:100;\">";
    ws=prefix.length();


    ra  = new QRandomGenerator(QDateTime::currentMSecsSinceEpoch());
    for(int i=0;i<=10000;i+=1){
        radarr[i]=qAbs(ra->generate())%10;
        // qDebug() << radarr[i];
    }

    for(int i=1;i<=5;i+=1)
        for(int j=1;j<=2;j+=1)
            showed[i][j]=false;

}

Widget::~Widget()
{
    delete ui;
}

bool Widget::isbaned(int num)
{
    if(CHECK_IF_BANING){
        for(int i=0;i<BANEDNUM;i+=1){
            if(num==baned[i]){
                return true;
            }
        }
    }
    return false;
}

QString Widget::DisplayDetail(QString info)
{
    QString fin = prefix+info+"</span></p></body></html>";
    return fin;
}

void Widget::change()
{

    if(!showed[1][1])
        ui->n11->setText(DisplayDetail(QString::number(radarr[(turns*1+1000)%10000])));
    if(!showed[1][2])
        ui->n12->setText(DisplayDetail(QString::number(radarr[(turns*1+1000)%10000+1])));
    if(!showed[2 ][1])
        ui->n21->setText(DisplayDetail(QString::number(radarr[(turns*2+1000)%10000])));
    if(!showed[2][2])
        ui->n22->setText(DisplayDetail(QString::number(radarr[(turns*2+1000)%10000+1])));
    if(!showed[3][1])
        ui->n31->setText(DisplayDetail(QString::number(radarr[(turns*3+1000)%10000])));
    if(!showed[3][2])
        ui->n32->setText(DisplayDetail(QString::number(radarr[(turns*3+1000)%10000+1])));
    if(!showed[4][1])
        ui->n41->setText(DisplayDetail(QString::number(radarr[(turns*4+1000)%10000])));
    if(!showed[4][2])
        ui->n42->setText(DisplayDetail(QString::number(radarr[(turns*4+1000)%10000+1])));
    if(!showed[5][1])
        ui->n51->setText(DisplayDetail(QString::number(radarr[(turns*5+1000)%10000])));
    if(!showed[5][2])
        ui->n52->setText(DisplayDetail(QString::number(radarr[(turns*5+1000)%10000+1])));
    turns+=1;
}

void Widget::on_c1_clicked()
{
    if(ui->right->value() < ui->left->value()){
        return;
    }
    int thisone,a,b,tl,tr;
    if(isfast){
        if(!showed[1][1]){
            showed[1][1]=true;
            showed[1][2]=true;
            //thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();

            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));

            a=thisone/10;
            b=thisone%10;
            ui->n11->setText(DisplayDetail(QString::number(a)));
            ui->n12->setText(DisplayDetail(QString::number(b)));
        }else if(!showed[1][2]){
            if(ui->n11->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[1][2]=true;
            a=ui->n11->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());
            // thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n12->setText(DisplayDetail(QString::number(b)));
        }
    }else{
        if(!showed[1][1]){
            showed[1][1]=true;

            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));

            a=thisone/10;
            b=thisone%10;
            ui->n11->setText(DisplayDetail(QString::number(a)));
        }else if(!showed[1][2]){
            //**************************************************************************************************************************************************************************************************************************************************
            if(ui->n11->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[1][2]=true;
            a=ui->n11->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());
            do{//ALLDIFFERENT
                int m = ra->generate();
                m=m<0?-m:m;
                thisone=(m%(tr - tl+1))+tl;
            }while(isbaned(thisone));
            b=thisone%10;
            ui->n12->setText(DisplayDetail(QString::number(b)));
            //**************************************************************************************************************************************************************************************************************************************************
        }
    }
}


void Widget::on_c2_clicked()
{

    if(ui->right->value() < ui->left->value()){
        return;
    }
    int thisone,a,b,tl,tr;
    if(isfast){
        if(!showed[2][1]){
            showed[2][1]=true;
            showed[2][2]=true;
            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));
            a=thisone/10;
            b=thisone%10;
            ui->n21->setText(DisplayDetail(QString::number(a)));
            ui->n22->setText(DisplayDetail(QString::number(b)));
        }else if(!showed[2][2]){
            if(ui->n21->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[2][2]=true;
            a=ui->n21->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n22->setText(DisplayDetail(QString::number(b)));
        }
    }else{
        if(!showed[2][1]){
            showed[2][1]=true;

            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));

            a=thisone/10;
            b=thisone%10;
            ui->n21->setText(DisplayDetail(QString::number(a)));
        }else if(!showed[2][2]){
            if(ui->n21->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[2][2]=true;
            a=ui->n21->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n22->setText(DisplayDetail(QString::number(b)));
        }
    }
}


void Widget::on_c3_clicked()
{

    if(ui->right->value() < ui->left->value()){
        return;
    }
    int thisone,a,b,tl,tr;
    if(isfast){
        if(!showed[3][1]){
            showed[3][1]=true;
            showed[3][2]=true;
            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));
            a=thisone/10;
            b=thisone%10;
            ui->n31->setText(DisplayDetail(QString::number(a)));
            ui->n32->setText(DisplayDetail(QString::number(b)));
        }else if(!showed[3][2]){
            if(ui->n31->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[3][2]=true;
            a=ui->n31->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n32->setText(DisplayDetail(QString::number(b)));
        }
    }else{
        if(!showed[3][1]){
            showed[3][1]=true;

            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));

            a=thisone/10;
            b=thisone%10;
            ui->n31->setText(DisplayDetail(QString::number(a)));
        }else if(!showed[3][2]){
            if(ui->n31->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[3][2]=true;
            a=ui->n31->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n32->setText(DisplayDetail(QString::number(b)));
        }
    }
}


void Widget::on_c4_clicked()
{

    if(ui->right->value() < ui->left->value()){
        return;
    }
    int thisone,a,b,tl,tr;
    if(isfast){
        if(!showed[4][1]){
            showed[4][1]=true;
            showed[4][2]=true;
            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));
            a=thisone/10;
            b=thisone%10;
            ui->n41->setText(DisplayDetail(QString::number(a)));
            ui->n42->setText(DisplayDetail(QString::number(b)));
        }else if(!showed[4][2]){
            if(ui->n41->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[4][2]=true;
            a=ui->n41->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n42->setText(DisplayDetail(QString::number(b)));
        }
    }else{
        if(!showed[4][1]){
            showed[4][1]=true;

            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));

            a=thisone/10;
            b=thisone%10;
            ui->n41->setText(DisplayDetail(QString::number(a)));
        }else if(!showed[4][2]){
            if(ui->n41->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[4][2]=true;
            a=ui->n41->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n42->setText(DisplayDetail(QString::number(b)));
        }
    }
}

void Widget::on_c5_clicked()
{
    if(ui->right->value() < ui->left->value()){
        return;
    }
    int thisone,a,b,tl,tr;
    if(isfast){
        if(!showed[5][1]){
            showed[5][1]=true;
            showed[5][2]=true;
            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));
            a=thisone/10;
            b=thisone%10;
            ui->n51->setText(DisplayDetail(QString::number(a)));
            ui->n52->setText(DisplayDetail(QString::number(b)));
        }else if(!showed[5][2]){
            if(ui->n51->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[5][2]=true;
            a=ui->n51->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n52->setText(DisplayDetail(QString::number(b)));
        }
    }else{
        if(!showed[5][1]){
            showed[5][1]=true;

            do{
                thisone=(qAbs(ra->generate()))%(ui->right->value() - ui->left->value()+1)+ui->left->value();
            }while(isbaned(thisone));

            a=thisone/10;
            b=thisone%10;
            ui->n51->setText(DisplayDetail(QString::number(a)));
        }else if(!showed[5][2]){
            if(ui->n51->text().mid(ws,1).toInt()*10>ui->right->value())
                return;
            showed[5][2]=true;
            a=ui->n51->text().mid(ws,1).toInt();
            tl=(a*10 > ui->left->value() ? a*10 : ui->left->value());
            tr=((a*10+9) < ui->right->value() ? (a*10+9) : ui->right->value());

            do{
                thisone=(qAbs(ra->generate()))%(tr - tl+1)+tl;
            }while(isbaned(thisone));

            b=thisone%10;
            ui->n52->setText(DisplayDetail(QString::number(b)));
        }
    }
}




void Widget::on_call_clicked()
{
    on_c1_clicked();
    on_c2_clicked();
    on_c3_clicked();
    on_c4_clicked();
    on_c5_clicked();

}


void Widget::on_fast_clicked()
{
    isfast=true;
}


void Widget::on_slow_clicked()
{
    isfast=false;
}



void Widget::on_redo_clicked()
{
    for(int i=1;i<=5;i+=1)
        for(int j=1;j<=2;j+=1)
            showed[i][j]=false;
}

