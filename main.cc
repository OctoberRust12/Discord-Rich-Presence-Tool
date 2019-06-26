#include "mainwin.hh"

#include <QtWidgets/QApplication>

auto main(int argc, char *argv[]) -> int
{
	QApplication application(argc, argv);

	// Create the main window.
	{
		MainWin window;

		window.show();
	}

	return application.exec();
}
