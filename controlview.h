#ifndef CONTROLVIEW_H
#define CONTROLVIEW_H

#include <QMainWindow>

namespace Ui {
class ControlView;
}

class ControlView : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ControlView(QWidget *parent = 0);
    ~ControlView();
    
private:
    Ui::ControlView *ui;
};

#endif // CONTROLVIEW_H
