#ifndef CLIENTE_H
#define CLIENTE_H

#include <QMainWindow>

#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class cliente; }
QT_END_NAMESPACE

class cliente : public QMainWindow
{
    Q_OBJECT

public:
    cliente(QWidget *parent = nullptr);
    ~cliente();

private slots:
private:
    Ui::cliente *ui;
};
#endif // CLIENTE_H
