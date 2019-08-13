#ifndef EMBEDDED_BOUNDARY_SRC_INPUTS_LINE_LINE_ZERO_H
#define EMBEDDED_BOUNDARY_SRC_INPUTS_LINE_LINE_ZERO_H

#include "inputs/input_base.h"
#include "helpers/geometry_objects.h"

#include <vector>

namespace boundary {

namespace inputs {

class LineGeometryZero : public InputBase{
  public:
    ~LineGeometryZero() = default;
    double BoundaryFunction(double x_value) override;
    double BoundaryDerivatives(helpers::Point a_point, std::vector<int> degree) override;
    double BoundaryInverse(double y_value) override;
    double Minimum() override;
    double Maximum() override;
    int Depth() override;
    int QOrder() override;

};

} // namespace inputs

} // namespace boundary

#endif // EMBEDDED_BOUNDARY_SRC_INPUTS_LINE_LINE_ZERO_H