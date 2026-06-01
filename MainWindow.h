#include <QMainWindow>

class QTextEdit;
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

    QTextEdit* m_inputVideo = nullptr;
    QTextEdit* m_outputVideo = nullptr;
    QTextEdit* m_logOutput = nullptr;

    QTextEdit* m_packedInfo = nullptr;
    QTextEdit* m_videoFormat = nullptr;
    QTextEdit* m_videoCodec = nullptr;
    QTextEdit* m_videoBitrate = nullptr;
    QTextEdit* m_videoResolution = nullptr;
    QTextEdit* m_audioCodec = nullptr;
};