//copyright 2015 Ryan Howard
//rjhoward@stetson.edu


/*
    Class interpretation of a point and utils on points and sets of points
*/
#include "point.hpp"
#include <cmath>
namespace point {

Point::Point(std::Vector<double> dims_new) {
    for (int i = 0;i < dims_new.size(); i++) {
        dims.push_back(dims_new[i]);
    }
    dimension = dims_new.size()
}

Point::Point(Point new_point) : Point(new_point.dims) {
    dimension = new_point.dimension;
}

Point::distance(Point second_point) {
    //assert dimension == second_point.dimension
    // return sqrt(sigma(dims*second_point.dims))
}
}
