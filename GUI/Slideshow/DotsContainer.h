//
// Container for slideshow dots indicator.
//

#ifndef SLIDESHOWWINDOWS_DOTSCONTAINER_H
#define SLIDESHOWWINDOWS_DOTSCONTAINER_H


#include <QtWidgets>
#include "Slideshow.h"

class DotsContainer : public QWidget {
public:
    explicit DotsContainer(QWidget* parent=0);
    ~DotsContainer();

    void setDots(const Slideshow* slideshow, const int &imgNumber);

private:
    std::vector<std::shared_ptr<QWidget>> dots;
};


#endif //SLIDESHOWWINDOWS_DOTSCONTAINER_H