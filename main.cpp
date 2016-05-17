#include "MainWindow.hpp"
#include <QApplication>

#include <boost/optional.hpp>

template<typename _T_>
using opt=boost::optional<_T_>;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    opt<int> data;


    MainWindow w;
    w.show();

    return a.exec();
}
