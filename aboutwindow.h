/*
 MabiMe Character Simulator - by Yai (Sophie N)
 Email: sinoc300@gmail.com
 Copyright (C) 2016

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QWidget>

namespace Ui {
class AboutWindow;
}

class AboutWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AboutWindow(QWidget *parent = 0);
    ~AboutWindow();

private slots:
    void on_b_ok_clicked();

private:
    Ui::AboutWindow *ui;
};

#endif // ABOUTWINDOW_H
