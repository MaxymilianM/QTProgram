#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include <QString>
#include <QtWidgets/QApplication>
#include <QMessageBox>


class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplication1Class ui;
private slots:
	void ClickButton();
};
