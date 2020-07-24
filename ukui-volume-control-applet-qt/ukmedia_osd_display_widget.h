/*
 * Copyright (C) 2019 Tianjin KYLIN Information Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/&gt;.
 *
 */
#ifndef UKMEDIAOSDDISPLAYWIDGET_H
#define UKMEDIAOSDDISPLAYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusMessage>
#include <QtDBus/QDBusInterface>
#include <QtDBus/QDBusObjectPath>
#include <QDBusReply>
#include "customstyle.h"
#include "ukmedia_volume_slider.h"
class UkmediaOsdDisplayWidget : public QWidget
{
public:
    UkmediaOsdDisplayWidget(QWidget *parent = nullptr);
    ~UkmediaOsdDisplayWidget();
    int getPanelPosition(QString str);
    int getPanelHeight(QString str);

    void UkmediaOsdDisplayWidgetInit();
    void UkmediaOsdSetIcon(QString iconStr);
    friend class DeviceSwitchWidget;
private:
    QWidget *osdWidget;
    double size;
    QPushButton *iconButton;
    int ret;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // UKMEDIAOSDDISPLAYWIDGET_H
