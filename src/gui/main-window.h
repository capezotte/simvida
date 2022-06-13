#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QThread>
#include "ui_main-window.h"
#include "opcoes.h"
#include "ajuda.h"
#include "info.h"
#include "stat.h"
#include "mundoqt.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QMainWindow *parent = 0, Qt::WindowFlags f = QFlag(0));


	inline void abrirMundo(FILE *arq) { widget->abrirMundo(arq); }

	inline static MainWindow* getInstance() { return instance; }

public slots:

	void startStop();

private:
	static MainWindow *instance;

	/* timers */
	QTimer *timerP;
	QTimer *timerA;
	QTimer *timerS;

	/* formularios */
	Opcoes *opcoes;
	Ajuda *ajuda;
	Info *info;
	Stat *stat;
};

#endif
