#include <QCoreApplication>
#include <QPushButton>
#include <QPixmap>

/* class ImageButton : public QPushButton
{
    Q_OBJECT;
public:
    ImageButton() = default;
    ImageButton (QWidget* parent);
    void PaintEvent (QPaintEvent *e) ;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
public slots:
    void setGreen();
    void setYellow();
    void setRed();
private:
    QPixmap mCurrentImageButton();
    QPixmap mGreenImageButton();
    QPixmap mYellowImageButton();
    QPixmap mRedImageButton();
};

ImageButton::ImageButton (QWidget *parent)
{
    setParent(parent);
    setToolTip ("SkillBox_Task_36_4_1");
    setSizePolicy (QSizePolicy::Fixed,QSizePolicy::Fixed);
    QPixmap mGreenImageButton ("green.png");
    QPixmap mYellowImageButton ("yallow.png");
    QPixmap mRedImageButton ("red.png");
    QPixmap mCurrentImageButton = mGreenImageButton;
    setGeometry(mCurrentImageButton.rect());
}
*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
