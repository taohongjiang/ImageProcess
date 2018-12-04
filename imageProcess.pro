#-------------------------------------------------
#
# Project created by QtCreator 2018-11-27T17:20:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = imageProcess
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    widgets/timagedisplaywidget.cpp \
    controllers/timageselectwidget.cpp \
    widgets/tfunctiontoolbar.cpp \
    controllers/timageselectwidget.cpp

HEADERS  += mainwindow.h \
    widgets/timagedisplaywidget.h \
    controllers/timageselectwidget.h \
    widgets/tfunctiontoolbar.h \
    controllers/timageselectwidget.h

RESOURCES += \
    imageprocess.qrc

INCLUDEPATH += D:\opencv\opencv-3.4.1\include\opencv\
    D:\opencv\opencv-3.4.1\include\opencv2

win32:CONFIG(debug, debug|release): {
LIBS += -LD:\opencv\opencv-3.4.1\build\lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_aruco341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_bgsegm341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_bioinspired341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_calib3d341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_ccalib341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_core341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_datasets341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_dnn341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_dnn_objdetect341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_dpm341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_face341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_features2d341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_flann341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_fuzzy341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_hfs341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_highgui341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_imgcodecs341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_imgproc341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_img_hash341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_line_descriptor341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_ml341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_objdetect341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_optflow341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_phase_unwrapping341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_photo341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_plot341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_reg341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_rgbd341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_saliency341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_shape341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_stereo341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_stitching341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_structured_light341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_superres341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_surface_matching341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_text341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_tracking341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_ts341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_video341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_videoio341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_videostab341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_xfeatures2d341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_ximgproc341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_xobjdetect341d.lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_xphoto341d.lib
} else:win32:CONFIG(release, debug|release): {
LIBS += -LD:\opencv\opencv-3.4.1\build\lib \
    D:\opencv\opencv-3.4.1\build\lib\Debug\opencv_xphoto341d.lib
}

