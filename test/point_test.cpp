//copyright 2015 Ryan Howard
//rjhoward@stetson.edu

#include "point.hpp"
#define BOOST_TEST_MODUE PointTest
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>
using namespace point;
BOOST_AUTO_TEST_CASE(assign_from_point) {
  Point b = Point({3.0,4.0});
  Point c = Point(b);
  
  BOOST_CHECK(c == b);
}
BOOST_AUTO_TEST_CASE(test_distance) {
  Point a = Point({0.0,0.0});
  Point b = Point({3.0,4.0});
  BOOST_CHECK(a.distance(b) == 5.0);
}
