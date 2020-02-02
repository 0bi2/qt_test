#include <QApplication>
#include <QPushButton>
#include <QSlider>
#include <QProgressBar>

#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    Window window1;

    QProgressBar *bar = new QProgressBar(&window1);
    bar->setRange(0, 100);
    bar->setValue(0);
    bar->setGeometry(10, 10, 180, 30);


    QSlider *slider = new QSlider(&window1);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);


    window1.show();

//    QWidget window;
//    window.setFixedSize(400, 200);

//    QPushButton *butt = new QPushButton("Some text", &window);
//    butt->setGeometry(100, 80, 200, 30);

//    window.show();


//    QPushButton button ("Hello World");
//    button.setText("My coool text");
//    button.setToolTip("Amazing tootip");
//    QPushButton button2 ("Child butt", &button);

//    button.show();
    QObject::connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));

    return app.exec();
}
