//
// Created by Dario on 27/02/2019.
//

#ifndef ACTIVITY_TRACKER_TASK_H
#define ACTIVITY_TRACKER_TASK_H

#include <string>
#include <ctime>
#include <list>
#include <QDateTime>
#include "Subject.h"


class Task : public Subject {
public:
    explicit Task(std::string name,QDateTime start,QDateTime end);
    ~Task();
    void subscribe(Observer* o) override;
    void unsubscribe(Observer* o) override;
    void notify() override;

    std::string getName();
    void setName(const std::string name);
    QDateTime getTaskStart();
    QDateTime getTaskEnd();
protected:
    std::string name;
    QDateTime taskStart;
    QDateTime taskEnd;
private:
    std::list<Observer*> observers;
};


#endif //ACTIVITY_TRACKER_TASK_H
