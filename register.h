#ifndef REGISTER_H
#define REGISTER_H

#include <QtGui/QDialog>
#include <vector>
#include <string>
#include "ui_register.h"
#include "rsa.h"
#include "osrng.h"
#include "base64.h"

class Register : public QDialog
{
	Q_OBJECT

public:
	Register(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Register();
private slots:
	void on_generate();
private:
	Ui::RegisterClass ui;
	CryptoPP::InvertibleRSAFunction _params;
};

#endif // REGISTER_H
