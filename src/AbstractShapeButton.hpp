#pragma once

#include <QPushButton>
#include <source_location>

class QToolBar;

class AbstractShapeButton : public QPushButton {
	Q_OBJECT
protected:
	static void notImplemented() {
		auto src_loc = std::source_location::current();
		throw std::runtime_error{ std::format(
			"Not implemented!\n"
			"File: {}\n"
			"Function: {}\n"
			"Line: {}\n",
			src_loc.file_name(),
			src_loc.function_name(),
			src_loc.line()
		) };
	}
public:
	AbstractShapeButton(const QString& text, QToolBar* parent);
	~AbstractShapeButton() = default;

	virtual void draw() = 0;
};