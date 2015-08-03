//copyright 2015 Ryan Howard
//rjhoward@stetson.edu


/*
    Class interpretation of a point and utils on points and sets of points
*/
#ifndef POINT
#define POINT
namespace point {
    class Point{
        std::Vector<double> dims;
        int dimension;
        public:
            Point(std::Vector);
            Point(Point);
            double distance(Point);
    };
}
#endif //POINT