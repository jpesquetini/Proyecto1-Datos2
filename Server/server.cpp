#include "server.h"
#include "./ui_server.h"

Server::Server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);
}

Server::~Server(){
    delete ui;
}

void Server::on_player1GetName_returnPressed(){
    QString player1Name = ui->player1GetName->text();
    ui->player1Name->setText(player1Name + "'s" + " Score:");
}

void Server::on_player2GetName_returnPressed(){
    QString player2Name = ui->player2GetName->text();
    ui->player2Name->setText(player2Name + "'s" + " Score:");
}

