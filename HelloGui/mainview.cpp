#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    connect( ui->w_exitBtn, SIGNAL(clicked(bool)) , SLOT(close()) ); // Exit button

}

MainView::~MainView()
{
    delete ui;
}
