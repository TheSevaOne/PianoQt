#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>



namespace Ui {
class NewWindow;
}

class NewWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit NewWindow(QWidget *parent = 0);
    ~NewWindow();
    
private:
    Ui::NewWindow *ui;
};

#endif // NEWWINDOW_H
