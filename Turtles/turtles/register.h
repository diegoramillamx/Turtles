#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "investigador.h"

namespace Ui {
class Register;
    }

class Register : public QMainWindow {
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_psbAgregar_clicked();
    void on_lneUsuario_textChanged(const QString &arg1);
    void on_lneNombre_returnPressed();
    void on_lnePassword_2_returnPressed();
    void on_lneApp_returnPressed();
    void on_lneApm_returnPressed();
    void on_lnePassword_returnPressed();
    void on_psbAgregar_pressed();
    void on_lneUsuario_returnPressed();

private:
    Ui::Register *ui;
    QSqlDatabase mDataBase;
    bool password;

    void loadComboBoxFromDatabase();
    void agregarBaseDatos(const Investigador&);
    void limpiarTodo();
    bool validacion(const Investigador&);

    };

#endif // REGISTER_H
