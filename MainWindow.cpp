#include "MainWindow.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Video Converter");

    createControls();
    resize(800, 600);
}

MainWindow::~MainWindow()
{
}

void MainWindow::createControls()
{
    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    m_layout = new QVBoxLayout(centralWidget);

    QGridLayout* fileLayout = new QGridLayout();
    fileLayout->setSizeConstraint(QLayout::SetFixedSize);
    QLabel* inputLabel = new QLabel("Input Video:", this);
    m_inputVideo = new QLineEdit(this);
    //m_inputVideo->setFixedHeight(30);
    //m_inputVideo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    fileLayout->addWidget(inputLabel, 0, 0);
    fileLayout->addWidget(m_inputVideo, 0, 1);

    QLabel* outputLabel = new QLabel("Output Video:", this);
    m_outputVideo = new QLineEdit(this);
    //m_outputVideo->setFixedHeight(30);
    //m_outputVideo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    fileLayout->addWidget(outputLabel, 1, 0);
    fileLayout->addWidget(m_outputVideo, 1, 1);

    QPushButton* browseInputButton = new QPushButton("Browse", this);
    fileLayout->addWidget(browseInputButton, 0, 2);
    QPushButton* browseOutputButton = new QPushButton("Browse", this);
    fileLayout->addWidget(browseOutputButton, 1, 2);

    QPushButton* convertButton = new QPushButton("Convert", this);
    convertButton->setFixedWidth(200);
    convertButton->setFixedHeight(30);
    fileLayout->addWidget(convertButton, 2, 0, 1, 3);
    fileLayout->setAlignment(convertButton, Qt::AlignCenter); // Center the convert button
    m_layout->addLayout(fileLayout);

    QGridLayout* infoLayout = new QGridLayout();
    infoLayout->setSizeConstraint(QLayout::SetFixedSize);
    QLabel* packedInfoLabel = new QLabel("Packed Info:", this);
    m_packedInfo = new QLineEdit(this);
    //m_packedInfo->setFixedHeight(30);
    infoLayout->addWidget(packedInfoLabel, 0, 0);
    infoLayout->addWidget(m_packedInfo, 0, 1);
    QLabel* videoFormatLabel = new QLabel("Video Format:", this);
    m_videoFormat = new QLineEdit(this);
    //m_videoFormat->setFixedHeight(30);
    infoLayout->addWidget(videoFormatLabel, 0, 2);
    infoLayout->addWidget(m_videoFormat, 0, 3);
    QLabel* videoCodecLabel = new QLabel("Video Codec:", this);
    m_videoCodec = new QLineEdit(this);
    //m_videoCodec->setFixedHeight(30);
    infoLayout->addWidget(videoCodecLabel, 1, 0);
    infoLayout->addWidget(m_videoCodec, 1, 1);
    QLabel* videoBitrateLabel = new QLabel("Video Bitrate:", this);
    m_videoBitrate = new QLineEdit(this);
    //m_videoBitrate->setFixedHeight(30);
    infoLayout->addWidget(videoBitrateLabel, 1, 2);
    infoLayout->addWidget(m_videoBitrate, 1, 3);
    QLabel* videoResolutionLabel = new QLabel("Video Resolution:", this);
    m_videoResolution = new QLineEdit(this);
    //m_videoResolution->setFixedHeight(30);
    infoLayout->addWidget(videoResolutionLabel, 2, 0);
    infoLayout->addWidget(m_videoResolution, 2, 1);
    QLabel* audioCodecLabel = new QLabel("Audio Codec:", this);
    m_audioCodec = new QLineEdit(this);
    //m_audioCodec->setFixedHeight(30);
    infoLayout->addWidget(audioCodecLabel, 2, 2);
    infoLayout->addWidget(m_audioCodec, 2, 3);

    m_layout->addLayout(infoLayout);
    m_layout->addStretch();
}
