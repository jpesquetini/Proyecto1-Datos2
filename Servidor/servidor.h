#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Servidor; }
QT_END_NAMESPACE

class Servidor : public QMainWindow
{
    Q_OBJECT

public:
    Servidor(QWidget *parent = nullptr);
    ~Servidor();

private slots:

    void on_player1GetName_returnPressed();

    void on_player2GetName_returnPressed();

private:
    Ui::Servidor *ui;
};
#endif // SERVIDOR_H
