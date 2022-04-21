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

private:
    Ui::Servidor *ui;
};
#endif // SERVIDOR_H
