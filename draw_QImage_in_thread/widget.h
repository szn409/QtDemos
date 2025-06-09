#pragma once
#include <QWidget>
#include <QPainter>

class widget : public QWidget
{
  Q_OBJECT

public:
  void set_image(QImage image)
  {
    m_image = image;
  }

private:
  void paintEvent(QPaintEvent*)
  {
    QPainter painter(this);

    if (m_image.isNull())
    {
      return;
    }

    painter.drawImage(QPoint(100, 100), m_image);
  }

private:
  QImage m_image;
};