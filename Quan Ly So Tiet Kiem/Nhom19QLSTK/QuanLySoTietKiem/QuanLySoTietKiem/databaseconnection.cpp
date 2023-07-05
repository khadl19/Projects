#include "databaseconnection.h"
#include <QSqlQuery>
#include <QSqlError>

DatabaseConnection::DatabaseConnection(const QString &mserver,const QString mdriver,const QString muser,const QString mpassword,const QString mdatabasename, bool trustedconnection)
{
    mDatabase = QSqlDatabase::addDatabase("Q0DBC");
    mServer = mserver;
    mDriver = mdriver;
    mUser = muser;
    mPassword = mpassword;
    mDatabaseName = mdatabasename;
    mTrustedConnection = trustedconnection;
}

bool DatabaseConnection::openDatabase(QString *error)
{
    mDatabase.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-ITFF5LI\\DIEN;DATABASE=QuanLySoTietKiem;UID=user;PWD=userPwd;WSID=.;Trusted_connection=yes");
    if(!mDatabase.open())
    {
        if(error != nullptr)
        {
            *error = mDatabase.lastError().text();
        }
        return false;
    }
    return true;
}
