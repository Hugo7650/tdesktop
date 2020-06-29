/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#ifndef TDESKTOP_DISABLE_SPELLCHECK

#include "boxes/abstract_box.h"

namespace Window {
class SessionController;
} // namespace Window

namespace Ui {

class ManageDictionariesBox : public Ui::BoxContent {
public:
	ManageDictionariesBox(
		QWidget*,
		not_null<Window::SessionController*> controller);

protected:
	void prepare() override;
	void setInnerFocus() override;

private:
	const not_null<Window::SessionController*> _controller;
	Fn<void()> _setInnerFocus;

};

} // namespace Ui

#endif // !TDESKTOP_DISABLE_SPELLCHECK
