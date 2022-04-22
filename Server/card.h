#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;
#include <QFile>

class Card
{
public:
    Card(int listNum, string icon);

    char* getImage();

    int getPageNum();

    int getID();



private:
    char *image;
    int pageNum;
    int ID;

};

#endif // CARD_H
