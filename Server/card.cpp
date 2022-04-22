#include "card.h"

Card::Card(int listNum, string icon){

    if (icon == "beer"){
        QFile* image1 = new QFile("beer.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 1;
    }
    if (icon == "bread"){
        QFile* image1 = new QFile("bread.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 1;
    }
    if (icon == "buger"){
        QFile* image1 = new QFile("burger.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 2;
    }
    if (icon == "cake"){
        QFile* image1 = new QFile("cake.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 2;
    }
    if (icon == "chicken"){
        QFile* image1 = new QFile("chiken.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 3;
    }
    if (icon == "coffee"){
        QFile* image1 = new QFile("coffee.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 3;
    }
    if (icon == "hotdog"){
        QFile* image1 = new QFile("hotdog.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 4;
    }
    if (icon == "pizza"){
        QFile* image1 = new QFile("pizza.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 4;
    }
    if (icon == "soup"){
        QFile* image1 = new QFile("soup.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 5;
    }
    if (icon == "steak"){
        QFile* image1 = new QFile("steak.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 5;
    }
    if (icon == "sushi"){
        QFile* image1 = new QFile("sushi.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 6;
    }
    if (icon == "tea"){
        QFile* image1 = new QFile("tea.png");
        image1->open(QIODevice::ReadWrite);
        QByteArray imageBA = image1->readAll();
        image1->close();
        delete image1;

        this->image = imageBA.data();
        this->pageNum = 6;
    }

    if (listNum == 0){
        this->ID = 11;
    }
    if (listNum == 1){
        this->ID = 12;
    }
    if (listNum == 2){
        this->ID = 13;
    }
    if (listNum == 3){
        this->ID = 14;
    }
    if (listNum == 4){
        this->ID = 15;
    }
    if (listNum == 5){
        this->ID = 16;
    }
    if (listNum == 6){
        this->ID = 21;
    }
    if (listNum == 7){
        this->ID = 22;
    }
    if (listNum == 8){
        this->ID = 23;
    }
    if (listNum == 9){
        this->ID = 24;
    }
    if (listNum == 10){
        this->ID = 25;
    }
    if (listNum == 11){
        this->ID = 26;
    }
    if (listNum == 12){
        this->ID = 31;
    }
    if (listNum == 13){
        this->ID = 32;
    }
    if (listNum == 14){
        this->ID = 33;
    }
    if (listNum == 15){
        this->ID = 34;
    }
    if (listNum == 16){
        this->ID = 35;
    }
    if (listNum == 17){
        this->ID = 36;
    }
    if (listNum == 18){
        this->ID = 41;
    }
    if (listNum == 19){
        this->ID = 42;
    }
    if (listNum == 20){
        this->ID = 43;
    }
    if (listNum == 21){
        this->ID = 44;
    }
    if (listNum == 22){
        this->ID = 45;
    }
    if (listNum == 23){
        this->ID = 46;
    }
}

char* Card::getImage(){
    return image;
}

int Card::getPageNum(){
    return pageNum;
}

int Card::getID(){
    return ID;
}
