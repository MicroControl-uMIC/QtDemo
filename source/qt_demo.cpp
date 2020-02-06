#include <QtCore/QDebug>
#include <QtCore/QThread>
#include <QtCore/QString>



void hello(QString name)
{
	qDebug() << "Hello" << name << "from" << QThread::currentThread();
}

int main(int argc, char **argv)
{
   Q_UNUSED(argc);
   Q_UNUSED(argv);

   QString clVersionT;

   printf("Compiled with Qt Version %s\n", QT_VERSION_STR);
   hello("uMIC.200");


}


