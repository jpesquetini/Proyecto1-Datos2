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
        qDebug() << QString("Client Connected");
    }
    else{
        qDebug() << QString("Connection Failed");
    }
    connect(mSocket, SIGNAL(readyread()), this, SLOT(readSocket()));
}

Client::~Client()
{
    delete ui;
}

void Client::readSocket(){
    QByteArray buffer;
    buffer.resize(mSocket->bytesAvailable());
    mSocket->read(buffer.data(), buffer.size());
    qDebug() << QString(buffer);
}

void Client::on_button11_clicked(){

    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 11;
}

void Client::on_button12_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 12;
}


void Client::on_button13_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 13;
}


void Client::on_button14_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 14;
}


void Client::on_button15_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 15;
}


void Client::on_button16_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 16;
}


void Client::on_button21_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 21;
}


void Client::on_button22_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 22;
}


void Client::on_button23_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 23;
}


void Client::on_button24_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 24;
}


void Client::on_button25_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 25;
}


void Client::on_button26_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 26;
}


void Client::on_button31_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 31;
}


void Client::on_button32_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 32;
}


void Client::on_button33_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 33;
}


void Client::on_button34_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 34;
}


void Client::on_button35_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 35;
}


void Client::on_button36_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 36;
}


void Client::on_button41_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 41;
}


void Client::on_button42_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 42;
}


void Client::on_button43_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 43;
}


void Client::on_button44_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 44;
}


void Client::on_button45_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 45;
}


void Client::on_button46_clicked(){
    mSocket->write(ui->button11->text().toLatin1(), ui->button11->text().size());
    qDebug() << 46;
}

