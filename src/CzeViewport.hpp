#pragma once

#include "CzeWindow.hpp"
#include <QGraphicsView>

class CzeViewport : public CzeWindow
{
	Q_OBJECT

public:
	CzeViewport(QWidget* parent);
	QGraphicsView* opengl;
	QGraphicsScene* scene;
};
