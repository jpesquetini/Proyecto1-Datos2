#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);

    mSocket = new QTcpSocket(this);
    mSocket->connectToHost("localhost", 2000);

    if(mSocket->waitForConnected(3000)){
        qDebug() << "Client Connected";
    }
    else{
        qDebug() << "Connection Failed";
    }

    connect(mSocket, &QAbstractSocket::connected, this, &Client::leer);
}

void Client::leer(){
    QByteArray buffer;
    buffer.resize(mSocket->bytesAvailable());
    mSocket->read(buffer.data(), buffer.size());
    qDebug() << QString(buffer.data());
}

Client::~Client()
{
    delete ui;
}

void Client::on_button11_clicked(){

    qDebug() << 11;
}

void Client::on_button12_clicked(){
    qDebug() << 12;
}


void Client::on_button13_clicked(){
    qDebug() << 13;
}


void Client::on_button14_clicked(){
    qDebug() << 14;
}


void Client::on_button15_clicked(){
    qDebug() << 15;
}


void Client::on_button16_clicked(){
    qDebug() << 16;
}


void Client::on_button21_clicked(){
    qDebug() << 21;
}


void Client::on_button22_clicked(){
    qDebug() << 22;
}


void Client::on_button23_clicked(){
    qDebug() << 23;
}


void Client::on_button24_clicked(){
    qDebug() << 24;
}


void Client::on_button25_clicked(){
    qDebug() << 25;
}


void Client::on_button26_clicked(){
    qDebug() << 26;
}


void Client::on_button31_clicked(){
    qDebug() << 31;
}


void Client::on_button32_clicked(){
    qDebug() << 32;
}


void Client::on_button33_clicked(){
    qDebug() << 33;
}


void Client::on_button34_clicked(){
    qDebug() << 34;
}


void Client::on_button35_clicked(){
    qDebug() << 35;
}


void Client::on_button36_clicked(){
    qDebug() << 36;
}


void Client::on_button41_clicked(){
    qDebug() << 41;
}


void Client::on_button42_clicked(){
    qDebug() << 42;
}


void Client::on_button43_clicked(){
    qDebug() << 43;
}


void Client::on_button44_clicked(){
    qDebug() << 44;
}


void Client::on_button45_clicked(){
    qDebug() << 45;
}


void Client::on_button46_clicked(){
    qDebug() << 46;
}



