#include "kartform.h"
#include "ui_kartform.h"

KartForm::KartForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KartForm)
{
    ui->setupUi(this);
}

KartForm::~KartForm()
{
    delete ui;
}

void KartForm::on_pushButton_clicked()
{
    if(arka == 1){
        onYuzuCevir();
    } else{
        arkaYüzüCevir();
    }
}

void KartForm::onYuzuCevir()
{
    ui->pushButtonKart->setStyleSheet(QString::fromUtf8("#pushButton {\n"
                                                        "background-color:transparent;\n"
                                                        "border-image:url(:newton.png);\n"));
    arka = 0;
}

void KartForm::arkaYüzüCevir()
{
    ui->pushButtonKart->setStyleSheet(QString::fromUtf8("#pushButton {\n"
                                                "background-color:transparent;\n"
                                                "border-image:url(:blackButton.png);\n"
                                                "background:none;\n"
                                                "background-repeat:none;\n"
                                                "}\n"
                                                ""));
    arka = 1;
}
void KartForm::setResim(QString resimAdi)
{
    this->resimAdi = resimAdi;
}
