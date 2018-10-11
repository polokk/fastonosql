/*  Copyright (C) 2014-2018 FastoGT. All right reserved.

    This file is part of FastoNoSQL.

    FastoNoSQL is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FastoNoSQL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FastoNoSQL.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gui/fasto_text_view.h"

#include <QVBoxLayout>

#include <fastonosql/core/db_key.h>

#include "gui/editor/fasto_editor_model_output.h"  // for FastoEditorModelOutput

Q_DECLARE_METATYPE(fastonosql::core::NValue)

namespace fastonosql {
namespace gui {

FastoTextView::FastoTextView(QWidget* parent) : QWidget(parent) {
  QVBoxLayout* mainL = new QVBoxLayout;

  editor_ = new FastoEditorModelOutput;
  editor_->setReadOnly(true);

  mainL->addWidget(editor_);
  mainL->setContentsMargins(0, 0, 0, 0);
  setLayout(mainL);
}

void FastoTextView::setModel(QAbstractItemModel* model) {
  editor_->setModel(model);
}

}  // namespace gui
}  // namespace fastonosql
