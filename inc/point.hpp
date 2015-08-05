//copyright 2015 Ryan Howard
//rjhoward@stetson.edu


/*
    Class interpretation of a point and utils on points and sets of points
*/
#ifndef POINT
#define POINT
#include <vector>
namespace point {
    class Point{
        std::vector<double> dims;
        int dimension;
        public:
            Point(const std::vector<double>&);
            Point(const Point&);
            double distance(const Point&);
            bool operator==(const Point& rhs) {
                if (dimension == rhs.dimension) {
                    for (int i = 0;i < dimension;i++) {
                        if (dims[i] != rhs.dims[i]) {return false;}
                    }
                    return true;
                }
                else {return false;}
            }
            bool operator!=(const Point& rhs) {
                for (int i =0;i<dimension;i++) {
                    if (dims[i] != rhs.dims[i]) {return true;}
                }
                return false;
            }
            Point operator+ (const Point&);
            Point operator- (const Point&);
            bool operator< (const Point&);
            bool operator> (const Point&);
            bool operator<=(const Point&);
            bool operator>=(const Point&);
    };
}
#endif //POINT
