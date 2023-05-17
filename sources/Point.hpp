
#ifndef POINT_H
#define POINT_H  

// using namespace ariel;
namespace ariel
{
    
  class Point
  {
    public:
      Point(double x_axis, double y_axis);  // declare default constructor
      double distance(Point other);
      void print();
      Point moveTowards(Point orign, Point destenation, double distance);
      double getX();
      double getY();

    private:
      double x_axis;
      double y_axis;
  };
}
#endif