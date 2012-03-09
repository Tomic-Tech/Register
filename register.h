#ifndef REGISTER_H
#define REGISTER_H

#include <openssl/rsa.h>
#include <openssl/err.h>
#include <QtGui/QDialog>
#include "ui_register.h"
#include "CyoEncode.h"

class Register : public QDialog
{
	Q_OBJECT

public:
	Register(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Register();
private slots:
	void on_make();
private:
	Ui::RegisterClass _ui;
    RSA *_rsa;
};

#endif // REGISTER_H
