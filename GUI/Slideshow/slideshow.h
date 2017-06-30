#ifndef SLIDESHOWCONTAINER_H
#define SLIDESHOWCONTAINER_H

#include <QWidget>
#include <QGraphicsScene>
#include <QPointer>
#include "Playlist.h"
#include "SlideshowTimer.h"

namespace Ui {
class Slideshow;
}

class Slideshow : public QWidget
{
    Q_OBJECT

public:
    explicit Slideshow(QWidget *parent = 0);
    ~Slideshow();

    void showEvent(QShowEvent *event); // automatically called when instantiated Slideshow shows
    void resizeEvent(QResizeEvent *event); // automatically called when instantiated Slideshow gets resized

private slots:
    void browse(); // browse disk to select images folder
    void setPlaylist(const QString &text); // prepare playlist to be shown

private:
    void displayPlaylist(); // start the slideshow
    Ui::Slideshow *ui;
    QPointer<QGraphicsScene> scene; // GraphicsScene to display images (smart pointer)
    Playlist playlist; // structure containing images and useful information
    SlideshowTimer slideshowTimer; // structure containing timer and its properties
};

#endif // SLIDESHOWCONTAINER_H
