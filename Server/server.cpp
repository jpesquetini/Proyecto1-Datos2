#include "server.h"
#include "./ui_server.h"
#include "card.h"

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

Server::Server(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);

    mServer = new QTcpServer(this);
    mServer->listen(QHostAddress::Any, 2000);
    mSocket = new QTcpSocket(this);

    connect(mServer, &QTcpServer::newConnection, this, &Server::conexion_nueva);
}

void Server::conexion_nueva(){

    mSocket = mServer->nextPendingConnection();

    connect(mSocket, &QAbstractSocket::connected, this, &Server::leer_socket);

    qDebug() << "CONECTADOS!!!!!!!";
}

void Server::leer_socket(){
    qDebug() << "SSSSIIIIIUUUUU";
    QByteArray buffer;
    buffer.resize(mSocket->bytesAvailable());
    mSocket->read(buffer.data(), buffer.size());
    qDebug() << QString(buffer.data());
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

void Server::createMatrix(){
    vector<string> list = {"beer", "beer", "bread", "bread", "burger", "burger", "cake", "cake", "chicken", "chicken",
                           "coffe", "coffee", "hotdog", "hotdog", "pizza", "pizza", "soup", "soup", "steak", "steak",
                           "sushi", "sushi", "tea", "tea"};
    random_shuffle(list.begin(), list.end());

    Card *matrix[4][6];
    int i = 0;
    int j = 0;
    int num = 0;

    while(i < 4){
        while(j < 6){
            matrix[i][j] = new Card(num, list[num]);
            num++;
            j++;
        }
        j = 0;
        i++;
    }
}




