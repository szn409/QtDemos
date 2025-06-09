#include "widget.h"
#include <QApplication>
#include <thread>
#include <future>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  std::promise<QImage> task;
  auto                 fu = task.get_future();
  std::thread          thd(
    [&task]()
    {
      QImage image;
      image.load(":/ln.png");

      QPainter p(&image);
      p.setPen(Qt::NoPen);
      p.setBrush(QBrush(QColor(0, 0, 255, 50)));
      p.drawRect(QRect(10, 10, 300, 300));

      task.set_value(image);
    });
  thd.join();

  widget w;
  w.set_image(fu.get());
  w.resize(800, 800);
  w.show();

  return app.exec();
}
