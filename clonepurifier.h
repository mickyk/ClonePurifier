#ifndef CLONEPURIFIER_H
#define CLONEPURIFIER_H

#include <QMainWindow>

namespace Ui {
    class ClonePurifier;
}

class ClonePurifier : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClonePurifier(QWidget *parent = 0);
    ~ClonePurifier();

private:
    Ui::ClonePurifier *ui;
};

#endif // CLONEPURIFIER_H
