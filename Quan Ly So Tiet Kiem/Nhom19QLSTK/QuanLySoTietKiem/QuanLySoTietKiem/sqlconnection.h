#ifndef SQLCONNECTION_H
#define SQLCONNECTION_H
#include <QtSql>
#include <QSqlDatabase>
class SqlConnection
{
public:
    SqlConnection();
    void Sqlclose();
    bool SqlOpen();
    QSqlDatabase db;
private:
};

#endif // SQLCONNECTION_H
