#include <QMainWindow>

class QLineEdit;
class QPushButton;
class QLabel;
class QVBoxLayout;
class QGridLayout;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void createControls();

private:
    QVBoxLayout* m_layout = nullptr;
    QGridLayout* m_subLayout = nullptr;

    QLineEdit* m_inputVideo = nullptr;
    QLineEdit* m_outputVideo = nullptr;
    QLineEdit* m_logOutput = nullptr;

    QLineEdit* m_packedInfo = nullptr;
    QLineEdit* m_videoFormat = nullptr;
    QLineEdit* m_videoCodec = nullptr;
    QLineEdit* m_videoBitrate = nullptr;
    QLineEdit* m_videoResolution = nullptr;
    QLineEdit* m_audioCodec = nullptr;
};