/* qt5-webkit-container - GPL2+ {{{
 * Copyright (C) 2016 Ian Firns
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * }}} */

#ifndef CONTAINER_H
#define CONTAINER_H

#include <QtWebKitWidgets>

class Container : public QWebView {
    Q_OBJECT

  public:
    explicit Container(QWidget *parent = 0);

    void load(const QUrl &url);

    void setFixedSize(int w, int h);
    void setScrollBars(bool state);
    void setVerbosity(bool state);

    ~Container();

  private:
    QWidget *splash;
    QUrl    url;
    bool    verbose;

  private slots:
    void loadFinished(bool ok);
    void loadStarted();
    void retry();
};

#endif // CONTAINER_H
