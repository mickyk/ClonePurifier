#include "clonepurifier.h"
#include "ui_clonepurifier.h"

ClonePurifier::ClonePurifier(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClonePurifier)
{
    ui->setupUi(this);
}

ClonePurifier::~ClonePurifier()
{
    delete ui;
}
