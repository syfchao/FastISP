/********************************************************************************
** Form generated from reading UI file 'fastisp.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FASTISP_H
#define UI_FASTISP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FastISPClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_5;
    QToolButton *toolButton_path;
    QTextEdit *textEdit_path;
    QWidget *widget_4;
    QCheckBox *checkBox_reloadfile;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_comportname;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_baudrate;
    QWidget *widget_9;
    QGridLayout *gridLayout_6;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_readicinf;
    QPushButton *pushButton_clearic;
    QPushButton *pushButton_readflash;
    QPushButton *pushButton_refreshcom;
    QPushButton *pushButton_start;
    QWidget *widget_7;
    QLabel *label_3;
    QWidget *widget_10;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit_output;
    QWidget *widgetProcess;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *ProcesshorizontalLayout;
    QLabel *label_4;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *FastISPClass)
    {
        if (FastISPClass->objectName().isEmpty())
            FastISPClass->setObjectName(QStringLiteral("FastISPClass"));
        FastISPClass->resize(704, 504);
        FastISPClass->setMinimumSize(QSize(0, 492));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FastISP/image/IC.png"), QSize(), QIcon::Normal, QIcon::Off);
        FastISPClass->setWindowIcon(icon);
        centralWidget = new QWidget(FastISPClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, -1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 60));
        groupBox->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 0, 0, 0);
        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(411, 0));
        widget_5->setMaximumSize(QSize(411, 16777215));
        toolButton_path = new QToolButton(widget_5);
        toolButton_path->setObjectName(QStringLiteral("toolButton_path"));
        toolButton_path->setGeometry(QRect(310, 15, 37, 18));
        toolButton_path->setMinimumSize(QSize(37, 18));
        toolButton_path->setMaximumSize(QSize(37, 18));
        textEdit_path = new QTextEdit(widget_5);
        textEdit_path->setObjectName(QStringLiteral("textEdit_path"));
        textEdit_path->setGeometry(QRect(4, 10, 301, 24));
        textEdit_path->setMinimumSize(QSize(301, 0));
        textEdit_path->setMaximumSize(QSize(301, 16777215));
        textEdit_path->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_path->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_path->setReadOnly(true);

        horizontalLayout_2->addWidget(widget_5);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        checkBox_reloadfile = new QCheckBox(widget_4);
        checkBox_reloadfile->setObjectName(QStringLiteral("checkBox_reloadfile"));
        checkBox_reloadfile->setGeometry(QRect(0, 18, 107, 16));

        horizontalLayout_2->addWidget(widget_4);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(350, 0));
        widget_2->setMaximumSize(QSize(350, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(332, 49));
        groupBox_3->setMaximumSize(QSize(332, 49));
        comboBox_comportname = new QComboBox(groupBox_3);
        comboBox_comportname->setObjectName(QStringLiteral("comboBox_comportname"));
        comboBox_comportname->setGeometry(QRect(46, 18, 101, 22));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 21, 31, 16));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(156, 21, 41, 16));
        comboBox_baudrate = new QComboBox(groupBox_3);
        comboBox_baudrate->setObjectName(QStringLiteral("comboBox_baudrate"));
        comboBox_baudrate->setGeometry(QRect(200, 18, 121, 22));
        label->raise();
        label_2->raise();
        comboBox_baudrate->raise();
        comboBox_comportname->raise();

        verticalLayout_3->addWidget(groupBox_3);

        widget_9 = new QWidget(widget_2);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(332, 99));
        widget_9->setMaximumSize(QSize(332, 99));
        gridLayout_6 = new QGridLayout(widget_9);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 5, 0, 0);
        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_readicinf = new QPushButton(widget_8);
        pushButton_readicinf->setObjectName(QStringLiteral("pushButton_readicinf"));

        gridLayout_4->addWidget(pushButton_readicinf, 1, 0, 1, 1);

        pushButton_clearic = new QPushButton(widget_8);
        pushButton_clearic->setObjectName(QStringLiteral("pushButton_clearic"));

        gridLayout_4->addWidget(pushButton_clearic, 1, 1, 1, 1);

        pushButton_readflash = new QPushButton(widget_8);
        pushButton_readflash->setObjectName(QStringLiteral("pushButton_readflash"));

        gridLayout_4->addWidget(pushButton_readflash, 1, 2, 1, 1);

        pushButton_refreshcom = new QPushButton(widget_8);
        pushButton_refreshcom->setObjectName(QStringLiteral("pushButton_refreshcom"));
        pushButton_refreshcom->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(pushButton_refreshcom, 0, 2, 1, 1);

        pushButton_start = new QPushButton(widget_8);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(pushButton_start, 0, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_8, 0, 0, 1, 1);


        verticalLayout_3->addWidget(widget_9);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(0, 248));
        widget_7->setMaximumSize(QSize(16777215, 248));
        label_3 = new QLabel(widget_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-2, 1, 332, 247));
        label_3->setMinimumSize(QSize(332, 247));
        label_3->setMaximumSize(QSize(332, 247));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/FastISP/image/def.png")));

        verticalLayout_3->addWidget(widget_7);

        widget_10 = new QWidget(widget_2);
        widget_10->setObjectName(QStringLiteral("widget_10"));

        verticalLayout_3->addWidget(widget_10);


        gridLayout->addWidget(widget_2, 0, 0, 2, 1);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_2 = new QVBoxLayout(widget_6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        plainTextEdit_output = new QPlainTextEdit(widget_6);
        plainTextEdit_output->setObjectName(QStringLiteral("plainTextEdit_output"));
        plainTextEdit_output->setReadOnly(false);

        verticalLayout_2->addWidget(plainTextEdit_output);

        widgetProcess = new QWidget(widget_6);
        widgetProcess->setObjectName(QStringLiteral("widgetProcess"));
        widgetProcess->setMinimumSize(QSize(332, 26));
        widgetProcess->setMaximumSize(QSize(16777215, 26));
        horizontalLayout_4 = new QHBoxLayout(widgetProcess);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        ProcesshorizontalLayout = new QHBoxLayout();
        ProcesshorizontalLayout->setSpacing(6);
        ProcesshorizontalLayout->setObjectName(QStringLiteral("ProcesshorizontalLayout"));
        label_4 = new QLabel(widgetProcess);
        label_4->setObjectName(QStringLiteral("label_4"));

        ProcesshorizontalLayout->addWidget(label_4);

        progressBar = new QProgressBar(widgetProcess);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        ProcesshorizontalLayout->addWidget(progressBar);


        horizontalLayout_4->addLayout(ProcesshorizontalLayout);


        verticalLayout_2->addWidget(widgetProcess);


        gridLayout->addWidget(widget_6, 0, 1, 2, 1);


        horizontalLayout->addWidget(widget_3);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        FastISPClass->setCentralWidget(centralWidget);

        retranslateUi(FastISPClass);

        QMetaObject::connectSlotsByName(FastISPClass);
    } // setupUi

    void retranslateUi(QMainWindow *FastISPClass)
    {
        FastISPClass->setWindowTitle(QApplication::translate("FastISPClass", "FastISP - \346\255\246\346\261\211\345\270\225\346\213\211\346\226\257\346\234\272\345\231\250\344\272\272\346\234\211\351\231\220\345\205\254\345\217\270", 0));
        groupBox->setTitle(QApplication::translate("FastISPClass", "\350\201\224\346\234\272\344\270\213\350\275\275\346\227\266\347\232\204\347\250\213\345\272\217\346\226\207\344\273\266", 0));
        toolButton_path->setText(QApplication::translate("FastISPClass", "...", 0));
        textEdit_path->setHtml(QApplication::translate("FastISPClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        checkBox_reloadfile->setText(QApplication::translate("FastISPClass", "\344\270\213\350\275\275\346\227\266\351\207\215\350\275\275\346\226\207\344\273\266", 0));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QApplication::translate("FastISPClass", "\344\270\262\345\217\243\351\205\215\347\275\256", 0));
        label->setText(QApplication::translate("FastISPClass", "\344\270\262\345\217\243:", 0));
        label_2->setText(QApplication::translate("FastISPClass", "\346\263\242\347\211\271\347\216\207:", 0));
        pushButton_readicinf->setText(QApplication::translate("FastISPClass", "\350\257\273\345\217\226\345\231\250\344\273\266\344\277\241\346\201\257", 0));
        pushButton_clearic->setText(QApplication::translate("FastISPClass", "\346\270\205\351\231\244\350\212\257\347\211\207", 0));
        pushButton_readflash->setText(QApplication::translate("FastISPClass", "\350\257\273FLASH", 0));
        pushButton_refreshcom->setText(QApplication::translate("FastISPClass", "\346\220\234\347\264\242\344\270\262\345\217\243", 0));
        pushButton_start->setText(QApplication::translate("FastISPClass", "\345\274\200\345\247\213\347\274\226\347\250\213", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("FastISPClass", "\344\270\213\350\275\275\350\277\233\345\272\246", 0));
    } // retranslateUi

};

namespace Ui {
    class FastISPClass: public Ui_FastISPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FASTISP_H
