#ifndef ACCOUNT_SETUP_H
#define ACCOUNT_SETUP_H

#include <QtUiTools>

static QWidget * loadUiFile(QWidget * parent) {
	QFile file(":setupWizard1.ui");
	file.open(QIODevice::ReadOnly);

	QUiLoader loader;
	return loader.load(&file, parent);
}

class AccountSetup {
	Q_OBJECT
	public:

	private slots:
};
#endif // ACCOUNT_SETUP_H
