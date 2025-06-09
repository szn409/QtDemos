# README

## basic

* 使用的 QT 版本：5.14.2
* 测试平台：Win10



## demos

### draw_QImage_in_thread

* 测试功能：在非 UI 线程，对 QImage 进行绘制，并将此 QImage 传递到 UI 线程进行使用
* 要点：
  * 实例化 QPainter 前，必须先实例化 QApplication（或 QGuiApplication）
  * 可以在非 UI 线程，使用 QPainter 绘制 QImage