#ifndef KARTFORM_H
#define KARTFORM_H

#include <QWidget>

namespace Ui {
class KartForm;
}

class KartForm : public QWidget
{
    Q_OBJECT

public:
    explicit KartForm(QWidget *parent = nullptr);
    ~KartForm();
    void arkaYüzüCevir();
    void onYuzuCevir();
    void setResim (QString);


private slots:
    void on_pushButton_clicked();

private:
    int arka = 1;
    Ui::KartForm *ui;
    QString resimAdi;
};

#endif // KARTFORM_H
