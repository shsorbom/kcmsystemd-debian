/*******************************************************************************
 * Copyright (C) 2013-2015 Ragnar Thomsen <rthomsen6@gmail.com>                *
 *                                                                             *
 * This program is free software: you can redistribute it and/or modify it     *
 * under the terms of the GNU General Public License as published by the Free  *
 * Software Foundation, either version 2 of the License, or (at your option)   *
 * any later version.                                                          *
 *                                                                             *
 * This program is distributed in the hope that it will be useful, but WITHOUT *
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for    *
 * more details.                                                               *
 *                                                                             *
 * You should have received a copy of the GNU General Public License along     *
 * with this program. If not, see <http://www.gnu.org/licenses/>.              *
 *******************************************************************************/

#ifndef CONFMODEL_H
#define CONFMODEL_H

#include <QAbstractTableModel>

#include "confoption.h"

class ConfModel : public QAbstractTableModel
{
  Q_OBJECT
  
public:
  ConfModel(QObject *parent = 0, QList<confOption> *confOptList = 0);
  int rowCount(const QModelIndex & parent = QModelIndex()) const;
  int columnCount(const QModelIndex & parent = QModelIndex()) const;
  QVariant headerData(int section, Qt::Orientation orientation, int role) const;
  QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
  virtual bool setData(const QModelIndex & index, const QVariant & value, int role);
  Qt::ItemFlags flags (const QModelIndex & index) const;

private:
  QList<confOption> *m_optList;
};
  
#endif // CONFMODEL_H
