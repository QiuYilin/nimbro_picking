// Renders the load/torque field
// Author: Max Schwarz <max.schwarz@uni-bonn.de>

#ifndef BAR_DELEGATE_H
#define BAR_DELEGATE_H

#include <QStyledItemDelegate>

namespace rqt_servo_diagnostics
{

class BarDelegate : public QStyledItemDelegate
{
public:
	explicit BarDelegate(QObject* parent = 0);
	virtual ~BarDelegate();

	void setRange(double min, double max);

	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
private:
	double m_min;
	double m_max;
};

}

#endif

