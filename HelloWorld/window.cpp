#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1000, 500);

    m_button = new QPushButton("QUit", this);
    m_button->setGeometry(400, 10, 200, 80);

    connect(m_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
}
