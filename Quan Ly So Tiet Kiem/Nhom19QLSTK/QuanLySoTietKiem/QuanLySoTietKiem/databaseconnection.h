#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include <QSqlDatabase>

class DatabaseConnection
{
public:
    DatabaseConnection(const QString &mserver,const QString mdriver,const QString muser,const QString mpassword,const QString mdatabasename, bool trustedconnection = true);
    bool openDatabase(QString *error = nullptr);
private:
    QSqlDatabase mDatabase;
    QString mServer, mDriver, mUser, mPassword, mDatabaseName;
    bool mTrustedConnection;
};

#endif // DATABASECONNECTION_H
