//
// Created by Marco on 30/06/2017.
//

#ifndef SLIDESHOW_SLIDESHOWTIMER_H
#define SLIDESHOW_SLIDESHOWTIMER_H

#include <QtCore/QTimer>

struct SlideshowTimer {
    explicit SlideshowTimer(int t=2000) : timerInterval(t) {}

    QTimer timer;
    int timerInterval; // default timer interval (milliseconds)
};

#endif //SLIDESHOW_SLIDESHOWTIMER_H
