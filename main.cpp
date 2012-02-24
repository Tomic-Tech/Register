#include "register.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Register w;
	w.show();
	return a.exec();
}
