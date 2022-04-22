#include "servidor.h"
#include "./ui_servidor.h"

Servidor::Servidor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Servidor)
{
    ui->setupUi(this);
}

Servidor::~Servidor(){
    delete ui;
}

void Servidor::on_player1GetName_returnPressed(){
    QString player1Name = ui->player1GetName->text();
    ui->player1Name->setText(player1Name + "'s" + " Score:");
}


void Servidor::on_player2GetName_returnPressed(){
    QString player2Name = ui->player2GetName->text();
    ui->player2Name->setText(player2Name + "'s" + " Score:");
}

