#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>

namespace Ui {
    class Welcome;
    }

class Welcome : public QMainWindow {
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void activar();

private:
    Ui::Welcome *ui;
    int contador;
    };

#endif // WELCOME_H
