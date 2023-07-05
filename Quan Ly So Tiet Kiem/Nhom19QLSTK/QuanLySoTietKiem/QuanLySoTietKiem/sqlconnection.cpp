#include "sqlconnection.h"
#include "Header.h"
SqlConnection::SqlConnection()
{
}

void SqlConnection::Sqlclose()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

bool SqlConnection::SqlOpen()
{

    if(!db.open())
        return false;
    else return true;

}
