//copyright 2015 Ryan Howard
//rjhoward@stetson.edu


/*
    Class interpretation of a point and utils on points and sets of points
*/
#include "point.hpp"
#include <vector>
#include <algorithm>
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
bool Point::operator<(const Point& lhs, const Point& rhs) {
    zero_vector = new std::vector<double>[lhs.dims];
    Point home = Point(std::fill(zero_vector.begin(), zero_vector.end(),0.0));
    return lhs.distance(home) < rhs.distance(home);
}
}
