//copyright 2015 Ryan Howard
//rjhoward@stetson.edu


/*
    Class interpretation of a point and utils on points and sets of points
*/
#include "point.hpp"
#include <cmath>
#include <assert.h>
namespace point {

Point::Point(const std::vector<double> &dims_new) {
    for (int i = 0;i < dims_new.size(); i++) {
        dims.push_back(dims_new[i]);
    }
    dimension = dims_new.size();
}

Point::Point(const Point &new_point) : Point(new_point.dims) {
    dimension = new_point.dimension;
}

double Point::distance(const Point &second_point) {
    assert (dimension == second_point.dimension);
    double sum = 0;
    for(int i = 0;i < dimension;i++) {
        sum += pow(second_point.dims[i]-dims[i],2.0);
    }
    return sqrt(sum);
}
}
