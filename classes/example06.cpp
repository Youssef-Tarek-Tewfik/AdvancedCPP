#include <iostream>     // terminal input and output classes and objects

class GPSCoord {
 private:
  double lat, lng, elv;  // latitude, longitude, elevation
 public:
  GPSCoord(double lat, double lng, double e = 0.0): lat(lat), lng(lng), elv(e) {}
  // add the >> operator, so that the main function works as advertised
  // on any output stream. Use as a parameter: std::ostream & out
  void operator >> (std::ostream & out) {
    // print out the three attributes
    out << lat << ", " << lng << ", " << elv;
  }
};

int main() {
  GPSCoord point1(1.0, 2.0, 3.0);
  // print out the coordinates with the >> operator, followed by a newline
  point1 >> std::cout;
}
