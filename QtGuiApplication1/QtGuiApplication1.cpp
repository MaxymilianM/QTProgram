#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(ClickButton()));
}
void QtGuiApplication1::ClickButton()
{
	QString strFromSearch( ui.lineEdit->text() );
	QString strToSearch( ui.textEdit->toPlainText() );
	QStringList separateStr = strToSearch.split('\n');
	QString maxStr;

	// searching max string
	foreach(QString tmp, separateStr) {
		if (strFromSearch.contains(tmp)) {
			if (tmp.length() > maxStr.length())
				maxStr = tmp;
		}
	}

	if (maxStr.isEmpty())
		maxStr = "Can't find any of the search strings";
	// add colors to highlights text
	QString bluePart = QString("<span style=\" color:#0000FF; \">%1</span>").arg(maxStr);
	QString greenPart = QString("<span style=\" color:#00FF00; \">%1</span>").arg(strFromSearch);

	ui.textBrowser->append("In string: " + greenPart + " it is: " + bluePart);
	QMessageBox::information(this, "Result", bluePart);
}