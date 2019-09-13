#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <register.h>
#include <QSqlDatabase>

namespace Ui {
    class MainWindow;
    }

class QSqlTableModel;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setVisualEfects();

private slots:
    void on_psbEntrar_clicked();
    void on_psbRegistrarse_clicked();

    void on_ledPassword_returnPressed();

    void on_ledUsuario_returnPressed();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *mModel;
    QSqlDatabase firstDataBase;
    QSqlDatabase secondDatabase;
    void addDatabases();
    void checkLogin();
    void isConnected();
    void setBackground();
    };

#endif // MAINWINDOW_H
