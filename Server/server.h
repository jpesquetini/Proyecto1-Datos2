#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Server; }
QT_END_NAMESPACE

class Server : public QMainWindow
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();

private slots:
    void on_player1GetName_returnPressed();

    void on_player2GetName_returnPressed();

private:
    Ui::Server *ui;
};
#endif // SERVER_H
