#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = nullptr);
    ~Tilitapahtumat();

private slots:
    void on_tClose_clicked();

    void on_tTextTilitapahtumat_textChanged();

private:
    Ui::Tilitapahtumat *ui;
};

#endif // TILITAPAHTUMAT_H
