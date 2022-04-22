#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

    void readSocket();

private slots:

    void on_button11_clicked();

    void on_button12_clicked();

    void on_button13_clicked();

    void on_button14_clicked();

    void on_button15_clicked();

    void on_button16_clicked();

    void on_button21_clicked();

    void on_button22_clicked();

    void on_button23_clicked();

    void on_button24_clicked();

    void on_button25_clicked();

    void on_button26_clicked();

    void on_button31_clicked();

    void on_button32_clicked();

    void on_button33_clicked();

    void on_button34_clicked();

    void on_button35_clicked();

    void on_button36_clicked();

    void on_button41_clicked();

    void on_button42_clicked();

    void on_button43_clicked();

    void on_button44_clicked();

    void on_button45_clicked();

    void on_button46_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *mSocket;
};
#endif // CLIENT_H
