#ifndef REPORTETORTUGA_H
#define REPORTETORTUGA_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
    class ReporteTortuga;
    }

class ReporteTortuga : public QMainWindow
{
    Q_OBJECT

    public:
        explicit ReporteTortuga(QWidget *parent = nullptr);
        ~ReporteTortuga();

    private slots:
        void on_lneIdTortuga_returnPressed();

        void on_pbRegister_clicked();

        void on_pbActive_clicked();

private:
        Ui::ReporteTortuga *ui;
        QSqlDatabase turtlesDatabase;

        void getDataFromTurtles(const int&);
        int getReportId();
        void insertReport();

        void active();

        void clearAll();
    };

#endif // REPORTETORTUGA_H
