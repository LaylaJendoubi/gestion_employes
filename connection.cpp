#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_cpp2A39");//inserer le nom de la source de données
    db.setUserName("system");//inserer nom de l'utilisateur
    db.setPassword("laylayou10");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;





    return  test;
}
