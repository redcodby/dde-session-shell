/*
 * Copyright (C) 2011 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "dbuslockfrontservice.h"

/*
 * Implementation of interface class DBusLockFront
 */

DBusLockFrontService::DBusLockFrontService(DBusLockAgent *parent)
    : QDBusAbstractAdaptor(parent)
{
    setAutoRelaySignals(true);
}

DBusLockFrontService::~DBusLockFrontService()
{
}

void DBusLockFrontService::Show()
{
    parent()->Show();
}

void DBusLockFrontService::ShowUserList()
{
    parent()->ShowUserList();
}

void DBusLockFrontService::ShowAuth(bool active)
{
    parent()->ShowAuth(active);
}

void DBusLockFrontService::Suspend(bool enable)
{
    parent()->Suspend(enable);
}

void DBusLockFrontService::Hibernate(bool enable)
{
    parent()->Hibernate(enable);
}

/**
 * @brief 自动切换到此用户的TTY并显示锁屏程序。此功能虽然为域管开发，但非域管情景也可以使用
 * 
 */
void DBusLockFrontService::SwitchTTYAndShow() 
{
    parent()->SwitchTTYAndShow();
}

