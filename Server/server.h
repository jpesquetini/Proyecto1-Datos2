#ifndef SERVER_H
#define SERVER_H
#include <QMainWindow>
#include <Qt>

#include <QTcpServer>
#include <QTcpSocket>

#include <vector>
#include <string>
using namespace std;

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

    void createMatrix();

    void conexion_nueva();

    void leer_socket();

private:
    Ui::Server *ui;
    QTcpServer *mServer;
    QTcpSocket *mSocket;
};
#endif // SERVER_H
