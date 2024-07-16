#include "AbstractShapeButton.hpp"
#include <QToolBar>

AbstractShapeButton::AbstractShapeButton(const QString& text, QToolBar* parent): QPushButton{text, parent} {
	this->setCheckable(true);
}

void AbstractShapeButton::notImplemented() {
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